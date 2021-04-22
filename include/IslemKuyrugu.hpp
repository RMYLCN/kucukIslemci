/****************************************************************************
**             SAKARYA UNIVERSITY 
**        BILGISAYAR MUHENDISLIGI BOLUMU 
**          NESNEYE DAYALI PROGRAMLAMA  
**     
**    OGRENCI ISMI.....: Irem Yalcin
**    OGRENCI NUMARASI.: G171210026
****************************************************************************/

#ifndef ISLEMKUYRUGU_HPP
#define ISLEMKUYRUGU_HPP

#include "Islem.hpp"
#include "Islemci.hpp"

class islemKuyrugu 
{
	public:
	   static const int MaxSayi=10;
	   
	   islemKuyrugu();
       int islemEkle(Islem *yeni);
	   int islemSil(Islem *silinecek);
	   void Yazdir();
	   int Menu(int *veri, int *secim);
	   void kuyrukSirala();
	   
	   Islem *kuyruk[MaxSayi];
	   int elemanSayisi;	   
	
};

#endif