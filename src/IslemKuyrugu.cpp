/****************************************************************************
**             SAKARYA UNIVERSITY 
**        BILGISAYAR MUHENDISLIGI BOLUMU 
**          NESNEYE DAYALI PROGRAMLAMA  
**     
**    OGRENCI ISMI.....: Irem Yalcin
**    OGRENCI NUMARASI.: G171210026
****************************************************************************/

#include "IslemKuyrugu.hpp"
#include "Islem.hpp"
#include "Islemci.hpp"
#include <iostream>

using namespace std;

 islemKuyrugu::islemKuyrugu() 
 {
	for(int i=0;i<MaxSayi;i++) 
	{
		this->kuyruk[i]=0;
	}
    elemanSayisi=0;	
 }
 
 int islemKuyrugu::islemEkle(Islem *yeni) 
 {
	 if(elemanSayisi<MaxSayi) 
	 {
		 kuyruk[elemanSayisi]=yeni;
		 elemanSayisi++;
	 }
	 return 0;
 }
 
 int islemKuyrugu::islemSil(Islem *silinecek) 
 {
    if(elemanSayisi!=0) 
	{
		int silinecekIndex;
	
		for(int i=0;i<MaxSayi;i++) 
	    {
			if(kuyruk[i]==silinecek) 
			{
            //cout<<" Silme Islemi If:Silinecek "<<silinecek<<" Kuyruk[i]: "<<kuyruk[i]<<endl;
			kuyruk[i]=0;
			silinecekIndex=i;			
			break;
			}
	    }
	 
        for(int i=silinecekIndex;i<MaxSayi-1;i++) 
	    {
		   kuyruk[i]=kuyruk[i+1];
	    }
	    kuyruk[MaxSayi-1]=0;
     
	    elemanSayisi--; 
	}
	return 0;
 }
 
 void islemKuyrugu::Yazdir() 
 {
	
	cout<<endl;
	 //1.Satir
	 for(int i=0;i<elemanSayisi;i++) 
	 {
		 cout<<"  *******";
	 }
	 cout<<endl;
	 
	 //2.Satir
	 for(int i=0;i<elemanSayisi;i++) 
	 {
			cout<<"  * "<<kuyruk[i]->kimlikNo<<"  *";
	 }
	 cout<<endl;
	 
	 //3.Satir
	 for(int i=0;i<elemanSayisi;i++) 
	 {
		 cout<<"  *******";
	 }
	 cout<<endl;
 
     //4.Satir
	 for(int i=0;i<elemanSayisi;i++) 
	 {
		 cout<<"  *  "<<kuyruk[i]->oncelik<<"  *";
	 }
	 cout<<endl;
	 
	 //5.Satir
	 for(int i=0;i<elemanSayisi;i++) 
	 {
		 cout<<"  *******";
	 }
	 cout<<endl;
	 
     //6.Satir
 	 for(int i=0;i<elemanSayisi;i++) 
	 {
		 if(kuyruk[i]->kalanIslemSuresi < 10)
		 {
			 cout<<"  *  "<<kuyruk[i]->kalanIslemSuresi<<"  *";
	     }    
		 else
			cout<<"  * "<<kuyruk[i]->kalanIslemSuresi<<"  *"; 
	 }
	 cout<<endl; 
    
	// 7.Satir  
	 for(int i=0;i<elemanSayisi;i++) 
	 {
		 cout<<"  *******";
	 }
	 cout<<endl;	 
 }
 
 void islemKuyrugu::kuyrukSirala() 
  {
	  Islem *temp;
	  
	  for(int i=0;i<elemanSayisi-1;i++)
	  {		  
		for(int j=0;j<elemanSayisi-1;j++) 
		{ 
		  if(kuyruk[j]->oncelik < kuyruk[j+1]->oncelik) 
		  { 
		   temp=kuyruk[j];                            //cout<<"1. adim basarili"<<endl;
		   kuyruk[j]=kuyruk[j+1];                    //cout<<"2. adim basarili"<<endl; 
		   kuyruk[j+1]=temp;                        //cout<<"3. adim basarili"<<endl;
	      }                                        //cout<<"ILK DEGERLENDIRME BITISI"<<endl; this->Yazdir(); 
	    }  
	  } 
	
  }
 
int islemKuyrugu::Menu(int *veri,int *secim) 
{
	cout<<endl;
	cout<<endl;
	cout<<"1. Yeni Islem Al"<<endl;
	cout<<"2. Islem Calistir"<<endl;
	cout<<"3. Islem Ekle"<<endl;
	cout<<"4. Cikis"<<endl;
	cin>>*secim;
	
	return 0;
}
 
 
 