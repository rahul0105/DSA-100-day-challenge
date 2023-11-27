// Reapetedly swap two adjacent elements if they are in Wrong order.
#include <bits/stdc++.h>

using namespace std;

void BubbleSort(int arr[], int n)
{

    int counter = 1;
    while (counter < n)
    { // to sort the array by bubble sort it take n-1 iteration
        for (int i = 0; i < n - counter; i++)
        { // to check small element we will check till n-ith iteration because after every itearion n-i element will be sorted
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
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

    cout << "Array element before sorting " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    BubbleSort(arr, n);
    cout << "\nArray element after sorting " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}