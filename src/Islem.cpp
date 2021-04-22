/****************************************************************************
**             SAKARYA UNIVERSITY 
**        BILGISAYAR MUHENDISLIGI BOLUMU 
**          NESNEYE DAYALI PROGRAMLAMA  
**     
**    OGRENCI ISMI.....: Irem Yalcin
**    OGRENCI NUMARASI.: G171210026
****************************************************************************/

#include "Islem.hpp"
#include <iostream>
#include <stdio.h>    
#include <stdlib.h>   
#include <time.h>    
#include <conio.h>

using namespace std;

Islem::Islem (int veri)
{
    int islemSuresi,oncelik;
	
	this->kimlikNo = veri;
	
	rastgeleSure(&islemSuresi);
	rastgeleOncelik(&oncelik);
	
	this->kalanIslemSuresi = islemSuresi;
    this->oncelik = oncelik;  
}

int Islem::rastgeleSure(int *islemSuresi)
{
	
	//Islem Suresi Icin
	*islemSuresi = rand() % 15 + 5;
		if(*islemSuresi > 15) 
	{
		*islemSuresi=15;
	}
	//cout<<"Islem Sinifi:islemSuresi rand:"<<*islemSuresi<<endl;

}

int Islem::rastgeleOncelik(int *oncelik)
{

	*oncelik = rand() % 10 + 0;
	
	if(*oncelik==10) 
	{
		*oncelik=9;
	}
	//cout<<"Islem Sinifi:oncelik rand:"<<*oncelik<<endl;
}
