#pragma once
#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H
//����һ������Ľе���Ϊ�Ľӿ���
class QuackBehavior {
public:
	QuackBehavior();
	~QuackBehavior();
	virtual void quack() const = 0;//pure-virtual+const��Ա������ÿ�����не���Ϊ��Ҫ�̳в���д�ú���
};


#endif // !QUACKBEHAVIOR_H

