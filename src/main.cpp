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
#include "IslemYoneticisi.hpp"
#include <iostream>
#include <stdio.h>    
#include <stdlib.h>   
#include <time.h>    
#include <conio.h>
 
 using namespace std;
 
 int main(int argc,char**argv) 
{
   IslemYoneticisi *Yonetici = new IslemYoneticisi();
   Yonetici->Baslat();
   exit(0);
}