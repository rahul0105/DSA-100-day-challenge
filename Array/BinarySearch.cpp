#include <bits/stdc++.h>

using namespace std;

void binarySearch(int arr[],int n,int ele){
sort(arr,arr+n);
int s=0;
int e=n;
while(s<=e){
    int mid=(s+e)/2;
    if(ele==arr[mid]){
        cout<<"At index :: "<<mid;
        break;
    }else if(arr[mid]>ele){
        e=mid-1;
    }else{
        s=mid+1;
    }
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

    binarySearch(arr,n,ele);

    return 0;
}