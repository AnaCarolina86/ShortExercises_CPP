#include <iostream>
#include<iomanip>

using namespace std;

int main(){

cout << fixed << setprecision(2);
int numb, hours;
float value;

	cin>>numb;
	cin>>hours;
	cin>>value;
	
	cout<< "NUMBER = " << numb << endl;
	cout<< "SALARY = U$ " << hours*value << endl;
}