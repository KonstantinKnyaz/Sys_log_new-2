#include <iostream>
#include <clocale>
#include <fstream>
#include <string>

using namespace std;

int file() {

	ofstream file;
	string file_name;
	char text[100];
	cout << "Введите название файла: ";
	cin >> file_name;

	file.open(file_name, ofstream::app);

	if (file.is_open()) {
		cout << "Введите текст: ";
		cin.get();
		cin.getline(text, sizeof(text));
		file << text << "\n";
	}
	else
		cout << "Файл не был открыт!" << endl;

	file.close();
	return 0;
}