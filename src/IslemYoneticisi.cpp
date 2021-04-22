/****************************************************************************
**             SAKARYA UNIVERSITY 
**        BILGISAYAR MUHENDISLIGI BOLUMU 
**          NESNEYE DAYALI PROGRAMLAMA  
**     
**    OGRENCI ISMI.....: Irem Yalcin
**    OGRENCI NUMARASI.: G171210026
****************************************************************************/

#include "Islemci.hpp"
#include "IslemKuyrugu.hpp"
#include "Islem.hpp"
#include "IslemYoneticisi.hpp"

#include<iostream>
using namespace std;

IslemYoneticisi::IslemYoneticisi() 
{
   this->IslemKuyrugu = new islemKuyrugu();
   
   int veri=10;
   Islem *yeni=new Islem(veri);  veri++; IslemKuyrugu->islemEkle(yeni);
   Islem *yeni1=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni1);
   Islem *yeni2=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni2);
   Islem *yeni3=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni3);
   Islem *yeni4=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni4);
   Islem *yeni5=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni5);
   Islem *yeni6=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni6);
   Islem *yeni7=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni7);
   Islem *yeni8=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni8);
   Islem *yeni9=new Islem(veri); veri++; IslemKuyrugu->islemEkle(yeni9);
   
   this->islemci = new Islemci();
}

void IslemYoneticisi::Baslat() 
{
	int secim=0;
	int veri=20;
 for(;;)
 {
    system("cls");
	this->IslemKuyrugu->kuyrukSirala();
    this->IslemKuyrugu->Yazdir();
    this->islemci->Yazdir();
    this->IslemKuyrugu->Menu(&veri,&secim);
    //cout<<"Secim"<<secim<<endl;
    
	if(secim==1) //Yeni Islem Al
    {
	    if(this->islemci->islenen!=0) 
	    {
		   Islem *sil = this->IslemKuyrugu->kuyruk[0];
    	   Islem *temp= this->islemci->islenen;
           this->islemci->islenen = sil;
		   this->IslemKuyrugu->islemSil(sil);
		   this->IslemKuyrugu->islemEkle(temp);
		   this->IslemKuyrugu->kuyrukSirala();
		   sil=0;
		   temp=0;
		   //return 0;
	    }
	    else 
		{
			Islem *sil = this->IslemKuyrugu->kuyruk[0];    
			this->islemci->islenen = this->IslemKuyrugu->kuyruk[0]; 
		    this->IslemKuyrugu->islemSil(sil);
			sil=0;
		    //return 0;
		}
    }
   
    else if(secim==2) //Islem Calistir
    {
	   this->islemci->Calistir();
    }

	else if(secim==3) //Islem Ekle
	{
		if(this->IslemKuyrugu->elemanSayisi != this->IslemKuyrugu->MaxSayi) 
		{
			Islem *yeniIslem = new Islem(veri); veri++;
			this->IslemKuyrugu->islemEkle(yeniIslem);
			this->IslemKuyrugu->kuyrukSirala();
		}
		else
			continue; 		
	}
	
	else if(secim==4) 
	{
		exit(0);
	}
    
	else 
		continue; 
 }

  exit(0);
}







