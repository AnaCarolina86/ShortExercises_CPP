#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

int main(){

cout << fixed << setprecision(5);

double nota1;
double nota2;

	cin>>nota1; //leio nota 1
	cin>>nota2; //leio nota 2
	
	cout<< "MEDIA = " << (nota1*3.5 + nota2*7.5)/11 << endl;
}