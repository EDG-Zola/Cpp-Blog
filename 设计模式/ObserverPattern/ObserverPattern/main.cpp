#include "DisplayElement.h"//ֻ������ʾ�Ľӿ���
#include "Observer.h"//ֻ���ڸ������ݵĽӿ���
#include "CurrentConditionDisplay.h"//��ǰ��ʪ�Ȳ����
#include "StatisticsDisplay.h"//ͳ�Ƶ�ǰƽ��/���/��С�¶�ֵ�Ĳ����
#include "ForecastDisplay.h" //Ԥ����ѹ�����
#include "Subject.h"//����ӿ���
#include "WeatherDate.h"//���������ʵ��

#include <iostream>
int main() {
	WeatherDate weatherData;
	
	//��ʹ������ָ��ʱ
	//CurrentConditionDisplay currentDisplay(std::shared_ptr<Subject> &weatherData);�����в�ͨ��û�������Ϊʲô�أ�
	//CurrentConditionDisplay(Subject* wd),��������Ҳ���ж�̬��
	CurrentConditionDisplay currentDisplay(&weatherData);
	StatisticsDisplay statisticsDisplay(&weatherData);
	ForecastDisplay forecastDisplay(&weatherData);
	std::cout << "��һ�����ݸ��£���֪ͨ���еĹ۲���" << std::endl;
	weatherData.setMeasurements(80, 65, 30.4f);//ģ���µ��������ݲ���
	std::cout << "�ڶ������ݸ��£���֪ͨ���еĹ۲���" << std::endl;
	weatherData.setMeasurements(82, 70, 29.2f);//ģ���µ��������ݲ���
	std::cout << "���������ݸ��£���֪ͨ���еĹ۲���" << std::endl;
	weatherData.setMeasurements(78, 90, 29.2f);//ģ���µ��������ݲ���
}