#include "index.h"
#include <iostream>
#include <cmath>
using namespace std;

Index::Index(double b, double k, char as)
{
	set(b);
	set(k);
	set(as);
}

Index::Index()
{
	set(b);
	set(k);
	set(as);		
}

Index::Index(double b, double k)
{
	set(b);
	set(k);
	set(as);
}

bool Index::operator==(Index a);
{
	if(boy==a.boy&&kilo==a.kilo&&adsoyad=a.adsoyad)
		return true;
	else 
		return false;
}

Index Index::operator+(Index a)
{
	Index sonuc;
	sonuc.boy=boy+a.boy;
	sonuc.boy=sonuc.boy/2;
	sonuc.kilo=kilo+a.kilo;
	sonuc.kilo=sonuc.kilo/2;
	
	return sonuc;
}

Index Index::operator<(Index a)
{
	Index son;
	son.boy=boy-a.boy;
	son.boy=fabs(son.boy);
	son.kilo=kilo-a.kilo;
	son.kilo=fabs(son.kilo);
	
	return son;	
}

Index Index::buyuk(Index a) //geri döndürmeyen
{
	if(boy>a.boy)
		cout<<"Baha'nýn boyu Ceren'den uzundur";
	else
		cout<<"Ceren'in boyu Baha'dan uzundur";
}

void Index::yaz(void )
{
	cout<< "Boy: "<< boy << "\nKilo: "<< kilo  << "\nAd Soyad: "<< adsoyad;
}

void Index::yaz1(void )
{
	cout<< "Boy: "<< boy << "\nKilo: "<< kilo;
}

void Index::setb(double b)
{
	boy=b;
}

void Index::setk(double k)
{
	kilo=k;
}

void Index::setas(string )
{
	adsoyad=as;
}

double Index::getb()
{
	return boy;	
}

double Index::getk()
{
	return kilo;	
}

string Index::getas()
{
	return adsoyad;
}

