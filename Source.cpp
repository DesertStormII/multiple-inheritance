#include <iostream>

using namespace std;

class Phone {
public:
	void setCall() {
		cout << " You can call" << endl;
	}
	void setAkkamulyator() {
		cout << " Without cable" << endl;
	}
};
class TV {
public:
	void setScreen() {
		cout << " Big screen" << endl;
	}
};
class Tablet:public TV, public Phone {
public:
	void setStand() {
		cout << " Stand for watching" << endl;
	}
};
int main()
{
	Tablet properity;
	cout << " Properities of tablet" << endl << endl;
	properity.setCall();
	properity.setAkkamulyator();
	properity.setScreen();
	properity.setStand();
}