#include "index.h"
#include <iostream>
using namespace std;

int main()
{
	Index a(174, 56, "Ayse G�k"), b(189, 85, "Baha Salu");
	Index d(198, 99); 
	Index c,s,f,e,p,i; //bo� constructorda bo� nesneler olu�turma
	
	c.setb(174);
	c.setk(56);
	c.setas("Ayse G�k");
	
	cout<<"Boy:"<< c.getb()<< "Kilo:"<< c.getk()<<"Ad Soyad:"<<c.getas()<<endl;
	
	a.yaz(); 
	b.yaz();
	d.yaz(); //Yap�c� consturctor a��r� y�klenmi� hali
	
	cout<<"\n Derin'in ismini bilgilerine kaydediniz:"<<endl;	
	d.setas("Derin Ula�");
	d.yaz();
	
	cout<<"\n De�erleri ayn� olan var m�? "<<endl;
	if(a==b){
		a.yaz();
		cout<<"ayn�d�r";
		b.yaz();
	}
	else	
		if(b==c){
			b.yaz();
			cout<<"ayn�d�r";
			c.yaz();
			}
		else
			if(b==d){
				b.yaz();
				cout<<"ayn�d�r";
				d.yaz();
				}
			else
				if(c==d){
					c.yaz();
					cout<<"ayn�d�r";
					d.yaz();
				}
				else	
					if(a==c){
						a.yaz();
						cout<<"ayn�d�r";
						c.yaz();
					}
					else		
						if(a==d){
							a.yaz();
							cout<<"ayn�d�r";
							d.yaz();
						}
						else cout<<"hi�biri birbiri ile ayn� de�ildir";	
	
	
	cout<<"Ayn� olan ki�inin bilgilerini g�ncelleyiniz"<<endl;
	Index c(184,78,"Ceren Uyar");
	c.yaz();
	
	cout<<"Ayse ve Baha'n�n boy ve kilo ortalamalar� \n"<<endl;
	s = a+b;
	s.yaz1();
	
	cout<<"Derin ve Ceren'in boy ve kilo ortalamalar� \n"<<endl;
	f = d+c;
	f.yaz1();
	
	cout<<"Kay�tl� b�t�n ki�ilerin boy ve kilo ortalamalar� \n"<<endl;
	e = s+f;
	e.yaz1();
	
	cout<<"Ayse ile Derin'nin boy ve kilo farklar� \n"<<endl;
	p= a<d;
	p.yaz1();
	
	cout<<"Baha ile Ceren'den hangisinin boyunun daha uzun oldu�u:"<<endl;
	i=b.buyuk(c);
	
	cout<<"Baha'n�n boyunu 194 olarak de�i�tiriniz:"<<endl;
	b.setb(194);
	b.yaz();

	a.yaz();
	b.yaz();
	c.yaz();
	d.yaz();

	system("pause");
	return 0;
}

