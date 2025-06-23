#include <iostream>
using namespace std;


int mul(int m , int n){
    if(m==0 || n==0){
        return 0;
    }else{
        return(m + mul(m,n-1));
    }
}
int main() {
int a,b,c;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter Second number: ";
cin>>b;
cout<<"Enter Third number: ";
cin>>c;

    cout << mul(mul(a,b),c);

    return 0;
}