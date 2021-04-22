/****************************************************************************
**             SAKARYA UNIVERSITY 
**        BILGISAYAR MUHENDISLIGI BOLUMU 
**          NESNEYE DAYALI PROGRAMLAMA  
**     
**    OGRENCI ISMI.....: Irem Yalcin
**    OGRENCI NUMARASI.: G171210026
****************************************************************************/

#include "Islem.hpp"
#include "IslemKuyrugu.hpp"
#include "Islemci.hpp"
#include <iostream>

using namespace std;

Islemci::Islemci() 
{
	islenen=0;
}

int Islemci::Calistir() 
{
  if(islenen!=0) 
  {
	 if(islenen->kalanIslemSuresi!=0) 
	 {
	   if( islenen->kalanIslemSuresi < 5 )
	   {
		 islenen->kalanIslemSuresi=0;
	     int yeniOncelik;
	     this->islenen->rastgeleOncelik(&yeniOncelik);
         this->islenen->oncelik=yeniOncelik; 
	   }
	   else
	    {
		   islenen->kalanIslemSuresi -=5;
	       int yeniOncelik;
	       this->islenen->rastgeleOncelik(&yeniOncelik);
	       this->islenen->oncelik=yeniOncelik; 
	    }
	 }
	
 	 else if(islenen->kalanIslemSuresi==0) 
	 {
	 	 islenen=0;
	 }
	
	 else 
	 return 0; 
 }
  else
	  return 0;
}

void Islemci::Yazdir() 
{
	cout<<endl;
	cout<<endl;
	
	if(islenen!=0) 
	{
	
	//1.Satir
	cout<<"   ____________________"<<endl;
	
	//2&3&4&5 Satir
	for(int i=0;i<3;i++) 
	{
		cout<<"  |                    |"<<endl;
	}
	
	//6.Satir
	cout<<"  |      *******       |"<<endl;
	
	//7.Satir 
	 cout<<"  |      * "<<islenen->kimlikNo<<"  *       |"<<endl;
	 
	//8.Satir
	cout<<"  |      *******       |"<<endl;

	//9.Satir
	cout<<"  |      *  "<<islenen->oncelik<<"  *       |"<<endl;
	
	//10.Satir 
	cout<<"  |      *******       |"<<endl;

    //11.Satir
     if(islenen->kalanIslemSuresi < 10) 
	 {
		cout<<"  |      *  "<<islenen->kalanIslemSuresi<<"  *       |"<<endl; 
	 }	
	 else
		cout<<"  |      * "<<islenen->kalanIslemSuresi<<"  *       |"<<endl; 
	
	//12.Satir
	cout<<"  |      *******       |"<<endl;
	
	// 13&14&15&16
	for(int i=0;i<2;i++) 
	{
		cout<<"  |                    |"<<endl;
	}
	
	//17.Satir
	cout<<"   _____________________"<<endl; 
	}
	
	else 
	{
			//1.Satir
	cout<<"   ____________________"<<endl;
	
	//2&3&4&5 Satir
	for(int i=0;i<3;i++) 
	{
		cout<<"  |                    |"<<endl;
	}
	
	//6.Satir
	cout<<"  |      *******       |"<<endl;
	
	//7.Satir 
	 cout<<"  |      *     *       |"<<endl;
	 
	//8.Satir
	cout<<"  |      *******       |"<<endl;

	//9.Satir
	cout<<"  |      *     *       |"<<endl;
	
	//10.Satir 
	cout<<"  |      *******       |"<<endl;

    //11.Satir
		cout<<"  |      *     *       |"<<endl; 
	
	//12.Satir
	cout<<"  |      *******       |"<<endl;
	
	// 13&14&15&16
	for(int i=0;i<2;i++) 
	{
		cout<<"  |                    |"<<endl;
	}
	
	//17.Satir
	cout<<"   _____________________"<<endl;
	}
	
		
	
	
}
















