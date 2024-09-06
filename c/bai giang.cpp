#include <stdio.h>

//kieu du lieu
//so nguyen 
//int 4byte, long long 8 byte
//so thuc float 4byte, double 8byte
//kieu ki tu char 1 byte

// cu phap : kieu_du_lieu ten bien;   khong dat ten bien trung voi tu khoa trong c
int main(){
	int dat_ten_bien_nhu_the_nay;
	double a, b, c;
	
//cac dac ta
//int :%d
//longlong :%lld
//float :%f
//double ;%lf
//char :%c neu gan ki tu phai cho ki tu vao dau nhay don



//muon in 1 dong chu ra man hinh, cu phap: printf("kitu");
printf("dong chu co dang nhu the nay");

//muon in gia tri cua mot bien : printf("dacta", tenbien);
printf("%d", a);
printf("%f", a); //%f mac dinh la in ra 6 so sau dau phay trong so thuc
printf("%.2f", a); //se in ra 2 so sau dau phay
	
//muon in ra co dau cach dang sau bien dung dau cach sau dac ta
printf("%d ", a); // khi in ra gia tri bien a sau no se co dau cach
printf("%d %d %d",a, b, c);
printf("Gia tri cua bien a la : %d ", a);


// xuong dong: \n


//cach nhap du lieu tu ban phim, cu phap : scanf("dac ta", &tenbien);
scanf("%d", &a);
scanf("%d%d%d",&a, &b, &c);



// toan tu trong c
// nhan : * ,chia : / , cong, tru : - ,chia du : %
//dung cu phap: (kieu_du_lieu)ten bien / ten bien2 de chia lay thap phan
// hoac dung 1.00
thuong = (float)a / b;
hoac thuong = 1.00 / b; //deu cho ket qua co thap phan tuy y vao dac ta
// phep nhan de tranh tran so co the dung 1ll * a * b




//a++ tang a len 1 don vi
int a = 100;
int b = a++; //a=101 b = 100; a++ so sanh, gan roi tang
int b = ++a; //a=101 b = 101; ++a tang roi so sanh gan


a += b; //a = a + b
a *= b; //a = a * b
a /= b; //a = a / b
a %= b; //a = a % b
a -= b; //a = a - b


//phep so sanh chi nhan gia tri 1 : dung, 0 : sai
==; //so sanh bang
!=; // so sanh khac
> <; // so sanh lon be
>=; //lon hon bang
<=; // be hon bang


//and or not
&& // and
|| // or
! // not
//sizeof ,comma,ternary operator,...




//#include <math.h> thu vien toan
//sqrt(x) : tinh can bac 2 cua x tra ve gia tri double
//pow(x, y) : tinh x ^ y tra ve double
//abs(x) : tinh gia tri tuyet doi
//cbrt(x) : tinh can bac 3 tra ve double
//ceil,floor,...




//cau lenh if
// cu phap if(dieu kien/ condition){code}, neu dieu kien dung thi thuc hien code trong if, sai thi bo qua
if((n % 2) == 0){
	printf(" N la so chan");
}
// neu if co 1 cau lenh thi co the bo ngoac nhon di, nhieu hon 1 phai co ngoac

//co the dung if long nhau
if(N >= 50){
	if(n <= 100){
		printf("N nam trong doan tu 50 den 100");
	}
}


//cau lenh if else
// cu phap if(dieu kien){code}  else{code} : neu dieu kien sai code phan else se chay
// co the dung if else long nhau

//cau lenh if  else if : dung khi muon thu nhieu dieu kien
// cu phap if(dieu kien1){} else if(dieukien2){} else if...




// kieu du lieu char, bang ma ASCII
//A - Z : ma ASCII tu 65- 90
//a - z : ma ASCII tu 97-122
//0 - 9 : 48-57
	char kitu;
	scanf("%c", &kitu);
	printf("%c", kitu);//se sin ra ki tu nhap vao
	printf("%d", kitu);//se in ra ma ASCII cua ki tu, dung dac ta %d
	if((kitu >= 65) && (kitu <= 90)){//khi dem ra so sanh ki tu se dung ma ASCII cua no
		printf("In hoa");
	}
//co the thay bang chu khi so sanh, vi du
	if((kitu >= 'A') && (kitu <= 'Z')){
		printf("In hoa");
	}

//chuyen chu cai in thuong sang in hoa
// chu cai in hoa lon hon chu cai in thuong 32 don vi
// vi du, nhap vao mot ki tu, neu ki tu nhap vao la in hoa thi chuyen no thanh in thuong
	if(kitu >= 'A' && kitu <= 'Z'){
		kitu += 32;		
	}
	printf("%c", kitu);
	




// cau lenh switch case
//cu phap  switch ( expression){case:    break;     default:    }
	switch(n){
		case 1:
			printf("31");
			break;// neu khong co break se chay tiep case ben duoi
		case 2:
			printf("28");
			break;
		default:
			printf("Du lieu Khong Hop le");
	}
//co the gop cac case in cung 1 gia tri
	switch(n){
		case 1: case 3: case 5: case 7: case:8 case 10: case 12:
			printf("31");
			break;
		case 4: case 6: case 9: case 11:
			printf("30");
			break;
		case 2:
			printf("28");
			break;
		default:
			printf("Du lieu khong hop le");
	}


//expression co the la ki tu
 int a = 200, b = 100;
 	char kitu;
 	scanf("%c", &kitu);
 	switch(kitu){
 		case '+':
 			printf("%d", a + b);
 			break;
 		case '-':
 			printf("%d", a - b);
 			break;
 		default :
 			printf("NO");
	 }
 
 
 
 
 
 //cau lenh goto
 //cu phap  :  	goto noicanden;
  printf("xin chao");
  here:// here bat dau tu day
  printf("xin chao1");
  goto here;// den day chuong trinh se quay ve here de chay
  printf("hello");// cau lenh nay se khong duoc in ra





//vong lap for
//cu phap : for(khoitao; dieukienlap; capnhatgiatribiendem){  code }
// vong for thuc hien cho den khi dieu kien lap sai
	for(int i = 1; i <= 5; i++){//khai bao int i trong vong for chi co tac dung trong vong for: enclosing scope
		printf("%d", i); // in ra tu 1 den 5
	}
//phan dieukienlap phai dung neu khong vong for se ket thuc luon
//vong lap co the thieu cac thanh phan nhung khong duoc thieu ; , khi do vong lap se chay toi vo han

// lenh break; trong for : vong for se ket thuc ngay khi gap break
// cu phap : if(dieukien){ break; }

// lenh continue; : se bo qua tat ca cau lenh ben duoi no trong vong for va thuc hien vong lap moi





//vong lap while : vong lap khong biet truoc so lan lap
// cu phap : while(testexpression)  

	int i = 1;
	while(i <= 10){
		printf("%d", i);// vong lap se in ra gia tri tu 1 den 10
		++i;
	}
	printf("/n");
	printf("Gia tri cua bien i sau vong lap la : %d", i);//i = 11, vi ko thoa man <= 10 nen dung vong lap







// ham trong ngon ngu lap trinh C
return_value_type function(parameter_list){
	statements;
}
//xay dung ham
void xin_chao(){
	printf("Xin chao \n");
	
}
//xay dung ham tinh tong tu 1 den n

int tong(int n){// n la tham so(chi duoi dang hinh thuc de thay doi so)
	int sum = 0;
	for(int i = 1; i <= n; i++) sum += i;
	return sum; 
}

int main(){
	int x = 10;
	int kq = tong(x); //function call, x la doi so(tham so thuc su)
	printf("%d", kq);
	return 0;
}
//parameter : tham so
//arguments : doi so : tham so thuc su
//pass by value : truyen gia tri : ko lam thay doi gia tri cua doi so sau khi ham ket thuc
//khai bao nguyen mau ham 
int xinchao();
int tong(int,int);

//tinh tong S(n) = 1 + 1 / 2 + 1 / 3 + ..... + 1 / n
double S(int n){
	double res = 0;
	for(int i = 1; i <= n; i++) res += (double) 1 / i;
	return res;
}

int main(){
	int n = 10;
	double res = S(n);
	printf("%.2lf\n", res);
	return 0;
}






// mang 1 chieu - array
// cu phap : dataType ArrayName[sizeOfArray]
//a[index]
int a[5];// khai bao mo mang so nguyen int co toi da 5 phan tu
long long b[100];
float c[20];
char str[10];
	scanf("%d", &a[1]);
	printf("Gia tri cua phan tu thu 2 trong mang la : %d", a[1]);
//khoi tao gia tri phan tu trong mang
	for(int i = 0; i < 5; i++){
		printf("Nhap gia tri cho phan tu thu :", i + 1);
		scanf("%d", &a[i]);
	}
// in gia tri tung phan tu cua mang	
	for(int i = 0; i < 5; i++){
		printf("%d", a[i]);
	}

//nhap so phan tu cua mang
int n;
printf("Nhap so luong phan tu cua mang : ");
scanf("%d", &n);
int [n]
for(int i = 0; i < n; i++){
	scanf("%d", &a[i]);
	
}
//khoi tao san 1 mang k nhap tu ban phim
int a[100] = {2, 3, 4, 5, 6};// chi khoi tao 5 gia tri dau tien, 95 gia tri con lai = 0
int a[100] = {0};//khoi tao tat ca cac gia tri trong mang bang 0
a[101];//la mot gia tri rac, khong dung

//truyen mang lam tham so cho mot ham
	 void nhap(int a[], int n){
	 	printf("Nhap cac phan tu trong mang\n");
	 	for(int i = 0; i < n; i++){
	 		scanf("%d", &a[i]);
		 }
	 }

	int main(){
		int n, a[1000];
		scanf("%d", &n);
		nhap(a, n);//chi can truyen ten
		for(int i = 0; i < n; i++){
			printf("%d", a[i]);
		}
	}
//nhung gi thay doi trong ham se thay doi gia tri ban dau nhap vao
//bai tap
//kiem tra tinh chat cac phan tu trong mang
//dem so le, so hoan hao,..
// tim phan tu lon nhat, nho nhat
// sap xep, tim kiem
//mang cong don, cua so truot, hai con tro



// mang hai chieu
dataType Arrayname[x][y]; // ma tran x hang y cot
int a[3][4];
// nhap mang
for(int i = 0; i < 3; i++){
	for(int j = 0; j < 4; j++){
		scanf("%d", &a[i][j]);
	}
}

// in mamg
for(int i = 0; i < 3; i++){
	for(int j = 0; j < 4; j++){
		printf("%d ", a[i][j]);
	}
	printf("\n");
}



























// con tro
int a = 3000;
int *ptr; // day la mot con tro kieu int, co the la kieu long long , float, double, struct..
//kieu du lieu cua con tro va bien phai giong nhau
// khoi tao gia tri cho con tro
ptr = &a;// ptr la dia chi cua bien a // ptr tro den bien a hay ptr quan ly bien a
printf("Dia chi cua bien a:%d", &a); // = ptr
printf("Gia tri cua con tro ptr:%d", ptr); // = ptr

//co the in ra gia tri cua bien thong qua con tro
printf("gia tri cua bien a: %d",a ); // = 3000
printf("gia tri cua bien ma con tro ptr dang quan ly: %d", *ptr); // =3000

// co the thay doi gia tri cua bien a thong qua con tro ptr
*ptr = 1000; // a = 1000
printf("gia tri cua bien a: %d",a ); // = 1000
printf("gia tri cua bien ma con tro ptr dang quan ly: %d", *ptr); // =1000

//xay dung ham pass by reference
// nhung gi thay doi tren ham se thay doi truc tiep len doi so

void tang1(int a){
	a += 100;
}
void tang2(int *a){
	*a += 100;
}

void swap(int *a, int *b){
	int temp = *a; // luu gia tri cua bien ma con tro a dang tro toi
	*a = *b; // gan gt cua bien ma con tro b dang tro toi cho gia tri cua bien ma con tro a dnag tro toi
	*b = temp; // gan gia tri cua con tro b dang tro toi
}


int main(){
	int a = 300;
	tang1(a);
	printf("gia tri cua bien a sau khi ham tang 1 ket thuc ; %d", a); // a = 300;
	tang2(&a); // can co dau &
	printf("gia tri cua bien a sau khi ham tang 2 ket thuc : %d", &a); // a = 400
	
}

void swap(int *a, int *b){
	int temp = *a; // luu gia tri cua bien ma con tro a dang tro toi
	*a = *b; // gan gt cua bien ma con tro b dang tro toi cho gia tri cua bien ma con tro a dnag tro toi
	*b = temp; // gan gia tri cua con tro b dang tro toi
}

int main(){
	int x = 1000; y = 2000;
	swap(&x, &y);
	printf("%d %d", x, y); // x = 2000, y = 1000
}


// moi lien he giua con tro va mang

int main(){
	int a[3] = {1, 2, 3};
	printf("Gia tri cua bien a : %d", a); // a la hang con tro, giong con tro,
	printf("%d", &a[0]); // = a
	int *b = a; // cho b quan li mang a
	for(int i = 0; i < n; i++){
		printf("%d ", b[i]);// in ra giong mang a
	}
	for(int i = 0; i < n; i++){
		scanf("%d", a + i);// giong nhu scanf voi &a[i]
		// &a[i] : (a + i) : nhu nhau
		// a[i] : *(a + i) : nhu nhau
	}
}

// toan tu con tro
int main(){
	int a[5] = {1, 2, 3, 4 ,5};
	int *ptr = a;
	++ptr;
	printf("%d", *ptr); // =2
	--ptr;
	printf("%d"m *ptr); // =1
} 


// cap phat dong 
int main(){
	int b[1000]; // cap phat tinh
	int *ptr = (int*) malloc(size_of_byte);
}






















































// xau ki tu
char a[100] = "nguyen van nam";
char b[100] = {'a', 'b', 'c', 'd'};
strlen(a)// dem so ki tu cua a la 14kitu
// nhap xau
scanf("%s", a);// ko can dung &
//co the duyet tung phan tu cua mang
for(int i = 0; i < strlen(a); i++){// phai xu li tung ki tu thi dung for
	printf("%c\n", a[i]);
}
gets(a);//nhap duoc ca dau cach vi lenh scanf ko nhap duoc dau cach
scanf("%10s", a);//chi nhap duoc 10 ki tu dau tien

// van de troi lenh gets
khi gap phim enter thi gets se doc lenh enter va dung
// muon su dung gets thi truoc no k duoc co dau cach
//nen dung lenh getchar() de doc phim enter
scanf("%d", &x);
getchar();// dung khi chi chi co 1 dau enter truoc do
//hoac co the dung lenh scanf de doc het cac dau cach
scanf("\n");// nhieu dau enter van dung duoc
gets(a);
gets(b);// vi gets ko de lai dau enter nen ko can dung getchar(), neu dung se bi mat ki tu dau tien cua b

//ham khac co the nhap duoc dau cach
fgets(a, 10, stdin);// a la mang nhap, 10 la so luong ki tu toi da, stdin la luong vao
// fgets cung bi troi lenh

//gets
//fgets : doc ca dau enter
//vidu
fgets(a, 20, stdin);// input : python
printf("%d", strlen(a));// output : 7  vi no doc ca dau enter va 6 ki tu

// cach xu li
fgets(a, 20, stdin);
a{strlen(a) - 1} = '\0';
printf("%d", strlen(a)); // output 6













// cau truc  struct

struct sinhvien{
	char ma[20];
	char ten[50];
	double gpa;
	char lop[20];
}; 

int main(){
	struct sinhvien a;
	scanf("%s", a.ma);
	getchar();
	gets(a.ten);
	scanf("%lf %s", &a.gpa, &a.lop);
	printf("%s %s %.2lf %s\n", a.ma, a.ten, a.gpa, a.lop);
	struct sinhvien b = a;// du lieu cua sv b se giong het sv a
}








































	return 0;
}
	
