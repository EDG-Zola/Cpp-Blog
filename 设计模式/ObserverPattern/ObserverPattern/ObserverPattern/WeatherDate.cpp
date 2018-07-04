#include "WeatherDate.h"



WeatherDate::WeatherDate() {
}


WeatherDate::~WeatherDate() {
	
}

//void WeatherDate::registerObserver(Observer* rhs) const {
//	vOberbers.push_back(rhs);
//}
//
//void WeatherDate::removeObserver(Observer* rhs) const {
//	int i = vOberbers.size();
//	if (i >= 0) {
//		vOberbers.erase(rhs);
//	}
//}

void WeatherDate::registerObserver(const std::shared_ptr<Observer>& rhs) {
	vpOberbers.push_back(rhs);
}

void WeatherDate::removeObserver(const std::shared_ptr<Observer>& rhs) {
	//ȡ������
	if (!vpOberbers.empty()) {
		for (auto iter = vpOberbers.begin(); iter != vpOberbers.end(); ++iter) {
			if (*iter == rhs)
				//ע��erase����ֻ��ɾ��������
				vpOberbers.erase(iter);

		}
	}
		
}

void WeatherDate::notifyObserver() {
	//ʹ��auto����ÿһ����Ա
	for (auto &i : vpOberbers) {
		i->update(temperature, humidity, pressure);
	}
}



//void WeatherDate::notifyObserver(){
//	//ʹ��auto����ÿһ����Ա
//	//for (auto &i : vOberbers) {
//	//	i->update(temperature, humidity, pressure);
//	//}
//}

	void WeatherDate::measurementsChanged() {
	notifyObserver();
}

void WeatherDate::setMeasurements(float temperature, float humidity, float pressure) {
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}
