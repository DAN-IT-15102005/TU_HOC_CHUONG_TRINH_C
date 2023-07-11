#include <iostream>
using namespace std;
int main () {
	
	int x = 10,  y = 5;
	cout << " ket qua tra ve : " << endl;
	cout << " Gtri x\t " << " " << " Gtri y\t " << " " << " Bieu thuc\t " << " " << " ket qua " <<endl;
	cout << x <<"  |\t"<< y <<" |\t"<<"x = y + 3\t"<<" \t|"<<"x ="<< y + 3 <<" \n";
	cout << x <<"  |\t"<< y <<" |\t"<<"x = y - 2\t"<<" \t|"<<"x ="<< y - 2 <<" \n";
	cout << x <<"  |\t"<< y <<" |\t"<<"x = y * 5\t"<<" \t|"<<"x ="<< y * 5 <<" \n";
	cout << x <<"  |\t"<< y <<" |\t"<<"x = x / y\t"<<" \t|"<<"x ="<< (float)(x/y)<< " \n";
	cout << x << " |\t"<< y <<" |\t"<<"x = x % y\t"<<" \t|"<<"x ="<< x % y << " \n";
	
	
	return 0;
}
