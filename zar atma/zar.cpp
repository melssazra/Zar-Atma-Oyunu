//Bilgisayar�n att��� zar de�erini, oyuncunun �Z� tu�una bast�k�a ataca�� zar ile ka� defada tutturaca��n� say�p, ayn� zar� tutunca biten bir oyun yaz�n�z.
// (�rnek; bilgisayar 2 att�. oyuncu �Z� bast� 1 att�, oyuncu �Z� bast� 4 att�, oyuncu �Z� bast� 2 att�. Sonu� �oyuncu 3. At���nda tutturdu�) 
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int zar(int&,int,int);
int main()
{
	char tus;
	int toplam=0;
	int deger,tahmin;
	srand(time(NULL));
	deger=(rand()%6)+1;
		cout<<"zar atmak icin 'Z' tuslayiniz: ";
		cin>>tus;
		if(tus!='Z')
		cout<<"programdan ciktiniz";
		while(tus=='Z'){
		 zar( tahmin,1,6);
		
	       if(tahmin!=deger){
	         cout<<"attiginiz numara: "<<tahmin<<" bilgisayarin sonucuna esit degil :( tekrar denemek istiyorsaniz lutfen 'Z' yi tuslayin :" <<endl;
	       	cin>>tus;
		    toplam++;
			}
		else{
			cout<<"TEBRIKLER! attiginiz zar: "<<tahmin<<"\nbilgisayarin attigi zar: "<<deger<<endl;
			cout<<toplam<<". denemenizde dogru sonucu yakaladiniz!";
			break;
		}}
		}
int zar(int& tahmin, int a,int b){
	tahmin=(rand()%(b-a+1))+a;
	
}
