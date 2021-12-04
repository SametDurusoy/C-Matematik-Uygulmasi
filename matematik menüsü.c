#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
int islem;
int sayi1=1;
int sayi2;
int sayi3;
int sonuc;
int sonuc2=1;
char islem2;
int cikis=1;
printf("********************");
printf("\n");
printf("**MATEMATIK MENUSU**\n");
printf("1- 4 Islem \n2- Uslu Sayi Hesaplama \n3- Vize Final Hesaplama\nLUTFEN YAPMAK ISTEDIGINIZ ISLEMI SECINIZ : ");
scanf("%d",&islem);
printf("\n\n");
switch(islem){
	
	case 1:
	printf("Merhaba 4 Islem Secenegini Sectiniz Lutfen Yapmak Istediginiz Islemi Secer misiniz ?(+,-,*,/) :");
	scanf("%s",&islem2);
	switch(islem2){
		case '+':
			printf("Lutfen Toplamak istediginiz Sayilari Giriniz \nCikmak Icin 0 Giriniz  :\n");
			sayi1=1;
			while(sayi1!=0){
				printf("Sayi : ");
				scanf("%d",&sayi1);
				sonuc=sonuc+sayi1;		
			}
			printf("Sayilarin Toplami : %d",sonuc);
			break;
		case '-':
			printf("Hangi Sayidan Hangi Sayiyi Cikarmak istersiniz ? :");
			scanf("%d %d",&sayi1,&sayi2);
			sonuc=sayi1-sayi2;
			printf("%d Sayisindan %d Sayisini Eksilttigimizde Sonuc : %d",sayi1,sayi2,sonuc);
			break;
		case '*':
			printf("Lutfen Carpmak istediginiz Sayilari Giriniz \nCikmak Icin 1 Giriniz  :\n");
			sayi1=2;
			sonuc2=1;
			while(sayi1!=1){
				printf("Sayi : ");
				scanf("%d",&sayi1);
				sonuc2=sonuc2*sayi1;
			}
		printf("Sayilarinizin Carpimi : %d",sonuc2);
		case '/':
			printf("Hangi Sayiyi Hangi Sayiya Bolmek istersiniz :");
			scanf("%d %d",&sayi1,&sayi2);
			sonuc=sayi1/sayi2;
			printf("%d Sayisini %d Sayisina Boldugumuzde Sonuc : %d",sayi1,sayi2,sonuc);
			break;
				
}
	case 2 :
	printf("Merhaba Uslu Sayi Alma Secenegini Sectiniz \n");
	printf("Lutfen Tabani Giriniz :\n");
	scanf("%d",&sayi1);
	printf("Lutfen Ussu Giriniz : \n");
	scanf("%d",&sayi2);
	sonuc=pow(sayi1,sayi2);
	printf("%d Sayisinin %d.Kuvveti %d Sayisina Esittir",sayi1,sayi2,sonuc);	
	break;
	
	
	case 3 : 
	printf("Merhabalar Vize Final Not Hesaplamayi Sectiniz \n");
	printf("Hesaplama Islemi Vizenin 100 de 40 'i Finalin 100 de 60'i etkili olacak bicimde hesaplanmistir.\n");
	printf("Lutfen Vize Notunuzu Giriniz :");
	scanf("%d",&sayi1);
	printf("Lutfen Final Notunuzu Giriniz : ");
	scanf("%d",&sayi2);
	sonuc=(sayi1*40/100)+(sayi2*60/100);
	if(sonuc<50){
		printf("Malesef Dersten Kaldiniz :( ");
	}
	else
	printf("Tebrikler Dersten Gectiniz :)");
	
	
	
		
		
	}

	

	
return 0;
}

	
	



