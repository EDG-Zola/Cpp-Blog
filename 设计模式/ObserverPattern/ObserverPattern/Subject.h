#pragma once
#ifndef SUBJECT_H
#include <memory>
class Observer;//ǰ������
//����һ������Subject�Ľӿ���
class Subject {
public:
	Subject();
	~Subject();
	virtual void registerObserver(std::shared_ptr<Observer> pObserver) const = 0;
	virtual void removeObserver(std::shared_ptr<Observer> pObserver) const = 0;
	virtual void notifyObserver(std::shared_ptr<Observer> pObserver) const = 0;
private:
	std::shared_ptr<Observer> pObserver;//ӵ��һ��ָ��Observer������ָ���Ա
};


#endif // !SUBJECT_H

#define SUBJECT_H



