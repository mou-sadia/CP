#include <iostream>//eita ekta libary fumction jekhane i=input ,o=output
using namespace std;//td use kori jate cin cout somoi std::cout ,cin likhte hoy na ,stander vabe likha sphpj ble
bool odd (int a){ // a name a ekta peramiter nichi jeta true nki false eita boolen vabe dekhbo
if (a&1)//condition
    {
        return true;
    }
    else {
        return false;
    }
}

int main(){
int a;//a ke declar korlm
cin>>a;// input nilm
if (odd(a)){
    cout<< "odd :"<<a<<endl;
}
else{
    cout<< "even :"<<a<<endl;
}
return 0;
}

