#pragma once
#ifndef A_H
#define A_H

class A {
	class PrivateB;//ǰ������
	friend PrivateB;//����PrivateB��ΪA�����Ԫ
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
	int privateValue;
};

#endif // !A_H


