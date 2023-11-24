#include <bits/stdc++.h>

using namespace std;

void linaerSearch(int arr[],int n,int ele){
 int flag=0;
 for(int i=0;i<n;i++){
    if(arr[i]==ele){
        cout<<"Element found at array index:: "<<i<<endl;
        flag=1;
        break;
    }
 }
 if(!flag){
    cout<<"Element not found"<<endl;
 }
}

int main(){
    
    int n;

    cout<<"Enter the size of the array::"<<endl;
    cin>>n;

    int arr[n];

cout<<"Enter array element with size "<<n<<endl;
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }

    int ele;
    cout<<"Enter element to find in the array:: "<<endl;
    cin>>ele;

    linaerSearch(arr,n,ele);

    return 0;
}