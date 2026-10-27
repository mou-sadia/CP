#include <iostream>
using namespace std;
int gdc(int a,int b){
int GCD=0;
for(int i=0;i<=min(a,b);i++)
    {if(a%i==0,&& b%i==0){
            GCD=i;
        }
    }
    return 0;
}
int main(){
int a;
int b;
cin>>a;
cin>>b;
cout << gcd(a,b)<<endl;
}
