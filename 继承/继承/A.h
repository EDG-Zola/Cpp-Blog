#pragma once
#ifndef A_H
#define A_H
class B;//ǰ��������A��Ķ����⣡�����������
class PublicB;
class ProtectedB;
class PrivateB;
class A {
	friend PublicB;
	friend ProtectedB;
	friend PrivateB;
	friend B;
public:
	int publicValue;
	A();//��������Ĭ�Ϲ��캯��
	A(int pbV, int ptV, int pvV);//�Լ������Ĺ��캯��
	virtual ~A();//Ϊ��̬��������virtual��������
	void funA();
	
	const int& getPrivateValue();//ͨ��public��������private�����������������оͿ���ͨ���ú������ʻ����private������
protected:
	int protectedValue;
private:
	
	void setPrivateValue(int pv);//�ô˺�����֤���������ı�A���˽�б���
	int privateValue;
};

#endif // !A_H


