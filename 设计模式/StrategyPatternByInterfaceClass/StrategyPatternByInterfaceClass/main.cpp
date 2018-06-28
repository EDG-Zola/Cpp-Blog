#include <iostream>

//#include "Duck.h"
#include "ModelDuck.h"
#include "RedHeadDuck.h"

//#include "FlyBehavior.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"

//#include "QuackBehavior.h"
#include "MuteQuack.h"
#include "Squeak.h"
int main() {
	ModelDuck model = ModelDuck();//ʹ�úϳɵ�Ĭ�Ϲ��캯������һ��ModelDuck����

	const std::shared_ptr<FlyBehavior> pFNW(new FlyNoWay);//ģ��Ѽ�Ӳ����
	model.setFlyBehavior(pFNW);

	const std::shared_ptr<Squeak> pS(new Squeak);//ģ��Ѽ�ӻ��
	model.setQuackBehavior(pS);

	model.display();//չʾģ��Ѽ��
	model.performFly();//չʾģ��Ѽ�ӵķ�����Ϊ
	model.performQuack();//չʾģ��Ѽ�ӵĽе���Ϊ

	std::cout << "----------------------" << std::endl;

	RedHeadDuck redHeadDuck = RedHeadDuck();//ʹ�úϳɵ�Ĭ�Ϲ��캯������һ��RedHeadDuck����

	const std::shared_ptr<FlyBehavior> pFWW(new FlyWithWings);//��ͷѼ�ӻ��
	redHeadDuck.setFlyBehavior(pFWW);

	const std::shared_ptr<Squeak> pS1(new Squeak);//��ͷѼ�ӻ��
	redHeadDuck.setQuackBehavior(pS1);

	redHeadDuck.display();//չʾģ��Ѽ��
	redHeadDuck.performFly();//չʾģ��Ѽ�ӵķ�����Ϊ
	redHeadDuck.performQuack();//չʾģ��Ѽ�ӵĽе���Ϊ
	
	system("pause");
	return 0;
}