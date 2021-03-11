#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
#include "files.h"

using namespace std;

class User {
private:
	string log{};
	string pass{};
public:
	User(string log, string pass) {
		this->log = log;
		this->pass = pass;
	}
	void showme() {
		cout << "Логин: " << log << endl << "Пароль: " << pass << endl;
	}
	bool acces(User outputObj) {
		if (log == outputObj.log && pass == outputObj.pass)
			return true;
		else
			return false;
	}
};

User adm("Admin", "Key666");
//const User adm2("User", "c1PP");

int main()
{
	setlocale(LC_ALL, "Russian");

	string log, pass;

	cout << "Введите логин: ";
	cin >> log;
	cout << "Введите пароль: ";
	cin >> pass;

	User uss(log, pass);

	bool acc = false;
	acc = adm.acces(uss);
	//acc = adm2.acces(adm);

	if (acc)
		cout << "Доступ разрешён" << endl;
	else cout << "Доступ запрещён!" << endl;

	//adm.showme();

	if (acc)
		file();

	return 0;

}

