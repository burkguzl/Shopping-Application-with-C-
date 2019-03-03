#include<iostream>
#include<string>
using namespace std;

class Kitap;//class Kitap; //friend function un Kitap class ýný görmesi icin gerekli...
class Uye; //friend function un Uye class ýný görmesi icin gerekli...

class Urun{ // Temel Sýnýf olan ürün sýnýfý tanýmlandý...
	
	protected: // Urun sýnýfýnýn üyelerine yabancý class lardan direk eriþim yasaklandý...
		int urunId;
		string urunAdi;
		string urunAciklama;
		int fiyat;
		string satistami;
		string renk;
		string garanti;
		string marka;
		
	public:
		 
	    Urun(){ // varsayilan giris tanýmlandý...
		}
		
		Urun(int id,string adi, string mrk,string acklm, int fyt, string satis,string rnk,string grnt){ // parametreli giriþ tanýmlandý...
			
			urunId=id;
			urunAdi=adi;
			urunAciklama=acklm;
			fiyat=fyt;
			satistami=satis;
			renk=rnk;
			garanti=grnt;
			marka=mrk;			
		}
		
		void Giris(){ // Urunleri eklemek icin giris fonksiyonu oluþturuldu...
			
			cout<<"Eklenecek Urun Bilgilerini Doldurunuz..."<<endl<<endl;
			cout<<"Urun Adi: ";
			getline(cin,urunAdi);
			cout<<"Urun Markasi: ";
			getline(cin,marka);
			cout<<"Urun Aciklamasi: ";
			getline(cin,urunAciklama);
			cout<<"Urun Id: ";
			cin>>urunId;			
			cout<<"Urun Fiyat: ";
			cin>>fiyat;
			cout<<"Urun Satis Durumu(Evet/Hayir): ";
			cin>>satistami;
			cout<<"Urun Renk: ";
			cin>>renk;		
			cout<<"Urun Garanti Durumu(Evet/Hayir): ";
			cin>>garanti;
			cout<<endl;		
			
			cout<<urunAdi<<" Urunu Eklendi..."<<endl<<endl;
									
		}
		
		void virtual Goster(){ //Eklenen ürünleri göstermek icin göster fonksiyonu oluþturuldu...Polymorphism için sanallaþtýrma yapýldý...
			
			cout<<"Urun Id: "<< urunId << endl;
			cout<<"Urun Adi: "<< urunAdi << endl;
			cout<<"Urun Markasi: "<< marka << endl;
			cout<<"Urun Aciklamasi: "<< urunAciklama << endl;
			cout<<"Urun Fiyat: "<< fiyat << "TL"<< endl;
			cout<<"Urun Satis Durumu(Evet/Hayir): "<< satistami << endl;
			cout<<"Urun Renk: "<< renk << endl;
			cout<<"Urun Garanti Durumu(Evet/Hayir): "<< garanti<< endl<<endl;

		}
	
};



class Bilgisayar: public Urun{
	protected:
		
		string urunBoyut;
		string harddiskKapasite;
		string urunIslemci;
		string urunEkranKarti;
		string urunRam;
		
	public:
		
		friend int operator-(Uye,Bilgisayar);
		friend int operator+(Bilgisayar,Kitap);
		
