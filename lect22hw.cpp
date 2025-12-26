//1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[1000];
    cout<<"Enter the array in decreasing order";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key";
    cin>>key;
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
            
            else if (key<arr[mid]){
            
                end=mid-1;
            }
             else{
            start=mid+1;
             }
    }
           
            
        
    cout<<start;
    }
   
//Search Insert Position leetcode
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

    int n;
    
    
    n=nums.size();
   
 
    
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(nums[mid]==target){
            return mid;
            break;
        }
            
            else if (target<nums[mid]){
            
                end=mid-1;
            }
             else{
            start=mid+1;
             }
    }
           
            
        
    return start;
    }
   

    
};