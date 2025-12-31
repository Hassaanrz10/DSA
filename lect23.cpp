#include <iostream>
using namespace std;
int main(){
    int count,sum,target,ans;
    int arr[1000]
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target ";
    cin>>target;
    
    for(int i=0;i<n;i++){
        for(int j=1;j<arr[n-1];j++){
        if(arr[i]!=j){
            ans=j;
            count++;
        }
        
        }
    }
    if(count==target)
    cout<<ans;
}