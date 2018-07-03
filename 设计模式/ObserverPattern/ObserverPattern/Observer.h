#pragma once

#ifndef OBSERVER_H
#define OBSERVER_H
//����һ���۲���Observer�Ľӿ���
class Observer {
public:
	Observer();
	~Observer();
	virtual void update(float temp, float humidity, float pressure) = 0;
};

#endif // !OBSERVER_H


