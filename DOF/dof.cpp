#include "dof.h"
#include <QDebug>
#pragma once
#pragma execution_character_set("utf-8") 

DOF::DOF(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(add()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(help()));



	QStringList headerList;
	headerList << "WD" << "Near" << "Far" << "DOF";

	//重新创建表头
	ui.tableWidget->setColumnCount(4);
	ui.tableWidget->setHorizontalHeaderLabels(headerList);


}


void DOF::add()
{
	int tableRow = ui.tableWidget->rowCount();
	for (int n = 0; n < tableRow + 1; n++)
	{
		ui.tableWidget->removeRow(0);
	}
	double FN = ui.doubleSpinBox->text().toDouble();			//F Number
	if (FN <= 0)
	{
		OutputErrorInfo("光圈设置错误！");
		return;
	}

	int f = ui.spinBox->text().toInt();							//焦距
	if (f <= 0)
	{
		OutputErrorInfo("焦距设置错误！");
		return;
	}

	double B = ui.doubleSpinBox_2->text().toDouble();			//允许弥散斑直径
	if (B<= 0)
	{
		OutputErrorInfo("弥散斑直径设置错误！");
		return;
	}

	int L1 = ui.spinBox_2->text().toInt();
	int L2 = ui.spinBox_3->text().toInt();
	int dl = ui.spinBox_4->text().toInt();
	if (L1 <= 0 || L2 <= 0 || dl <= 0)
	{
		OutputErrorInfo("物距设置错误！");
		return;
	}

	float D = f / FN;
	double Near, Far, DOF;
	Near = Far = DOF = 0;
	int i = 0;
	for (int L = L1; L <= L2; L = L + dl)
	{
		Near = L*f*(D / (f*D + L*B));
		Far = L*f*(D / (f*D - L*B));
		DOF = Far - Near;
		ui.tableWidget->insertRow(i);
		ui.tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(L)));
		ui.tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(Near)));
		ui.tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(Far)));
		ui.tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(DOF)));
		if (Far < 0)
		{
			ui.tableWidget->setItem(i, 2, new QTableWidgetItem("Infinity"));
			ui.tableWidget->setItem(i, 3, new QTableWidgetItem("Infinity"));
		}
		i++;
	}
	

	
}

void DOF::help()
{
	OutputHelpInfo("通过数过渡带究竟有几个像素来判断图像是否可接受\n通常等于2-3倍像元尺寸");

}

void DOF::OutputErrorInfo(QString sErrorInfo)
{
	
	QMessageBox::warning(NULL, "警告", QString(sErrorInfo));

	return;
}


void DOF::OutputHelpInfo(QString sHelpInfo)
{
	QMessageBox::information(NULL, "帮助", QString(sHelpInfo));

	return;

}


DOF::~DOF()
{

}
