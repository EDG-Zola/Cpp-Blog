#pragma once
#ifndef A_H
#define A_H

class A
{
public:
	int publicValue;
	A();//��������Ĭ�Ϲ��캯��
	A(int pbV, int pbV1, int ptV);//�Լ������Ĺ��캯��
	virtual ~A();//Ϊ��̬��������virtual��������
	void funA();
protected:
	int protectedValue;
private:
	int privateValue;
};


#endif // !A_H


