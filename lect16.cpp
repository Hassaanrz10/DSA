#include <iostream>
#include <climits>   // <-- for INT_MAX

using namespace std;
int main()
{
   //int arr[5]={1,2,3,4,5}; //array declare
    //for(int i=0;i<5;i++)
    //cout<<arr[i]<<" ";

  


    //int arr[6]={0}; //array declare
    //for(int i=0;i<6;i++)
    //cout<<arr[i]<<" ";


    //int arr[6];
    //for(int i=0;i<6;i++)
    //cin>>arr[i];
    //for(int i=0;i<6;i++)
    //cout<<arr[i]<<" ";2
    

    // int size;
    // cin>>size;
    // int arr[1000];
    // for(int i=0;i<size;i++)
    // cin>>arr[i];
    // for(int i=0;i<size;i++)
    // cout<<arr[i]<<" ";


    int arr[5] = {2,3,1,7,8};
    int ans =INT_MAX;
    //Min value
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout<<ans;
    
    //Max value
    ans=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];

    }
    cout<<ans<<endl;

   return 0;


}