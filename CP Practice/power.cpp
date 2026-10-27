#include<iostream>
using namespace std;
int power(int x,int y)
{
   int result = 1;
   for (int i=1;i<=y;i++){
        result*=x; //ekhane x ==i jokhon hbe tokhon y bare result sthe gun hbe
   }
   return result;
}
int main (){
int x,y;
cin>>x;
cin>>y;
cout << x <<"^"<<y <<"="<<power(x,y)<<endl;
}
