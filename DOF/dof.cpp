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

	//���´�����ͷ
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
		OutputErrorInfo("��Ȧ���ô���");
		return;
	}

	int f = ui.spinBox->text().toInt();							//����
	if (f <= 0)
	{
		OutputErrorInfo("�������ô���");
		return;
	}

	double B = ui.doubleSpinBox_2->text().toDouble();			//������ɢ��ֱ��
	if (B<= 0)
	{
		OutputErrorInfo("��ɢ��ֱ�����ô���");
		return;
	}

	int L1 = ui.spinBox_2->text().toInt();
	int L2 = ui.spinBox_3->text().toInt();
	int dl = ui.spinBox_4->text().toInt();
	if (L1 <= 0 || L2 <= 0 || dl <= 0)
	{
		OutputErrorInfo("������ô���");
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
	OutputHelpInfo("ͨ�������ɴ������м����������ж�ͼ���Ƿ�ɽ���\nͨ������2-3����Ԫ�ߴ�");

}

void DOF::OutputErrorInfo(QString sErrorInfo)
{
	
	QMessageBox::warning(NULL, "����", QString(sErrorInfo));

	return;
}


void DOF::OutputHelpInfo(QString sHelpInfo)
{
	QMessageBox::information(NULL, "����", QString(sHelpInfo));

	return;

}


DOF::~DOF()
{

}
