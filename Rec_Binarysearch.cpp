// Binary Search (find position of an element(target).
#include <iostream>
using namespace std;

int BSR(int arr[], int low, int high , int target){
    if(low > high)
    return -1;
    int mid = (low + high) / 2;
    if(arr[mid] == target)
    return mid;
    else if(arr[mid] > high)
    return BSR(arr,mid + 1,high,target);
    else
    return BSR(arr,low,mid-1,target);
}

int main() {
    int n;
    cout<< "Enter number of Elements in Sorted Array: ";
    cin>>n;
    int arr[n];
    cout<< "Enter "<<n<< " Elements in Sorted Array:\n";
    for(int i =0 ; i<n ; i++){
        cin >> arr[i];
    }
    int target;
    cout<<"Enter the elements to search : ";
    cin >> target;
    
    int result = BSR(arr,0,n-1,target);
    if(result != -1)
    cout<<"Element found at Index : " << result <<endl;
    else
    cout<< "Element not found";

    return 0;
}
