#pragma once
#ifndef MODELDUCK_H
#define MODELDUCK_H
//ModelDuck�̳�Duck�࣬��Ѽ�����һ��������
#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
class ModelDuck :
	public Duck {
public:
	ModelDuck() = default;//�˹��캯�������Duck�Ĺ��캯��
	~ModelDuck();
	void display() const override;//������ʾ�����Ѽ�������

};


#endif // !MODELDUCK_H


