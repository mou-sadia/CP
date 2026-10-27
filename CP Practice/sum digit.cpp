#include <iostream>
using namespace std;
int sum(int b){
int sum=0;
for(int i=0;i<b;i++){
    sum+=b;
}
return sum;
}
int main (){
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>i;
    }

 cout << sum(b)<<endl;

}
