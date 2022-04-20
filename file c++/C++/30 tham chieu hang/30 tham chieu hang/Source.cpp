#include<iostream>
using namespace std;

string fullName(const string& firstName, const string& lastName) {
	return firstName + lastName;

}

double addTwoNumber(const double& a , const double& b) {
	return a + b;
}

int main() {
	double a = 6;
	double b = 9;
	cout << addTwoNumber(a, b) << endl;

}