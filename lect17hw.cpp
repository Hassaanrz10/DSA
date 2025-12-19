//Smallest positive integer
// class Solution {
//   public:
//     int missingNumber(vector<int> &arr) {
//         // code here
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//         while (arr[i]>=1 && arr[i]<=n && arr[arr[i]-1]!=arr[i]){
//         int temp = arr[i];
//                 arr[i] = arr[temp - 1];
//                 arr[temp - 1] = temp;
            
//         }
//     }
//         for(int i=0;i<n;i++){
//             if(arr[i]!=i+1){
//             return i+1;
//         }
//         }
//         return n+1;     
//     }
// };

//Move allnegetive elements to end
// class Solution {
//   public:
//     void segregateElements(vector<int>& arr) {
//         // Your code goes here
//         int n=arr.size();
//         int temp[n];
//         int idx=0;
        
//         //positive nos.
//         for(int i=0;i<n;i++){
//             if(arr[i]>=0){
//                 temp[idx++]=arr[i];
//             }
//         }
//         //negetive
//         for(int i=0;i<n;i++){
//             if( arr[i]<0){
//                 temp[idx++]=arr[i];
//             }
//         }
//         //replace array
//         for(int i=0;i<n;i++){
//             arr[ i]=temp[i];
//         }
//     }
// };


//Number of occurrence
// class Solution {
//   public:
//     int countFreq(vector<int>& arr, int target) {
//         // code here
//         int tar=0;
//         int n=arr.size();
//         for(int i=0;i<n;i++){
           
//             if(target==arr[i]){
//             tar++;
//             }
            
//         }
//         return tar;
//     }
// };



//Count number of elements between two given elements in array
// class Solution {
//   public:
//     int getCount(vector<int> &arr, int num1, int num2) {
//         // Your code goes here.
//         int right=-1,left=-1;
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//             if(arr[i]==num1){
//                 left =i;
//                 break;
//             }
//         }
//         for(int i=n-1;i>=0;i--){
//             if(arr[i]==num2){
//                 right =i;
//                 break;
//             }
//         }
//         if(left==-1 || right==-1 || left>=right){
//             return 0;
        
//         }
//         return right-left-1;
        
        
//     }
// };




//First Repeating Element
// class Solution {
//   public:
//     int firstRepeated(vector<int> &arr) {
//         // code here
//         int n=arr.size();
        
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//               if(arr[i]==arr[j]){
//                return i+1;
//            } 
//         }
//         }
//         return -1;
//     }
// };




//1748. Sum of Unique Elements
// class Solution {
// public:
//     int sumOfUnique(vector<int>& nums) {
//         int sum=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int count =0;
//             for(int j=0;j<n;j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }
//             }
//             if(count==1){
//                 sum+=nums[i];
//             }
//         }
//         return sum;
//     }
// };

