#pragma once
#ifndef PUBLICB_H
#define PUBLICB_H

//���Ҫ�ӿ���ʵ�ַ��룬pimp������Ӧ����include������
//Ӧʹ��ǰ������class A;
//��������ֻ����public��protected��private�������۽ӿ���ʵ�ַ���
#include "A.h"  
#include<iostream>
//PublicB��public��ʽ�̳�A
class PublicB :
	public A {
public:
	int publicValueB;//PublicB��public��Ա
	PublicB();
	PublicB(int pbV);
	void funB();
	~PublicB();
};

#endif // !PUBLICB_H



