#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int x,y;
	cout << " nhap vao hai so nguyen : " ; 
	
	cout << " x = " ; cin >> x ; 	cout << " y = " ; cin >> y ; // x = 5, y = 8 
	
	int p = x * y; // 40
	int s = x + y; // 13
	float q = ( pow (s, 2) ) + ( (p * (s-x) ) * ((float)p + y) ) ; // 15529
	
	cout << " ket qua cua p la :" ; cout << p; cout << endl;
	cout << " ket qua cua s la :" ; cout << s; cout << endl;
	cout << " ket qua cua q la :" ; cout << q; cout << endl;
	
	
	
	
	
	
	
	return 0;
}
