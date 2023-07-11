#include <iostream>

using namespace std;

int main () {
	
	/* int a = 100; // kieu du lieu int
	long long b = 200; // kieu du lieu long long 
	
	float c = 2.50;
	double d = 3.22932;
	
	char kitu = 'r'   luu y khi khai bao kieu char ta phai de  nhu sao 'r' khong dc de nhay kep nhu nay "r" vi khi do r se dc hieu la 1 xau hoac 1 chuoi
	bool ok = true; */// nhac lai bai cu 
	
	
	/* on lai 
	
	int a;
	cout << " xin chao \n";    in ra dong chu xin chao 
	
	cin >> a;  nhap gia tri cho bien a 
	cout << a << endl;  in ra gia tri cua a ra man hinh */
	
	/*  TOÁN TU LÀ GÌ TOÁN H?NG LÀ GÌ 
	
	VI DU:   int a = 100         thi dau ( = ) --> duoc goi la toan tu,         ( a va 100 ) --> duoc goi la toan hang
	
	trong do nhiem vu cua toan tu ( = ) la gan gia tri cua 100 cho thang a ( goi la toan tu gan )
	
	hoac neu ta muon thay doi  co the ghi */
	
	
/* 	int a = 100;
	cout << a <<endl; 
	a = 200;
	cout << a << endl; */
	
	
/*	int a,b,c;
	cin >> a;
	b = a; // ta hieu o day la lay gia tri cua ( thk a gan cho thk b )
	cout << b << endl;
	c = b;
	cout << c << endl; */
	
	
	// TOAN TU TOAN HOC  : +, -, *, /, %( CHIA LAY DU)
	
/*	int a = 100 , b = 400;
	int c = a + b; // c = 500 
	cout << c << endl; */
	
	
	// VI DU BT TINH TONG, HIEU, TICH, THUONG, DU CAC SO SAO 
	
	int a = 500, b= 200  ;
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	float thuong = ( float )a / b; 
	// luu y khi chia nhu the nay thi se ko cho ra ket qua trinh xac thay vao do ta phai doi kieu du lieu vi hien tai chung la so nguyen chia nhau thi ra float do do ta phai ( ep bien) 
	// ta ep 1 trong 2 thk a or b or ca 2 thk 
	double du = a % b;

 cout << tong << " " << hieu << " " << tich << " " << thuong << " " << du << endl; 
 
 
 // ngoai ra ta con dang nhu sau: ( ++ ) va ( --) dang ( -- ) thi cx nhu (++)
 
/*  int a= 100;
  ++a; // tang a len mot don vi va goi la tang truoc con ( a++ goi la tang sau, ca 2 thk deu tang a len mot don vi)
  cout << a << endl; */
  
/*  int a= 100;
 // int b= a++; // b = 100, a++  --> 101
  // nhung neu ta thay a++ --> ++a thi luc nay ++a ---> 101 roi moi gan cho thk b 
  int b= ++a;
    cout << a << " " << b << endl; */
    
    
// TOAN TU SO SANH : >, >=, <, <=, ==( so sanh 2 thk = nhau) , !=( so sanh khac nhau ).

// TOAN_HANG1 TOAN TU SO SANH TOANHANG1 ==> TRA VE GIA TRI TRUE(1) OR FALSE(0)

  /*    int a = 200, b = 300
      
      bool ok = a < b;
cout << ok << endl; */ // luu y can chinh sua lai

// TOAN TU LOGIC AND ( CHI DUNG KHI TAT CA CUNG DUNG) , OR ( CHI SAI KHI TAT CA CUNG SAI), NOT

// AND : &&
// OR : ||
// NOT : !




/*int a= 200, b=200, c= 300, d=400;
int res = (a==b) || (c>d); // res = 1 || 0 => 1
cout << res << endl; */

	return 0;
}
