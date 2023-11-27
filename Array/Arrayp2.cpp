// No of subaaray with n elemnt = n(n+1)/2
// NO OF SUBSEQUENCXE WITH n element = 2^n
//  Sum of all subaaray
// problem => Given an array a[] of size n.Output sum of each subaaray of the given array
#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
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