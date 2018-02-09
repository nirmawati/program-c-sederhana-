#include<iostream>
using namespace std;

void balik(string);

int main(){
    string kata;
    cout<<"Masukkan Kata : ";cin>>kata;
    balik(kata);
}

void balik(string kata){
    //menggunakan fungsi rbegin rend
    kata=string(kata.rbegin(),kata.rend());
    cout<<"Hasil Reverse : "<<kata<<endl;
}
