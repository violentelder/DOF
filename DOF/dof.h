#ifndef DOF_H
#define DOF_H

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include "ui_dof.h"

class DOF : public QMainWindow
{
	Q_OBJECT

public:
	DOF(QWidget *parent = 0);
	~DOF();

private:
	Ui::DOFClass ui;

	void OutputErrorInfo(QString sErrorInfo);
	void OutputHelpInfo(QString sHelpInfo);

	private slots:
	void add();
	void help();
};

#endif // DOF_H
