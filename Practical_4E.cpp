#include <iostream>
using namespace std;

int main(){
    int n, t;
    cout << "Enter number of elements in array: ";
    cin>>n;
    int a[n];
    cout << "Enter the sorted array: ";
    for(int i = 0; i<n; i++) cin>>a[i];
    cout << "Enter the target element: ";
    cin>>t;
    int l = 0, r = n-1;
    while(l!=r){
        int mid = l + (r-l)/2;
        if(a[mid]>t) r = mid;
        else if(a[mid]<t) l = mid+1;
        else{
            cout << "The target element is at index " << mid << "\n\n";
            break;
        }
    }
    return 0;
}