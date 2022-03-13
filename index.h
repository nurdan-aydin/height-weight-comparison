#ifndef INDEX_H
#define INDEX_H

class Index{
	
	private:
		double boy;
		double kilo;
		string adsoyad; 
	public:
		Index (double = 0.0, double = 0.0, string= 0);
		Index ( ){
			this->boy=0;
			this->kilo=0;
			this->adsoyad="bilinmiyor";
		}
		Index (double boy, double kilo){
			this->boy = boy;
			this->kilo = kilo;
			this->adsoyad = "bilinmiyor";	
		}
		
		bool operator==(Index );
		
		Index operator+(Index ); //deðer döndürür
		Index operator<(Index ); //deðer döndürür
		Index buyuk(Index );

		void yaz(void );
		void yaz1(void );
		void setb(double);
		void setk(double);
		void setas(string);
		
		double getb();
		double getk();
		string getas();
	
};
#endif
