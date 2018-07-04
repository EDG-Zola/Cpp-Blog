#pragma once
#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <iostream>
#include <vector>
#include "Subject.h"
#include "Observer.h"
#include "CurrentConditionDisplay.h"
class WeatherDate :
	public Subject {
public:
	WeatherDate();
	~WeatherDate();
	//�Զ���Ĺ��캯��
	WeatherDate(float temp, float hmdy, float pse, std::vector<std::shared_ptr<Observer>>  voberbers) :
		temperature(temp), humidity(hmdy), pressure(pse), vpOberbers(voberbers) {}
	void registerObserver(const std::shared_ptr<Observer> &rhs) override;//override��ȷ����Ҫ���ǻ����virtual����
	void removeObserver(const std::shared_ptr<Observer> &rhs) override;//override��ȷ����Ҫ���ǻ����virtual����
	void notifyObserver()override;//override��ȷ����Ҫ���ǻ����virtual����
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
private:
	float temperature;
	float humidity;
	float pressure;
	std::vector<std::shared_ptr<Observer>> vpOberbers;//����ָ�����飨�����е�ÿһ����Ա����һ��ָ��Observer���������ָ�룩
};



#endif // !WEATHERDATA_H

