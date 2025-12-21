//do tis
// from tis 
// 10 4 3 2 8  to 
// 2 3 4 8 10
#include <iostream>
using namespace std;
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of array";
//     cin>>n;
//     cout<<"Enter the elements of array ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         int index=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[index]<arr[j]){
//                 index=j;
//             }
//             swap(arr[i],arr[index]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// selection sort to sort the array of char in ascending order 
int main(){
    char arr[1000];
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]>arr[j]){
                index=j;
            }
           
        }
         swap(arr[i],arr[index]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

