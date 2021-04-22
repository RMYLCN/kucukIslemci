/****************************************************************************
**             SAKARYA UNIVERSITY 
**        BILGISAYAR MUHENDISLIGI BOLUMU 
**          NESNEYE DAYALI PROGRAMLAMA  
**     
**    OGRENCI ISMI.....: Irem Yalcin
**    OGRENCI NUMARASI.: G171210026
****************************************************************************/

#ifndef ISLEMYONETICISI_HPP
#define ISLEMYONETICISI_HPP

#include "Islemci.hpp"
#include "IslemKuyrugu.hpp"
#include "Islem.hpp"

class IslemYoneticisi 
{
	public:
		IslemYoneticisi();
		void Baslat();
		islemKuyrugu *IslemKuyrugu;
		Islemci *islemci;
};



#endif