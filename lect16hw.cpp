#include <iostream>
using namespace std;

int main(){
  //1
    // int arr[20];
    // int sum=0;

    // cout<<"Enter 20 numbers";
    // for(int i = 0;i<20;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<20;i++){
    //     sum+=arr[i];
    // }
    // cout<<"sum of 20 elements= "<<sum <<endl;

    
    // //2.Avg of elements in an array of size 18
    // int arr[18];
    // int sum=0;
    // float avg;

    // cout<<"Enter 18 elements:\n";
    // for(int i=0; i<18;i++){
    //     cin>>arr[i];
    //     sum+=arr[i];
    // }
    // avg=sum/18.0;

    // cout<<"Average = "<<avg;
    




    // //3.Find the index of a specfic element(print -1 if not found)
    // cout<<"Enter the size of array: ";
    // cin>>n;

    // int arr[n];
    // cout<<"Enter elements:\n";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // cout<<"Enter element to search: ";
    // int key;
    // cin>>key;

    // int index = -1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==key){
    //         index = i;
    //         break;
    //     }
    // }
    // cout<<"Index= "<<index;





    // //4.Strore 'a' to 'z' in char array and print them
    // char arr[26];

    // for(int i=0;i<26;i++){
    //  arr[i]='a'+i;
    // }
    // for(int i=0;i<26;i++){
    //     cout<<arr[i]<<" ";
    // }
    // return 0;





    //5.Find the second largest lement(unique elements,n>3)
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;

    // int arr[n];
    // cout<<"Enter unique elements:\n";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int largest = arr[0],second = arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>largest){
    //         second = largest;
    //         largest= arr[i];
    //     }
    //     else if(arr[i]>second && arr[i] !=largest){
    //         second=arr[i];
    //     }
    // }
    // cout<<"second largest = "<<second;
    // return 0;





    //6.Find the third smallest element(unique elemets,n>3)
    
    int n;
    cin>>n;
    
      
    int arr[1000];
    for(int i=0;i<n;i++)
    cin>>arr[i];

      int first = INT_MAX, second = INT_MAX,third = INT_MAX;

      for(int i = 0;i<n;i++){
        if(arr[i]<first){
          third = second;
          second=first;
          first = arr[i];
        }
        else if (arr[i]<second){
          third = second;
          second=arr[i];
        }
        else if(arr[i]<third){
          third = arr[i];
        }
      }
      cout<<"Third smallest element: "<<third;
      return 0;
    }
