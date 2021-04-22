/****************************************************************************
**             SAKARYA UNIVERSITY 
**        BILGISAYAR MUHENDISLIGI BOLUMU 
**          NESNEYE DAYALI PROGRAMLAMA  
**     
**    OGRENCI ISMI.....: Irem Yalcin
**    OGRENCI NUMARASI.: G171210026
****************************************************************************/

#ifndef ISLEM_HPP
#define ISLEM_HPP

class Islem 
{
	public:
	
		Islem(int veri);
		int rastgeleSure(int *islemSuresi);
		int rastgeleOncelik(int *oncelik);
		
		int kimlikNo;
		int kalanIslemSuresi;
		int oncelik;
};

#endif