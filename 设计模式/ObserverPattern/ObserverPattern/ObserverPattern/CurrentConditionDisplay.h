#pragma once
#ifndef  CURRENTDISPLAY_H
#define CURRENTDISPLAY_H


#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
//�����ʵ����CurrentConditionDisplayʹ���˶��ؼ̳ж��
//�̳���Observer��DisplayElement
//ע�⣬��ʹ�ö��ؼ̳�ʱ�����̳еĻ��಻Ӧ�ٻ����з������ݳ�Ա
class CurrentConditionDisplay :
	public Observer,
	public DisplayElement {
public:
	CurrentConditionDisplay();
	//�Զ���Ĺ��캯��
	CurrentConditionDisplay(Subject* wd) : weatherDate(wd) {
		weatherDate->registerObserver();//ע��Ϊ�۲���
	}
	~CurrentConditionDisplay();

	void update(float temp, float humidity, float pressure) override;
	void display() override;
private:
	float temperature;
	float humidity;
	float pressure;
	Subject* weatherDate;
};


#endif // ! CURRENTDISPLAY_H


