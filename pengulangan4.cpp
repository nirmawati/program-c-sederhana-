#include <iostream>
using namespace std;

int main()
{
    float C,F;
    int N;
    cout << "Program Konversi Suhu "<<" :\n";
	cout << "Masukan N = "; cin >> N;
    for (int i=0;i<N ;i++){
    	cout<<"masukkan nilai celciusnya = "; cin>>C;
		F=C*1.8 + 32;
		cout<<"nilai Fahrenheit = "<<F<<" :\n";	
	}
    return 0;
}
