#include <iostream>

using namespace std;

int main(){
	
	int t[121];
	int a;
	
	cout<<"podaaj liczbe a(1=119):";
	cin>> a;
	if(a<1 && a>119){
	    return 0;
	}
	
	for(int i=0; i<121; i++){
		t[i]=0;
	}
	
	t[a]=100;
	t[a-1]=10;
	t[a+1]=10;
	
	for(int i=120; i>0; i--){
		cout<<t[i]<<" ";
	}
	return 0;
}