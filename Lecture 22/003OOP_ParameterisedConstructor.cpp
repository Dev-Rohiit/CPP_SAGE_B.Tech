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
            cout << "I am inside the parameterized constructor of the customer class" << endl;
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
    customer c("naruto", 35, 'M', 1000.50);
    c.printCustomerInfo();

	return 0;
}