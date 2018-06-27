#include"A.h"
#include"PublicB.h"
#include"ProtectedB.h"
#include"PrivateB.h"
#include"B.h"
#include<iostream>
int main() {
	/*һ������A���public��protected��private��Ա*/
	std::cout << "һ������A���public��protected��private��Ա" << std::endl;
	A a(1,2,3);
	a.funA();
	std::cout << "a.publicValue = " << a.publicValue << std::endl;//��ȷ�������û�����A��public��Ա
	//std::cout << a.protectedValue << std::endl; //���������û����ܷ���A��protected��Ա
	//std::cout << a.privateValue << std::endl;//���������û����ܷ���A��private��Ա
	std::cout << "sizeof(a) = " << sizeof(a) << std::endl;
	std::cout << "------------------�����ķָ���------------------" << std::endl << std::endl;//��ȷ�������û�����A��public��Ա

	/*��������PublicB���public��protected��private��Ա*/
	std::cout << "��������PublicB���public��protected��private��Ա" << std::endl;
	PublicB m_publicB(1,2,10,4);//10ΪPublicB���private����
	m_publicB.funB();//��ȷ�������û�����PublicB��public��Ա����
	std::cout << "m_publicB.publicValueB = " << m_publicB.publicValueB << std::endl;//��ȷ�������û�����PublicB��public��Ա
	std::cout << "m_publicB.publicValue = " << m_publicB.publicValue << std::endl;//��ȷ�������û�����PublicB�̳�A����public��Ա,,����ֵ�Ƕ����أ�
	//std::cout << m_publicB.protectedValue << std::endl;//���������û����ܷ���PublicB�̳�A����protected��Ա
	//std::cout << m_publicB.privateValue << std::endl;//���������û����ܷ���PublicB�̳�A����privateValue��Ա
	std::cout << "sizeof(m_publicB) = " << sizeof(m_publicB) << std::endl;
	std::cout << "------------------�����ķָ���------------------" << std::endl << std::endl;

	/*��������ProtectedB���public��protected��private��Ա*/
	std::cout << "��������ProtectedB���public��protected��private��Ա" << std::endl;
	ProtectedB m_protectedB(1,2,11,5);//11ΪProtectedB���private����
	m_protectedB.funB();//��ȷ�������û�����ProtectedB��public��Ա����
	std::cout << "m_protectedB.publicValueB = " << m_protectedB.publicValueB << std::endl;//��ȷ�������û�����ProtectedB��public��Ա
	//��������û�����ProtectedB�̳�A����public��Ա,����ProtectedB���б����protected��Ա
	//std::cout << "m_protectedB.publicValue = " << m_protectedB.publicValue << std::endl;//���������û����ܷ���ProtectedB���protected��Ա
	//std::cout << m_publicB.protectedValue << std::endl;//���������û����ܷ���ProtectedB�̳�A����protected��Ա��������ProtectedB���protected��Ա
	//std::cout << m_publicB.privateValue << std::endl;//���������û����ܷ���ProtectedB�̳�A����privateValue��Ա��������ProtectedB���protected��Ա
	std::cout << "sizeof(m_protectedB) = " << sizeof(m_protectedB) << std::endl;
	std::cout << "------------------�����ķָ���------------------" << std::endl << std::endl;


	/*�ġ�����PrivateB���public��protected��private��Ա*/
	std::cout << "�ġ�����PrivateB���public��protected��private��Ա" << std::endl;
	PrivateB m_privateB(1,2,12,6);//12ΪPrivateB���private����
	m_privateB.funB();//��ȷ�������û�����ProtectedB��public��Ա����
	std::cout << "m_privateB.publicValueB = " << m_privateB.publicValueB << std::endl;//��ȷ�������û�����m_privateB��public��Ա
	//��������û�����m_privateB�̳�A����public��Ա,����m_privateB���б����private��Ա
	//std::cout << "m_privateB.publicValue = " << m_privateB.publicValue << std::endl;//���������û����ܷ���PrivateB���private��Ա
	//std::cout << m_privateB.protectedValue << std::endl;//���������û����ܷ���PrivateB�̳�A����protected��Ա,������PrivateB���private��Ա
	//std::cout << m_privateB.privateValue << std::endl;//���������û����ܷ���PrivateB�̳�A����privateValue��Ա��������PrivateB���private��Ա
	std::cout << "sizeof(m_privateB) = " << sizeof(m_privateB) << std::endl;
	std::cout << "------------------�����ķָ���------------------" << std::endl << std::endl;
	
	/*�塢����B�����ı�A���private��Ա*/
	std::cout << "�塢����B�����ı�A���private��Ա" << std::endl;
	B b;
	b.print();
	system("pause");
	std::cout << "------------------�����ķָ���------------------" << std::endl << std::endl;
	return 0;
}