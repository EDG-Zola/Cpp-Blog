#pragma once
#ifndef  FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

//����һ������ķ�����Ϊ�Ľӿ���
class FlyBehavior {

public:
	FlyBehavior();
	~FlyBehavior();
	virtual void fly() const = 0;//pure-virtual+const��Ա������ÿ��������Ϊ��Ҫ�̳в���д�ú���
};

#endif // ! FLYBEHAVIOR_H



