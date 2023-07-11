#include <iostream> 

using namespace std ;
//  de bai nhap van toc ban dau , gia toc, thoi gian, tu ban phim và in ra kq tính van toc cuoi cung
// VTCC = vtbd + at
int main () {
	
   	 int a, t,  vtbd;
	 cout << " hay nhap vao gia toc   ";      cin >> a ;
	 cout << " hay nhap vao thoi gian ";      cin >> t ;
	 cout << " hay nhap vao vtbd      ";      cin >> vtbd ;
	 
	 int VTCC = (vtbd + ( a * t) );
	 cout << " van toc cuoi cung là :" << VTCC << endl;
	 
	
	return 0;
}
