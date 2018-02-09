#include<iostream>
using namespace std;

int total(int);//mendefinisikan fungsi

int main(){
    int n;
    cout<<"Masukkan Nilai n : ";
    cin>>n;//memberi input nilai
    //cek inputan lebih dari 10
    if(n>=10){
        //do somthing
        cout<<"Hasil "<<n<<" : "<<total(n);
    }else{
        cout<<"Maaf, inputan anda kurang dari 10"; 
    }
    cout<<endl;
}

int total(int n){
    //rekursif
    if(n == 1){//base case
		return 1;
    }
	else{//rekursif state
		return n + total(n - 1);
    }    
    /*
    iteratif
    int hasil = 1;
    for(int i = 1;i<n;i++){
        hasil = hasil + i++;
    }    
    return hasil;
    */
}
