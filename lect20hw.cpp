#include <iostream>
using namespace std;
int main(){
    //Use Bubble Sort Algorithm to sort the array of integers in decreasing order.
//     int arr[1000];
//     int n;
//     cout<<"enter the no. of elements in array";
//     cin>>n;
//     cout<<"Enter the array: ";
//     for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
//     for(int i=n-2;i>=0;i--){
//         bool swapped =0;
//         for(int j=0;j<=i;j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=1;
//             }
//         }
//         if(swapped==0){
//             break;
//     }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    


//Bubble Sort Algorithm to sort the array of char in ascending order.
char arr[1000];
int n;
cout<<"Enter the number of elements";
cin>>n;
cout<<"Enter the array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];}
    for(int i=n-2;i>=0;i--){
        int swapped =0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped ==0)
        break;
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    
}

//2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. do this
#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort: smallest element moves to first position
    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for(int j = n - 1; j > i; j--) {
            if(arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

