// Linear Search 
#include <iostream>
using namespace std;
int LSR(int a[],int size, int target){
    for(int i = 0; i< size; i++){
        if(a[i] == target)
        return i;
    }
    return -1;
}
int main() {
    int n;
    cout<<"Enter number of Elements : ";
    cin >> n;
    
    int a[n];
    cout << "Enter "<< n << " elements :\n ";
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int target;
    cout << "Enter Element to Search  : ";
    cin >> target;
    
    int result = LSR(a,n,target);
    if(result != -1)
    cout << "Element found at index : "<< result <<endl;
    else
    cout << "Element not found : "<<endl;


    return 0;
}