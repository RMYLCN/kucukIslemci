/****************************************************************************
**             SAKARYA UNIVERSITY 
**        BILGISAYAR MUHENDISLIGI BOLUMU 
**          NESNEYE DAYALI PROGRAMLAMA  
**     
**    OGRENCI ISMI.....: Irem Yalcin
**    OGRENCI NUMARASI.: G171210026
****************************************************************************/

#ifndef ISLEMCI_HPP
#define ISLEMCI_HPP

#include "Islem.hpp"
#include "IslemKuyrugu.hpp"

class Islemci 
{
  public:
   Islemci();
   int Calistir();
   void Yazdir();
   Islem *islenen;  
};

#endif