#pragma once
#ifndef SUBJECT_H
#include <memory>
class Observer;//ǰ������
//����һ������Subject�Ľӿ���
class Subject {
public:
	Subject();
	virtual ~Subject();
	virtual void registerObserver(const std::shared_ptr<Observer> &rhs) = 0;
	virtual void removeObserver(const std::shared_ptr<Observer> &rhs)= 0;
	virtual void notifyObserver() = 0;
//private:
//	std::shared_ptr<Observer> pObserver;//ӵ��һ��ָ��Observer������ָ���Ա
};


#endif // !SUBJECT_H

#define SUBJECT_H



