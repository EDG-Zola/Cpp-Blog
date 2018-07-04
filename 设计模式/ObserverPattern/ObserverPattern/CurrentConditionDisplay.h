#pragma once
#ifndef  CURRENTDISPLAY_H
#define CURRENTDISPLAY_H
#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
//�����ʵ����CurrentConditionDisplayʹ���˶��ؼ̳�
//�̳���Observer��DisplayElement
//ע�⣬��ʹ�ö��ؼ̳�ʱ�����̳еĻ��಻Ӧ�ڻ����з������ݳ�Ա
class CurrentConditionDisplay :
	public Observer,
	public DisplayElement{
public:
	CurrentConditionDisplay();
	//�Զ���Ĺ��캯��
	////****************���ݳ�ԱΪ����ָ��ʱ�ô˺���**************//
	//CurrentConditionDisplay(std::shared_ptr<Subject> &wd){
	//	this->weatherData = wd;//�����this->����ʡ��
	//	//����Subject�ӿ����registerObserver��������Ϊvoid registerObserver(Observer &rhs)
	//	//��˾����ʵ�������weatherDate����ʱ����thisָ���ǲ��еģ���Ҫ������ָ�����ֵ*this
	//	//���ñ����ʼ����ָ�����Ķ��󣬶�����ָ���ʼ��ָ�����ĵ�ַ
	//	CurrentConditionDisplay& rthis = *this;
	//	//ע��Ϊ�۲��ߡ���������˶�̬�󶨣���̬����ΪObserver &rhs����̬����ΪCurrentConditionDisplay& rthis
	//	weatherData->registerObserver(rthis);
	//}
	//****************���ݳ�ԱΪ��ָͨ��ʱ�ô˺���**************//
	CurrentConditionDisplay(Subject* wd) {
		this->weatherData = wd;//�����this->����ʡ��
							   //����Subject�ӿ����registerObserver��������Ϊvoid registerObserver(Observer &rhs)
							   //��˾����ʵ�������weatherDate����ʱ����thisָ���ǲ��еģ���Ҫ������ָ�����ֵ*this
							   //���ñ����ʼ����ָ�����Ķ��󣬶�����ָ���ʼ��ָ�����ĵ�ַ
		CurrentConditionDisplay& rthis = *this;
		//ע��Ϊ�۲��ߡ���������˶�̬�󶨣���̬����ΪObserver &rhs����̬����ΪCurrentConditionDisplay& rthis
		weatherData->registerObserver(rthis);
	}

	~CurrentConditionDisplay();

	void update(float temp, float humidity, float pressure) override;//��Observer�ӿ����м̳й���
	void display() override;//��DisplayElement�ӿ����м̳й���
private:
	float temperature;
	float humidity;
	float pressure;
	Subject* weatherData;//������ݳ�ԱΪָ��Subject��ָ�룬�Ƿ���������ָ�������
	//std::shared_ptr<Subject> weatherData;//����ָ���������
};


#endif // ! CURRENTDISPLAY_H


