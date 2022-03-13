#include "index.h"
#include <iostream>
using namespace std;

int main()
{
	Index a(174, 56, "Ayse Gök"), b(189, 85, "Baha Salu");
	Index d(198, 99); 
	Index c,s,f,e,p,i; //boþ constructorda boþ nesneler oluþturma
	
	c.setb(174);
	c.setk(56);
	c.setas("Ayse Gök");
	
	cout<<"Boy:"<< c.getb()<< "Kilo:"<< c.getk()<<"Ad Soyad:"<<c.getas()<<endl;
	
	a.yaz(); 
	b.yaz();
	d.yaz(); //Yapýcý consturctor aþýrý yüklenmiþ hali
	
	cout<<"\n Derin'in ismini bilgilerine kaydediniz:"<<endl;	
	d.setas("Derin Ulaþ");
	d.yaz();
	
	cout<<"\n Deðerleri ayný olan var mý? "<<endl;
	if(a==b){
		a.yaz();
		cout<<"aynýdýr";
		b.yaz();
	}
	else	
		if(b==c){
			b.yaz();
			cout<<"aynýdýr";
			c.yaz();
			}
		else
			if(b==d){
				b.yaz();
				cout<<"aynýdýr";
				d.yaz();
				}
			else
				if(c==d){
					c.yaz();
					cout<<"aynýdýr";
					d.yaz();
				}
				else	
					if(a==c){
						a.yaz();
						cout<<"aynýdýr";
						c.yaz();
					}
					else		
						if(a==d){
							a.yaz();
							cout<<"aynýdýr";
							d.yaz();
						}
						else cout<<"hiçbiri birbiri ile ayný deðildir";	
	
	
	cout<<"Ayný olan kiþinin bilgilerini güncelleyiniz"<<endl;
	Index c(184,78,"Ceren Uyar");
	c.yaz();
	
	cout<<"Ayse ve Baha'nýn boy ve kilo ortalamalarý \n"<<endl;
	s = a+b;
	s.yaz1();
	
	cout<<"Derin ve Ceren'in boy ve kilo ortalamalarý \n"<<endl;
	f = d+c;
	f.yaz1();
	
	cout<<"Kayýtlý bütün kiþilerin boy ve kilo ortalamalarý \n"<<endl;
	e = s+f;
	e.yaz1();
	
	cout<<"Ayse ile Derin'nin boy ve kilo farklarý \n"<<endl;
	p= a<d;
	p.yaz1();
	
	cout<<"Baha ile Ceren'den hangisinin boyunun daha uzun olduðu:"<<endl;
	i=b.buyuk(c);
	
	cout<<"Baha'nýn boyunu 194 olarak deðiþtiriniz:"<<endl;
	b.setb(194);
	b.yaz();

	a.yaz();
	b.yaz();
	c.yaz();
	d.yaz();

	system("pause");
	return 0;
}

