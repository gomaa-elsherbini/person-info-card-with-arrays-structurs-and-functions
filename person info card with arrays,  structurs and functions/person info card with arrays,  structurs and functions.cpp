#include <iostream>
using namespace std;


struct stInfo
{
	string firstName;
	string lastName;
	short int age;
	string phone;
};

void readPersonInfo(stInfo ArrayOfPersons[], int &length)
{
	cout << "please enter the number of persons?\n";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		cout << "Person number " << i + 1 << " information\n";
		cout << "=========================================" << endl;
		cout << "please enter the person`s " << i + 1 << " first name?\n";
		cin >> ArrayOfPersons[i].firstName;
		
		cout << "please enter the person`s " << i + 1 << "last name?\n";
		cin >> ArrayOfPersons[i].lastName;
		
		cout << "please enter the person`s" << i + 1 << " age?\n";
		cin >> ArrayOfPersons[i].age;

		cout << "please enter the person`s " << i + 1 << "phone?\n";
		cin >> ArrayOfPersons[i].phone;
	}
}

void printPersonInfo(stInfo ArrayOfPersons[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "Person " << i + 1 << " information" << endl;
		cout << "===============================\n";
		cout << "First Name: " << ArrayOfPersons[i].firstName << endl;
		cout << "Last Name: " << ArrayOfPersons[i].lastName << endl;
		cout << "Age: " << ArrayOfPersons[i].age << endl;
		cout << "phone: " << ArrayOfPersons[i].phone << endl;
		cout << "===============================\n";
	}
}


int main()
{
	stInfo ArrayOfPersons[100];
	int length;

	readPersonInfo(ArrayOfPersons, length);
	printPersonInfo(ArrayOfPersons, length);


	return 0;
}
