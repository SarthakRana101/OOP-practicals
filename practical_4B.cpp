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
    int sum = 0;
    for(auto &x : a) sum+=x;
    float avg = sum*1.0/n;
    cout << "The sum of elements is " << sum << endl;
    cout << "The average of elements is " << avg << endl;
    return 0;
}