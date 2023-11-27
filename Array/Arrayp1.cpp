// Problem -=> Given an array a[] of size n. for every i from 0 to n-1 output max(a[0],arr[i],..., arr[i])
// Example [1,0,5,4,6,8] output [1,1,5,5,6,8]
#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int mxv = -999999;
    for (int i = 0; i < n; i++)
    {
        mxv = max(arr[i], mxv);
        cout << mxv << " ";
    }
}

int main()
{
    int n;

    cout << "Enter the size of the array::" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter array element with size " << n << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    solve(arr, n);

    return 0;
}