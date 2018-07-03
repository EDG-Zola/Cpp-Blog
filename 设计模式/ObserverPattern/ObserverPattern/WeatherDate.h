#pragma once
#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <iostream>
#include <vector>
#include "Subject.h"
class WeatherDate :
	public Subject {
public:
	WeatherDate();
	~WeatherDate();
	void registerObserver(std::shared_ptr<Observer> pObserver) const override;//override��ȷ����Ҫ���ǻ����virtual����
	void removeObserver(std::shared_ptr<Observer> pObserver) const override;//override��ȷ����Ҫ���ǻ����virtual����
	virtual void notifyObserver(std::shared_ptr<Observer> pObserver) const override;//override��ȷ����Ҫ���ǻ����virtual����
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
private:
	float temperature;
	float humidity;
	float pressure;
	std::vector<std::shared_ptr<Observer> > vpOberbers;//����ָ�����飨�����е�ÿһ����Ա����һ��ָ��Observer���������ָ�룩
};



#endif // !WEATHERDATA_H

