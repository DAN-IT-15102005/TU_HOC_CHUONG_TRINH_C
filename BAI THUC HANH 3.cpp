#include <iostream> 

using namespace std ;
//  de bai nhap van toc ban dau , gia toc, thoi gian, tu ban phim v� in ra kq t�nh van toc cuoi cung
// VTCC = vtbd + at
int main () {
	
   	 int a, t,  vtbd;
	 cout << " hay nhap vao gia toc   ";      cin >> a ;
	 cout << " hay nhap vao thoi gian ";      cin >> t ;
	 cout << " hay nhap vao vtbd      ";      cin >> vtbd ;
	 
	 int VTCC = (vtbd + ( a * t) );
	 cout << " van toc cuoi cung l� :" << VTCC << endl;
	 
	
	return 0;
}
