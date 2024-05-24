#include <iostream>
#include <string>
#include "traininfo.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	TrainInfo* ar[] = { new TrainInfo("12:00", "Moscow", 80),
		new ExpressTrain("14:00", "New York", 3, 4000),
		new TrainInfo("15:20", "Novgorod", 20),
		new LocalTrain("16:48", "Vsevolozhsk", 5, "Standart")
	};

	int n = sizeof(ar) / sizeof(TrainInfo*);
	cout << endl;
	cout << "Virtual" << endl;
	for (int i = 0; i < n; i++) {
		ar[i]->displayInfo1();
		cout << endl;
	};
	cout << endl;
	cout << "non-Virtual" << endl;
	for (int i = 0; i < n; i++) {
		ar[i]->displayInfo();
		cout << endl;
	};


    return 0;
}
