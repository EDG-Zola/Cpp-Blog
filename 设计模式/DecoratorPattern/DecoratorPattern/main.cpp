//װ���ߺͱ�װ���߶�������ͬ��Beverage����
#include "Beverage.h"
//����ʵ�ֵı�װ����
#include "Espreso.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Decab.h"
//����ʵ�ֵ�װ����
#include "CondimentDecorator.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"
#include "Milk.h"

#include<iostream>
using namespace std;
int main() {
	//����һ��Espreso,��ʾ��۸�
	std::shared_ptr<Beverage> beverage(new Espreso());
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	//��һ��DarkRoast����������Mocha,һ��Whip
	std::shared_ptr<Beverage> beverage2(new DarkRoast());
	//��������ָ�����ʹ��ֱ�ӳ�ʼ������������ָ��ĸ�ֵ�����=�������߶���������ͬ���ͣ�
	//����beverage2 = new Mocha(beverage2);�ǲ��е�
	//��Ϊ�ұ߷��ص�����ΪMocha*��������std::shared_ptr<Beverage>
	beverage2 = std::shared_ptr<Beverage>(new Mocha(beverage2));
	beverage2  = std::shared_ptr<Beverage>(new Mocha(beverage2));
	beverage2 = std::shared_ptr<Beverage>(new Whip(beverage2));
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	std::shared_ptr<Beverage> beverage3(new HouseBlend());
	beverage3 = std::shared_ptr<Beverage>(new Soy(beverage3));
	beverage3 = std::shared_ptr<Beverage>(new Mocha(beverage3));
	beverage3 = std::shared_ptr<Beverage>(new Whip(beverage3));
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;

	//���е��ϵĳ�Ա����Ϊ��ָͨ��Beverage*ʱ���÷����£�
	/*
	Beverage *beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;
	*/
	system("pause");
	return 0;
}