#pragma once
#ifndef SUBJECT_H
#define SUBJECT_H

#include <memory>
class Observer;//ǰ������
//����һ������Subject�ĳ���ӿ���
class Subject {
public:
	Subject();
	virtual ~Subject();
	virtual void registerObserver(Observer &rhs) = 0;
	virtual void removeObserver(Observer &rhs)= 0;
	virtual void notifyObserver() = 0;
};


#endif // !SUBJECT_H





