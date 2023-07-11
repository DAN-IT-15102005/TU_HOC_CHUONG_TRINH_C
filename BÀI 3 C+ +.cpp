#include <iostream>
#include <math.h> // thu vien gom 4 ham chính ( abs(x) , pow(a , b) , sqrt( a) ,  round (n))
using namespace std;


// abs(x) : tri tuyêt doi 
// pow( a, b) : tính a ^ b : tra vê sô double( so thap phan )
// sqrt ( n) : tính can bâc 2 cua n : tra vê sô double 
// round (n) : ham lam tron so tang dan theo so thap phan phía sau 
int main () {
	
	
	/* int x = -100;
	 int y = abs(x); // gán giá tri tuyêt dôi cua x cho y 
	 cout << y << endl; */
	  
/* int a = 2 ;
	 int b = 10 ;
	 int res = pow( a, b) ; // res = 2 ^ 10 = 1024.000000
	 cout << res << endl; */
	 
	 
/*	int a = 16;
	int can = sqrt (a); // can bac 2 cua 16 = 4.000
	cout << can << endl ;*/
	
/*	float a = 3.45321;
	int b = round (a);
 cout << b << endl;	 */
 
 
 /*  if (100 > 50 ){	cout << " xin chao cac ban !" << endl; } ; // chi khi dieu kien trong ngoac tron true thi cac lenh trong ngoac nhon moi duoc thuc hiên */
 
 
 
 // kiem tra so co chia het cho 2 hay khong 
/*  int a = 200 ;
 if ((a%2)==0){
 	cout << " vay a la mot so chan " << endl;
 	
 }
 // kiem tra xem n có nam giua 100 và 500 hay không 
 int n = 200 ;
 if (n >= 100 && n <= 500){
 	cout << " n o giua 2 so 100 và 500 " << endl;
 }; */
   
   // luu ý trong ngon ngu C VA C++   : 
   // 0: false
   // #0: true 
   // vi du 
   
  /* int n = 100 ;
   if ( n ){ 
   cout << " n duoc hieu la 100 nen #0 ==> code chay " << endl;
   } ;// nguoc lai */
   
 /*  int n = 0 ;
   if ( n ) { 
   cout << " va nguoc lai neu n = 0 ===> code ko chay ma bo qua " << endl;
   } */
   
   
                //* câu truc  neu thi va nguoc lai  [ if ( condition ) { xay ra 1 } else { xay ra 2 } ]
  /*  int n;
    cin >> n;
    if ( (n % 2) == 0 ) { 
    cout << " n la mot so chan " << endl;
	} else { cout << " n khong phai la mot so chan " << endl;
	} */
	
	
	            //* cau truc if và else if      [ if ( condition 1 ) { xay ra 1} else if ( condition 2 ) { xay ra 2} else { xay ra 3 }
	// voi cau lenh tren danh cho khi ta muôn check nhieu dk khac nhau cung luc 
	
/*	int n; 
	cin >> n;
	if ( n==1 ){ cout << " chu nhat " <<endl;	} else if ( n == 2 ) { cout << " thu hai " << endl;
	} else {   cout << " thu ba " << endl; }  tuc la khi nao ca condition 1 va 2 khong thoa thi no se xay ra 3 */
	
	
	
	/* su khac nhau giua 2 lênh trên la ( if else ) nó se kiem tra tung dk 1 roi moi cho ra kq con doi voi ( if else if else) thi no chi khiem tra den gia tri dung cua no roi no dung lai
	va cho ra kq chu khong chay ktra het dk nhu cua ( if else ) */ // BIG NOTE 
	  
	  
	// VI DU nhap so in ra cac ngay trong tuan 
/*	int n ;
	cin >> n;
	if      ( n == 1) { cout << " chu nhat\n";  } 
	else if ( n == 2) { cout << " thu 2 \n" ;   } 
	else if ( n == 3) { cout << " thu 3 \n";	} 
	else if ( n == 4) { cout << " thu 4 \n";	} 
	else if ( n == 5) { cout << " thu 5 \n";	} 
	else if ( n == 6) { cout << " thu 6 \n";	}
	else if ( n == 7) { cout << " thu 7 \n"; } else { cout << " du lieu khong hop le ";} */ 
	
	
	
/* BT CHO CAC BIEN VA IN RA CAC THANG CO 31 NGAY CAC THANG CÓ 30 NGAY VA TRUONG HOP THANG 2 CÓ 28 VA 29 NGAY 
	int n;
	cin >> n;
	    if        (( n==1) || (n==3) || ( n==5) || (n==7) || ( n == 8 ) || ( n==10) || ( n == 12 ) )              { cout << " nam trong top 7 thang co 31 ngay ";    } 
	else if      (( n == 4 ) || (n==6) || (n == 9) || ( n== 11))                                               { cout << " nam trong top 4 thang co 30 ngày" ;         	}
	else if      (( n % 2) == 0)                                                                               { cout << " thang do co 28 ngay thuoc nam khong nhuan";	} 
	else                                                                                                  { cout << " thang do co 29 ngay thuoc nam khong nhuan";    	}; */
	
	          /* CAU TRUC SWICH  CAU TRUC SO SANH 
	           CU PHAP :  switch ( expression ) { case x : break;  case y: break; default: }
	           cu phap se so sanh bieu thuc  trong expression voi x neu thoa thi thuc hien lenh trong case x khong thi tiep tuc qua case y 
	           và neu khong thoa het thi no se roi vao deflaut  == else    */
	           
	        
	
/*  int day;
 cin >> day;
 switch (day)  {
 case 1 : cout << " chu nhat " ; break;  
 case 2 : cout << " thu 2 " ; break; 
 case 3 : cout << " thu 3 " ; break;
 case 4 : cout << " thu 4 " ; break;
 case 5 : cout << " thu 5 " ; break;
 case 6 : cout << " thu 6 " ; break;
 case 7 : cout << " thu 7 " ; break; 
 default: cout << " du lieu khong hop le \n" ;} */  
 
 
/*neu code khong co break thi tai cho expression thoa dk thi luc do chuong trinh se in ra nhu sau :
 	vi du ta cho day = 4 ==> ( thu 4thu 5thu 6thu 7du lieu khong hop le ) */
 	
    
	
	return 0;
}
