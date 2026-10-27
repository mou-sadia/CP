#include <iostream>
using namespace std;
int sumnutral (int n){
int sum=0;//inital sum ke 0 dhore
for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum ; //int ,bool,sob a return type ache kintu bool a return type nai ;
}
int main (){
int n;
cin>>n;
cout <<" nautral number is "<< sumnutral(n)<<endl;
return 0;
}

