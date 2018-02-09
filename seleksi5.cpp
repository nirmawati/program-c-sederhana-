#include <iostream>
using namespace std;

int main()
{
	int suhu;
	cout<<" Suhu Air  = "; cin>>suhu;
	
	if(suhu<=0){
		cout<<"Beku";
	}else if(suhu>0&&suhu<100){
		cout<<"cair";
	}else if(suhu>=100){
		cout<<"Uap";
	}
}
