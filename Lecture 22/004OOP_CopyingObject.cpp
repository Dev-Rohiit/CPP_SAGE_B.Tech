#include<iostream>
#include<cstring>

using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

		customer() {
			cout << "I am inside the default constructor of the customer class" << endl;
		}

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

};

int main() {
    customer c1("naruto", 32, 'M', 5000); // using parameterised constructor
    customer c2 = c1; // using copy constructor
    c2.printCustomerInfo();

    customer c3;
    c3 = c1; // using default copy assignment operator function
    c3.printCustomerInfo();
	

	return 0;
}