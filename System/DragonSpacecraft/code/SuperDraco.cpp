#include "SuperDraco.h"
#include <iostream>

using namespace std;

SuperDraco::SuperDraco() {
	turnOff();
	this->setPower(90);
	SetDracoisCreatedChecker(1);
}

SuperDraco::SuperDraco(string id) {
	this->setPower(90);
	SetDracoisCreatedChecker(1);
	this->setId(id);
	turnOff();
}

void SuperDraco::fireUp() {
	if(isOn() == true){
		cout<<getId()<<" turned on, firing up!"<<endl;
	}
	else{
		cout<<getId()<<" is not turned on yet, please turn it on"<<endl;
	}	
}

void SuperDraco::shutDown() {
	this->turnOff();
	cout<<getId()<<" has been shut down"<<endl;
}

