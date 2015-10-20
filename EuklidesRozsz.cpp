//Wstep do kryptologii klucza publicznego
//Rozszerzony Algorytm Euklidesa
 
#include <iostream>
#include <cmath>

//
//	AJOTKA
//

using namespace std;
 
int m=0, x=0, r=0, y=1, nwdw=0;		// m oraz r przechowuja odpowiednio wartosci a oraz b
 
void NWD(int a, int b)
{
	if(b==0) 						//odwrocona petla do ... while
	{
		nwdw=a;						//Je¿eli reszta z dzielenia wynosi 0 (czyli a%b => b=0) to, wówczas wynik przechowywany jest w zmiennej nwd
		r=a;
		return;
	}
	
	else
		NWD(b,a%b);					//a (mod b)
 
	cout<<x<<"*"<<m<< " + "<<y<<"*"<<r<<"\n";		//NWD(a, b) = x*a + y*b
	int t=x;
	x=(y-floor(a/b)*x);
	m=b;
	y=t;
	r=a;
}
 
int main()
{
	int a, b;
	cout<<"Podaj dwie liczby"<<"\n";
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;

	NWD(a,b);
	cout<<nwdw<<" = "<<x<<"*"<<m<< " + "<<y<<"*"<<r<<"\n"; 

//Rozszerzone wspolczynniki
//x = x
//y = y
	
	cout<<"\nNWD: "<<nwdw<<"\n";

//Ponadto algorytm ten mo¿e byæ u¿yty do znalezienia liczby odwrotnej do b mod a
//Liczba odwrotna do liczby b mod a jest to liczba y


	system("PAUSE");
	return 0;
}
