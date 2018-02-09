#include<iostream>
using namespace std;
int main(){
	int jamker = 40;
	int upah = 1000;
	int upah2 = 2000;
	int denda = 500;
	int jam, lembur, gaji, bolos;
	
	cout<<" Masukkan Jumlah Jam Kerja  = "; cin>>jam;
	if(jam>jamker){
	
		lembur = (jam-jamker)*upah2;
		gaji = jamker*upah+lembur;
		
	}else if(jam<jamker){
		bolos = (jamker-jam)*denda;
		gaji = (jam*upah)-bolos;
			
	}
	cout <<"Total Gaji adalah : "<<gaji;
	
	
}
