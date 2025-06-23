// find n fibonacci number
#include <iostream>
using namespace std;

int f(int n){
    if(n==0 || n==1){
        return n;
    }else{
        return (f(n-1) + f(n-2));
    }
}


int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout << f(n);

    return 0;
}
