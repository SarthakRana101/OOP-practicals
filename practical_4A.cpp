#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in array: ";
    cin>>n;
    int a[n];
    cout << "Enter elements of vector: ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int mn = a[0], mx = a[0];
    for(const auto &x : a){
        mn = min(mn, x);
        mx = max(mx, x);
    }
    cout << "The maximum element is " << mx << endl;
    cout << "The minimum element is " << mn << endl;
    return 0;
}