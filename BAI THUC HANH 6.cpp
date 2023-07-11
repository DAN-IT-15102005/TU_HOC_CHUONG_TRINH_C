#include <iostream>
using namespace std;
int main () {
	
	float a, b, c, d, e;
	cout << " ========== DIEM KIEM TRA ==========" << endl;
	cout << " nhap diem kt 1 : "; cin >> a; cout << endl;
	cout << " nhap diem kt 2 : "; cin >> b; cout << endl;
	cout << " nhap diem kt 3 : "; cin >> c; cout << endl;
	
	float TDKT = a + b + c; cout << " tong diem kt la :" << TDKT << endl;
	
	cout << " ========== DIEM THI GIUA KI ==========" << endl;
	cout << " diem thi giua ki : "; cin >> d; cout << endl;
	
	cout << " ========== DIEM THI CUOI KI ==========" << endl;
	cout << " diem thi cuoi ki : "; cin >> e; cout << endl << endl ;
	
	float TD = TDKT + ( d + e ); cout << " tong diem la :" << TD << endl;
	
	
	return 0;
	
	

}
