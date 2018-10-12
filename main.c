#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

#define LEN 256

struct musteri{
		char ad[20];
		char soyad[20];
		int yas;
	};
	
int main()
{
	asdasd();
}

void asdasd(){
	printf("UYELIK SISTEMIMIZE HOSGELDINIZ!!!\nLUTFEN UYE OLUNUZ\n\n");
	struct musteri musteri1;
	printf("isim: ");
	gets(musteri1.ad);
	printf("\n");
	printf("soyisim: ");
	gets(musteri1.soyad);
	printf("\n");
	printf("yas: ");
	scanf("%d", &musteri1.yas);
	printf("\n");
	
	FILE * fp;
	fp = fopen("C:\\Users\\IGU-OGRENCI\\Desktop\\asd.txt","w");	
	fprintf(fp,"isminiz: %s, soyisminiz: %s, yasiniz: %d",musteri1.ad,musteri1.soyad,musteri1.yas);
	fclose(fp);
}

void odev2_2(){
	
}

void odev2(){
	int a,b,c;
	printf("a yi giriniz: ");
	scanf("%d",&a);
	printf("b yi giriniz: ");
	scanf("%d",&b);
	printf("c yi giriniz: ");
	scanf("%d",&c);
	if(a>b && a>c){
		//en büyük a'dır.
		a=a;
	}
	else if(b>a && b>c){
		//en büyük b'dir.
		a=b;
	}
	else if(c>a && c>b){
		//en büyük c'dir.
		a=c;
	}
	printf("a = %d",a);
}

void voidatla(){
	printf("\n\n");
}

void degerbulma(){
	int a,b,c;
	printf("a degeri gir: ");
	scanf("%d",&a);
	printf("a degeri = %d\n",a);
	printf("b degeri gir: ");
	scanf("%d",&b);
	printf("b degeri = %d\n",b);
	c=(a!=b);
	if (c==1) printf("a ve b farkli sayilar..\n");
	if (c==0) printf("a ve b ayni sayilar..\n");
}

void polinombulma(){
	float a,b,c,d,x,y;
	a=2;b=3;c=4;x=2;
	float xkare = pow(x,2);
	y= a * xkare + b * x + c;
	int y_int = (int) y;
	printf("Polinomunuz ---> 'ax(kare)+bx+c'\nSonuc\t    --->  %d",y_int);
}

void dmain(){
int a=15;
int b=-85;
printf("a --> %d, b --> %d ydi \n",a,b);
a +=b;
b = a - b;
a -=b;
printf("a --> %d, b --> %d oldu... \n\n",a,b);
}
