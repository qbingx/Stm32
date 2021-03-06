#ifndef STM32_H
#define STM32_H

#include <QtWidgets/QMainWindow>
#include "ui_stm32.h"
#include "slavethread.h"
#include "data.h"
#include <QtSerialPort/QSerialPortInfo>
#include "datapacket.h"

class Stm32 : public QMainWindow
{
	Q_OBJECT

public:
	Stm32(QWidget *parent = 0);
	~Stm32();

	

private slots:
	void startSlave();
	void showRequest(const QString &s);
	void processError(const QString &s);
	void processTimeout(const QString &s);
	void activateRunButton();
	void showSimulateData();

private:
	Ui::Stm32Class ui;

	int transactionCount;
	SlaveThread thread;
	Data simulateData;
	DataPacket m_dataPacket;
	Data_STATEACK_TypeDef DataStateAck;
	Data_MOVE_TypeDef DataMove;//

	QByteArray m_reponseData;
	QByteArray m_requestData;
};

#endif // STM32_H
