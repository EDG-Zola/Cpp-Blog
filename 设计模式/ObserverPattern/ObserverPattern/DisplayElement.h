#pragma once
#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H
//����һ��������ʾ�ĳ���ӿ���
class DisplayElement {
public:
	DisplayElement();
	~DisplayElement();
	virtual void display() = 0;
};


#endif // !DISPLAYELEMENT_H


