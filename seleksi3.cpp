#include <iostream>
using namespace std;

int main()
{
    float data, R;
    int N = 3, hasil;
    
	
    for (int i=1;i<=N ;i++){
    	cout<<"masukkan nilai "<<i<<" = "; cin>>data;
		hasil += data;	
	}
	R = hasil/N;
	cout <<"Nilai Rata rata Anda adalah : "<<R<<endl;
	
	if(R>=60){
		cout<<"Selamat anda LULUS";
	}else{
		cout<<"Maaf anda TIDAK LULUS";
	}  
}
