#pragma once
#ifndef FLYNOWAY_H
#define FLYNOWAY_H
#include "FlyBehavior.h"
//�����ǴӴӽӿ���FlyBehavior�̳ж����ģ�����ʵ�ֲ����з�����Ϊ����
class FlyNoWay :
	public FlyBehavior {
public:
	FlyNoWay();
	~FlyNoWay();
	void fly() const override;//override˵�����ǽӿ����virtual void fly();
};

#endif // !FLYNOWAY_H
