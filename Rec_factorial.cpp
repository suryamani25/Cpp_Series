// Factorial of any Number 
#include <iostream>
using namespace std;
int fact(int n){
    if(n<= 1){
        return 1;
    }else{
        return(n*fact(n-1));
    }
}
int main() {
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout << fact(n);
    return 0;
}