		Bilgisayar(){
			
		}
		Bilgisayar(int id,string adi, string mrk,string acklm, int fyt, string satis,string rnk,string grnt,string byt,string kpst,string islmc, string ek,string ram)
		:Urun(id,adi,mrk,acklm,fyt,satis,rnk,grnt){
			
			urunId=id;
			urunAdi=adi;
			marka=mrk;
			urunAciklama=acklm;
			fiyat=fyt;
			satistami=satis;
			renk=rnk;
			garanti=grnt;
			urunBoyut=byt;
			harddiskKapasite=kpst;
			urunIslemci=islmc;
			urunEkranKarti=ek;
			urunRam=ram;
		}
		void Giris(){ // Urunleri eklemek icin giris fonksiyonu oluþturuldu...
		
			cout<<"Bilgisayar Urunu Icin Bilgilerini Doldurunuz..."<<endl<<endl;
			cout<<"Urun Adi: ";
			getline(cin,urunAdi);
			cout<<"Urun Markasi: ";
			getline(cin,marka);
			cout<<"Urun Aciklamasi: ";
			getline(cin,urunAciklama);
			cout<<"Urun Id: ";
			cin>>urunId;			
			cout<<"Urun Fiyat: ";
			cin>>fiyat;
			cout<<"Urun Satis Durumu(Evet/Hayir): ";
			cin>>satistami;
			cout<<"Urun Renk: ";
			cin>>renk;		
			cout<<"Urun Garanti Durumu(Evet/Hayir): ";
			cin>>garanti;
			cout<<"Ekran Boyutu (inc): ";
			cin>>urunBoyut;
			cout<<"Harddisk Kapasite: ";
			cin>>harddiskKapasite;		
			cout<<"Islemci Adi:  ";
			cin>>urunIslemci;
			cout<<"Ekran Karti:  ";
			cin>>urunEkranKarti;	
			cout<<"Ram:  ";
			cin>>urunRam;
			cout<<endl;		
			
			cout<<urunAdi<<" Urunu Eklendi..."<<endl<<endl;								
		}
			void Goster(){ //Eklenen ürünleri göstermek icin göster fonksiyonu oluþturuldu...
			
			cout<<"Urun Id: "<< urunId << endl;
			cout<<"Urun Adi: "<< urunAdi << endl;
			cout<<"Urun Markasi: "<< marka << endl;
			cout<<"Urun Aciklamasi: "<< urunAciklama << endl;
			cout<<"Urun Fiyat: "<< fiyat << "TL"<< endl;
			cout<<"Urun Satis Durumu(Evet/Hayir): "<< satistami << endl;
			cout<<"Urun Renk: "<< renk << endl;
			cout<<"Urun Garanti Durumu(Evet/Hayir): "<< garanti << endl;
			cout<<"Ekran Boyutu (inc): "<< urunBoyut << endl;
			cout<<"Harddisk Kapasite: "<< harddiskKapasite << endl;
			cout<<"Islemci: "<< urunIslemci << endl;
			cout<<"Ekran Karti: "<< urunEkranKarti << endl;
			cout<<"Ram: "<< urunRam << endl<<endl;		
			
		}	
		
		//Get functions
		
		int fiyatGet() { return fiyat;}
		int urunIdGet() { return urunId;}
		string urunAdiGet(){return urunAdi;}
		
		
		//Set function
		
		void fiyatSet(int a){fiyat=a;}
		void urunIdSet(int a){urunId=a;}	
		
	
};

class Kitap: public Urun{
	
	protected:
		string basimYili;
		string kitapTuru;
		string yazar;
		int sayfaSayisi;
	public:
		
		friend int operator+(Bilgisayar,Kitap);
		friend int operator-(Uye,Kitap);
			
		Kitap(int id,string adi, string mrk,string acklm, int fyt, string satis,string rnk,string grnt,string bsm,string tur,string yzr,int ss)
		:Urun(id,adi,mrk,acklm,fyt,satis,rnk,grnt){
			
			urunId=id;
			urunAdi=adi;
			marka=mrk;
			urunAciklama=acklm;
			fiyat=fyt;
			satistami=satis;
			renk=rnk;
			garanti=grnt;
			basimYili=bsm;
			kitapTuru=tur;
			yazar=yzr;
			sayfaSayisi=ss;
			
		}
		
		Kitap(){
			
		}
		void Giris(){ // Urunleri eklemek icin giris fonksiyonu oluþturuldu...
			
			cout<<"Kitap Urunu Bilgilerini Doldurunuz..."<<endl<<endl;
			cout<<"Urun Adi: ";
			cin>>urunAdi;
			cout<<"Kitap Turu: ";
			cin>>kitapTuru;
			cout<<"Yazar:  ";
			cin>>yazar;
			cout<<"Urun Markasi: ";
			cin>>marka;
			cout<<"Urun Aciklamasi: ";
			cin>>urunAciklama;
			cout<<"Urun Id: ";
			cin>>urunId;			
			cout<<"Urun Fiyat: ";
			cin>>fiyat;
			cout<<"Urun Satis Durumu(Evet/Hayir): ";
			cin>>satistami;
			cout<<"Urun Renk: ";
			cin>>renk;		
			cout<<"Urun Garanti Durumu(Evet/Hayir): ";
			cin>>garanti;
			cout<<"Basim Yili: ";
			cin>>basimYili;		
			cout<<"Sayfa Sayisi:  ";
			cin>>sayfaSayisi;
			cout<<endl;		
			
			cout<<urunAdi<<" Urunu Eklendi..."<<endl<<endl;	
												
		}
			void Goster(){ //Eklenen ürünleri göstermek icin göster fonksiyonu oluþturuldu...
			
			cout<<"Urun Adi: "<< urunAdi << endl;
			cout<<"Kitap Turu: "<< kitapTuru << endl;
			cout<<"Yazar: "<< yazar << endl;
			cout<<"Urun Markasi: "<< marka << endl;	
			cout<<"Urun Aciklamasi: "<< urunAciklama << endl;
			cout<<"Urun Id: "<< urunId << endl;						
			cout<<"Urun Fiyat: "<< fiyat << "TL"<< endl;
			cout<<"Urun Satis Durumu(Evet/Hayir): "<< satistami << endl;
			cout<<"Urun Renk: "<< renk << endl;
			cout<<"Urun Garanti Durumu(Evet/Hayir): "<< garanti << endl;
			cout<<"Basim Yili: "<< basimYili << endl;			
			cout<<"Sayfa Sayisi: "<< sayfaSayisi << endl<<endl;
			
		}	
		
