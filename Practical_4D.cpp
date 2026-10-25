#include <iostream>
using namespace std;

int main()
{
    int a[100], unique[100];
    int n, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        bool found = false;

        for(int j = 0; j < count; j++)
        {
            if(a[i] == unique[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            unique[count] = a[i];
            count++;
        }
    }

    cout << "Array after removing duplicates:\n";

    for(int i = 0; i < count; i++)
    {
        cout << unique[i] << " ";
    }

    return 0;
}