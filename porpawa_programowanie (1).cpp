#include <iostream>

using namespace std;

int main(){
    int t[10]; 

for(int j=0; j<10; j++)
    t[j]=0;

for(int a=0; a<10; a++){
    cout<<"podaj "<<a+1<<" liczbe: ";
        cin>>t[a];}

int max=t[0];

for(int i=1; i<10; i++){
    if(t[i]>max)
        max=t[i];}

cout<<"najwieksza to: "<<max<<endl;

return 0;
}
