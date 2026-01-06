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



1: Find First and Last Position of Element in Sorted Array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int mid,start,end;
        int n=nums.size();
        
        int first=-1;
        int last=-1;
        start=0;
        end=n-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
                start=mid+1;
                else
                end=mid-1;
            
        }
        start=0,end=n-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)
                start=mid+1;
                else
                end=mid-1;
        }
            vector<int>a(2);
            a[0]=first;
            a[1]=last;

            return a;
        }

2: Search Insert Position: https://leetcode.com/problems/search-...
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
};



3: Sqrt(x):
class Solution {
public:
    int mySqrt(int x) {
        
        if(x<2){
        return x;
        }
        int start =0,end=x,mid,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid==x/mid){
                ans=mid;
                break;
            }
            else if(mid<x/mid){
                ans=mid;
                start=mid+1;

            }
            else
            end=mid-1;
        }
        return ans;
    }
};
Cube root of a number

class Solution {
  public:
    int cubeRoot(int x) {
        // code here
        if(x==0){
            return 0;
        }
          if(x<8){
        return 1;
        }
        int start =0,end=x,ans;
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(mid*mid==x/mid){
                ans=mid;
                break;
            }
            else if(mid*mid<x/mid){
                ans=mid;
                start=mid+1;

            }
            else
            end=mid-1;
        }
        return ans;
    }
};
4: Kth Missing Positive Number
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int start=0,end=arr.size()-1,mid,ans=arr.size();
       while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else{
        start=mid+1;
        }
       }
       return ans+k;
    }
};
Count the Zeros
// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int count=0,start=0,end=arr.size()-1,mid,firstzero=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==0){
                firstzero=mid;
                end=mid-1;
            }
            
            
            else{
                start=mid+1;
            }
            
        }
        if(firstzero==-1){
            return 0;
        }
        else {
            return arr.size()-firstzero;
            
        }
        return count;
        
    }
};
Number of occurrence
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int start=0,end=n-1,mid,first=-1,last=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]<target){
                start=mid+1;
                
            }
            else{
                end=mid-1;
            }
        }
            if(first==-1)
            return 0;
            start=0,end=n-1;
            while(start<=end){
            mid=start+(end-start)/2;
              if (arr[mid] == target) {
                last = mid;
                start = mid + 1;   // move right for last
            }
            
            else if(arr[mid]<target){
                start=mid+1;
                
            }
            else{
                end=mid-1;
            }
            
            
        }
        return last-first+1;
        
        }
    
};
