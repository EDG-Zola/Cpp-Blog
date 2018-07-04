#pragma once
#ifndef FORCASTDISPLAY_H
#define FORCASTDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherDate.h"
//���ؼ̳У�����CurrentConditionDisplay
//ͨ����ѹԤ��δ��������
class ForecastDisplay :
	public Observer,
	public DisplayElement {
public:
	ForecastDisplay();
	//�Զ���Ĺ��캯��
	ForecastDisplay(WeatherDate* wd){
		this->weatherData = wd;
		ForecastDisplay &rthis = *this;
		weatherData->registerObserver(rthis);//ע��Ϊ�۲���
	}

	~ForecastDisplay();
	void update(float temp, float humidity, float pressure) override;//��Observer�ӿ����м̳й���
	void display() override;//��DisplayElement�ӿ����м̳й���
private:
	float currentPressure = 29.92f;
	float lastPressure;
	WeatherDate* weatherData;
};



#endif // !FORCASTDISPLAY_H