		//Get functions
		
		int fiyatGet() { return fiyat;}
		int urunIdGet() { return urunId;}
		string urunAdiGet(){return urunAdi;}
		
		//Set function
		
		void fiyatSet(int a){fiyat=a;}
		void urunIdSet(int a){urunId=a;}	
				
};



class Uye: public Urun {
	
	protected:
		string isim;
		string eposta;
		int bakiye;
	public:
	    Uye();
		Uye(string ism,string ep,int bky);		
		void  Giris();
		void  Goster(); 	
        friend int operator-(Uye,Kitap);
     	friend int operator-(Uye,Bilgisayar);
};

Uye::Uye(){
	
}

Uye::Uye(string ism,string ep,int bky){ //class icinde tanýmlamakla ayný farký yok...
		isim=ism;
		eposta=ep;
		bakiye=bky;
		}
void Uye::Giris(){
	
	cout<<"Uyelik Bilgilerini Doldurunuz..."<<endl<<endl;
	cout<<"Kullanici Adi: ";
	cin>>isim;
	cout<<"Eposta: ";
	cin>>eposta;
	cout<<"Bakiye: ";
	cin>>bakiye; 
	cout<<endl;
	cout<<isim<<" Hesabiniz Olusturuldu..."<<endl<<endl;
	
}		
void Uye::Goster(){
	
	cout<<"Kullanici Adi: "<<isim <<endl;
	cout<<"Eposta: "<<eposta <<endl;
	cout<<"Bakiye: "<<bakiye<<endl<<endl;
	
}
		
main()
{
	cout<<"--------------------------------------------------"<<endl<<endl;
	cout<<"ALISVERIS"<<endl<<endl;
	cout<<"--------------------------------------------------"<<endl<<endl;
	
	Uye kullanici1;
	kullanici1.Giris();
	cout<<"--------------------------------------------------"<<endl<<endl;
	cout<<"Stoktaki Urunler"<<endl<<endl;
	cout<<"--------------------------------------------------"<<endl<<endl;
	Bilgisayar urun1(1002,"Bilgisayar","Lenovo","Lenovo diz ustu bilgisayar",3400,"Evet","Siyah","Evet","19inc","2TB","Intel","GT630M","8GB");
	urun1.Goster();
	Kitap urun2;
	urun2.Giris();
	cout<<"--------------------------------------------------"<<endl<<endl;
	cout<<"Stoktaki Urunler(Ozet)"<<endl<<endl;
	cout<<"--------------------------------------------------"<<endl<<endl;
	
	//Polymorphism
		
	Urun *u[1];
	u[0]=&urun1;
	u[1]=&urun2;
	for(int i=0;i<2;i++){
		u[i]->Goster();
	}
	int secim;
	cout<<"Almak Istediginiz Urunun ID sini yaziniz: ";
	cin>>secim;
	int id=urun1.urunIdGet();
	if(secim==urun1.urunIdGet()){
		cout<<"--------------------------------------------------"<<endl<<endl;
		cout<<urun1.urunAdiGet()<<" Urununu Basariyla Satin Aldiniz..."<<endl;
		cout<<"--------------------------------------------------"<<endl<<endl;
		cout<<"Kalan Bakiyeniz: "<<kullanici1-urun1;
		
	}
	if(secim==urun2.urunIdGet()){
		cout<<"--------------------------------------------------"<<endl<<endl;
		cout<<urun2.urunAdiGet()<<" Urununu Basariyla Satin Aldiniz...";
		cout<<"--------------------------------------------------"<<endl<<endl;
		cout<<"Kalan Bakiyeniz: "<<kullanici1-urun2;
	}

	
}

//Operator Overloading...

int operator +(Bilgisayar b,Kitap k)
{
	int toplam;
	toplam=b.fiyat+k.fiyat;
	return toplam;
}

int operator -(Uye u,Kitap k)
{
	int fark;
	fark=u.bakiye-k.fiyat;
	return fark;
}
int operator -(Uye c,Bilgisayar d)
{
	int fark;
	fark=c.bakiye-d.fiyat;
	return fark;
}



