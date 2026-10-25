#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter number of rows in matrix: ";
    cin>>n;
    cout << "Enter number of columns in matrix: ";
    cin>>m;
    int a[n][m], b[n][m];
    cout << "Enter matrix 1:\n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++) cin>>a[i][j];
    }
    cout << "Enter matrix 2:\n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++) cin>>b[i][j];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++) a[i][j]+=b[i][j];
    }
    cout << "The addition of matrix is: \n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}