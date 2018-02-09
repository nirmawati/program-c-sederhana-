#include <iostream>
using namespace std;

int main()
{
    float data, R;
    int N, hasil;
    
    cout << "MINGHITUNG NILAI RATA2 :\n";
	cout << "Masukan N = "; cin >> N;
	
    for (int i=1;i<=N ;i++){
    	cout<<"masukkan nilai "<<i<<" = "; cin>>data;
		hasil += data;	
	}
	R = hasil/N;
	cout <<"Nilai Rata ratanya adalah : "<<R;
    return 0;
}
