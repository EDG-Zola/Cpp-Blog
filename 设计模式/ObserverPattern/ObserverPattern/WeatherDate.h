#pragma once
#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <iostream>
#include <vector>
#include "Subject.h"
#include "Observer.h"
class WeatherDate :
	public Subject {
public:
	WeatherDate();
	~WeatherDate();
	//�Զ���Ĺ��캯��
	WeatherDate(float temp, float hmdy, float pse, std::vector<std::shared_ptr<Observer>>  voberbers) :
		temperature(temp), humidity(hmdy), pressure(pse), vpOberbers(voberbers) {}
	//�Զ���Ĺ��캯��
	WeatherDate(std::vector<std::shared_ptr<Observer>>  voberbers) :
		vpOberbers(voberbers) {}
	void registerObserver(Observer &rhs) override;//override��ȷ����Ҫ���ǻ����virtual����
	void removeObserver(Observer &rhs) override;//override��ȷ����Ҫ���ǻ����virtual����
	void notifyObserver()override;//override��ȷ����Ҫ���ǻ����virtual����
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
private:
	float temperature;
	float humidity;
	float pressure;
	//����ָ�����飨�����е�ÿһ����Ա����һ��ָ��Observer���������ָ�룩
	std::vector<std::shared_ptr<Observer>> vpOberbers;
};
#endif // !WEATHERDATA_H

