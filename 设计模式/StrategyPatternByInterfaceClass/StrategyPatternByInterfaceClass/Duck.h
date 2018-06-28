#pragma once
#ifndef DUCK_H
#define DUCK_H
#include <memory>//Ҫ��������ָ�룬�������ͷ�ļ�
//����һ��Ѽ����Ļ��࣬�����Ѽ���ࣨMallarDuck,RedheadDuck,RubberDuck,DecoyDuck�̳иû��ࣩ
class FlyBehavior;//������Ϊ���ǰ������������#include��ʵ�ֽӿ���ʵ�ַ���
class QuackBehavior;//�е���Ϊ���ǰ������������#include��ʵ�ֽӿ���ʵ�ַ���
class Duck {
public:
	Duck() = default;//�Զ��ϳɵ�Ĭ�Ϲ��캯��
	//�Զ���Ĺ��캯��
	Duck(std::shared_ptr<FlyBehavior> pFB, std::shared_ptr<QuackBehavior> pQB) : pFlyBehavior(pFB), pQuackBehavior(pQB) {}
	virtual void display() const = 0;//pure-virtual + const�Ľӿڣ������Ѽ����Ҫ�̳в���д�������
	~Duck();
	void performFly();//����fly����
	void performQuack();//����quack����
	void setFlyBehavior(const std::shared_ptr<FlyBehavior> rhs);
	void setQuackBehavior(const std::shared_ptr<QuackBehavior> rhs);
private:
	std::shared_ptr<FlyBehavior> pFlyBehavior;//ʹ������ָ�룬ʵ�ָ��ϣ�HAS-A�Ĺ�ϵ������ʾDuck�����һ��FlyBehavior��Ϊ��
	std::shared_ptr<QuackBehavior> pQuackBehavior;//ʹ������ָ�룬ʵ�ָ��ϣ�HAS-A�Ĺ�ϵ������ʾDuck�����һ��QuackBehavior��Ϊ��
};


#endif // !DUCK_H

