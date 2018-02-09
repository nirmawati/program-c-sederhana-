#include<iostream>
using namespace std;
int main(){
	int uang,saldo,bunga;
	float bagiHasil = 0.02;
	int i=1;
	
	cout<<" Masukkan Jumlah tabungan  = Rp."; cin>>uang;
	
	while(i<=12){
		cout<<"Tabungan Bulan ke- "<<i;
		bunga=uang*bagiHasil; //jumlah uang 2%
		cout<<"    bunga : Rp."<<bunga;
		uang=uang+bunga; //uang + bunga
		i++; //kenaikan perbulan
		cout<<"    Saldo: Rp."<<uang<<endl;
	}
	saldo=uang; 
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"Jumlah tabungan anda dalam setahun : Rp"<<saldo;

}
