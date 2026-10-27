#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin >>a;
cin>>b;
cin>>c;
if (a+b>c && b+c>a && c+a>b){
    cout <<"triangle"<<endl;

}
else {
    cout << "not triangle"<<endl;
}
return 0;
}
