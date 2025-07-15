#include<iostream>
using namespace std;
int main()
{
   // char name;
   // for(name='a';name<='z';name=name+1)
   // {
   //  cout<<name<<" ";
   // }


   // int n,i;
   // cout<<"Enter the number: ";
   // cin>>n;

   // for(i=n;i>=1;i=i-1)
   // {
   //    cout<<i<<" ";
   // }

   //Program for mltiplication table
   // int n,i;
   // cout<<"Enter the number for multiplication table: ";
   // cin>>n;

   // for(i=1;i<=10;i=i+1)
   // {
   //    cout<<n<<"*"<<i<<"="<<n*i<<endl;
   // }

   //Program for calculating the power of a number
   // int n,pow,i,num;
   // cout<<"Enter the number: ";
   // cin>>n;
   // cout<<"Enter the power: ";
   // cin>>pow;

   // num = n;
   // for(i=1;i<pow;i=i+1)
   // {
   //    num=num*n;

   // } 
   // cout<<num;


   //factorial of a number
   // int n,fact=1,i;
   // cout<<"Enter the number :";
   // cin>>n;

   // for(i=1;i<=n;i=i+1)
   // {
   //    fact=fact*i;
   // }

   // cout<<fact;



   ///programto check a number is prime or not
//    int n,i;
//    cout<<"Enter your number :";
//    cin>>n;

//    if(n<2)
//    {
//       cout<<"Not a prime  Number ";
//       return 0;
//    }
//    else{
//       for(i=2;i<n;i=i+1)
//       {
//          if(n%2==0)
//          {
//             cout<<"Not a prime number";
//             return 0;
//          }

//       }
//       cout<<"Prime Number";
//       return 0;
//    }
// }

//program for fibonnaci series
 int last, pre, curr ;
  last  = 0;
  pre = 1;
  cout  << last << " " << pre << " ";
  for (int i  = 0 ;i <=6; i++ ) {
    curr = last + pre;
    last = pre ;
    pre = curr;
    cout << curr <<" ";
  }
}

