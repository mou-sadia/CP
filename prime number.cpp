#include <iostream>
using namespace std;
int main (){
int n;
cin >>n;
int result=0;
for(int i=2;i<=n-1;i++)
    {

    if(n%i==0)
{
    result=1;}


  else if (result==0){
    cout << " prime"<<endl;
}
else {
    cout << "not prime"<<endl;
}
}
}3



