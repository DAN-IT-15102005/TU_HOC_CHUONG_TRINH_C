#include <iostream> // thu vien bat buoc hai khai bao
#include <iomanip>

using namespace std; //khi thong bao nhu nay thi khong can khai bao lai o phan than bai


//1: KIEU DU LIEU SO

//+ so nguyen (Z)
// . int  : 4byte = 32bit   {DAI BIEU DIEN CUA INT SE TU -2^31 -> 2^31 -1   ( danh cho kieu du lieu duoi 2 ty)}
// . long long : 8byte = 64bit : {-2^63 -> 2^63 -1}
// . unsigned int : 0 -> 2^31-1
// . unsigned long long : 0 -> 2^64-1
// . short: 2byte, char: 1byte ( it dung den)

//+ so thuc (R)
// . float: 4byte ( do chinh xac thap hon ) bieu dien dc khoang 6 7 chu so thap phan
// . double: 8byte ( bieu dien dc 14 so thap phan) (khi ta su dung trong tinh toan thi nen dung)

//n bit => -2 ^(n-1) -> 2^(n-1)

//2: KIEU KY TU

//+ char  1byte= 256 : 0-> 255 ( khi muon luu mot ki tu)
//+ boll : true, false : 1byte 

//3: BIEN
//+ kieu_du_lieu ten_bien;  
//. vi du :    int dientich;
//             float bankinh;
//             double chuvi;

// quy tac:  + khong dc bat dau bang chu so 
//           + khong dc co dau cach 
//           + khong dc trung voi ketword

/*GHI CHU THICH THOAI MAI*/





int main(){
	
	/*cout << " xin chao moi nguoi !\n"; (  VI DU IN DONG CHU RA MANG HINH phai dac dog chu trong dau {"   "}  )
	int bankinh;                      // khai bao ten bien 
	cout << bankinh << endl;         //( {<< endl}     thi no xe xuong dong)
	cout << "xin chao ca nha yeu cua bang ka" << endl; */
	
	
	//int a, b, c; // declare
	
	
	
	/*int a = 100, b = 200, c = 300;    
	cout << a << " " << b << " " <<c << " "<< endl;*/ // { day la vi du khi ta cho san ( a,b,c) la cac gia tri nhap o phan record cord }
	
	
	
/* int a,b,c;
cin >> a;    // nhap gia tri cho a tu ban phim
cin >> b;
cin >> c;
// ta co the ghi nhu sao de in ra nh gia tri cung luc   {cin >>  a >> b >> c;}
cout << a << " " << b << " " << c << " "<< endl; 	// in gia tri cua a ra man hinh */



/*  long long a;
cin >> a;
cout << a << endl; */



/* float a;
cin >> a;
cout << fixed << setprecision(3) << a << endl;    //  neu muon chon chu so tha phan khi in ra theo y minh thi phai them len   { fixed << setprecision ( so in ra)  }
 // luu y cai lenh nay ta can khai bao  ( #include <iomanip>  ) */


	return 0;
}
