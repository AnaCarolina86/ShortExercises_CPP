#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

int main(){

cout << fixed << setprecision(4);

double pi = 3.14159;
double raio;

	cin>>raio; //read the value
	
	cout<< "A=" << pi*pow(raio, 2) << endl;
}