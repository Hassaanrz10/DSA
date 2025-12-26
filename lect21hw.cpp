#include <iostream>
using namespace std;
int main(){
//    //question- 1: Use Insertion Sort Algorithm to sort the array of integers in decreasing order.
//    int arr[1000];
//    int n;
//    int i;
//    cout<<"Enter the size of array";
//    cin>>n;
//    cout<<"Enter the elements of array";
//    for(int i=0;i<n;i++)
//    cin>>arr[i];
//     for(int i=0;i<n;i++){
//         for(int j=i;j>0;j--){
//             if(arr[j]>arr[j-1])
//                 swap(arr[j],arr[j-1]);
//                 else 
//                 break;
            
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;



//2: Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. 

int arr[1000];
   int n;
   int i;
   cout<<"Enter the size of array";
   cin>>n;
   cout<<"Enter the elements of array";
   for(int i=0;i<n;i++)
   cin>>arr[i];
    for(int i=n-2;i>=0;i--){
        for(int j=i;j<n-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                else 
                break;
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

}