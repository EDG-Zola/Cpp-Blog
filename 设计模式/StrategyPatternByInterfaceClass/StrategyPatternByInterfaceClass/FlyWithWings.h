#pragma once
#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H
#include "FlyBehavior.h"
//�����ǴӴӽӿ���FlyBehavior�̳ж����ģ�����ʵ�־��з�����Ϊ����
//class FlyBehavior;//����Ҫpublic�̳�FlyBehavior�Ľӿڣ�����Ҫ��ͷ�ļ���������ǰ������
class FlyWithWings :
	public FlyBehavior {
public:
	FlyWithWings();
	~FlyWithWings();
	void fly() const override;//override˵�����ǽӿ����virtual void fly();
};


#endif // !


