#include <iostream>
#include<iomanip>

using namespace std;

int main(){

cout << fixed << setprecision(2);
int numb, horas;
float valor;

	cin>>numb;
	cin>>horas;
	cin>>valor;
	
	cout<< "NUMBER = " << numb << endl;
	cout<< "SALARY = U$ " << horas*valor << endl;
}