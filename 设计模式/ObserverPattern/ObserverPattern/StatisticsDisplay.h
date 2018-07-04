#pragma once
#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherDate.h"
//���ؼ̳У�����CurrentConditionDisplay
//ͳ�Ƶ�ǰ��ƽ��/���/��С�¶�ֵ
class StatisticsDisplay :
	public Observer,
	public DisplayElement {
public:
	StatisticsDisplay();
	//�Զ���Ĺ��캯��
	StatisticsDisplay(WeatherDate* wd) : weatherData(wd) {
		StatisticsDisplay &rthis = *this;
		weatherData->registerObserver(rthis);//ע��Ϊ�۲���
	}
	~StatisticsDisplay();
	void update(float temp, float humidity, float pressure) override;//��Observer�ӿ����м̳й���
	void display() override;//��DisplayElement�ӿ����м̳й���
private:
	float maxTemp = 0.0f;//����¶�
	float minTemp = 200;//��С�¶�
	float tempSum = 0.0f;//�¶��ܺ�
	int numReadings;//���´���
	//�����Ƿ������Subjectָ�룿
	WeatherDate* weatherData;//������˼���������ˣ�Ӧ��ΪWeatherData�����ø���
};

#endif // !STATISTICSDISPLAY_H


