#include<iostream>
using namespace std;
int main()
{
// *
// **
// ***
// ****
 //*****
//    int row,col;
//    for(row=1;row<=5;row=row+1)
//   {
//     for(col=1;col<=row;col=col+1)
//     {
 //        cout<<"* ";

 //    }
//     cout<<endl;
 //   }

// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// int row,col;
// for(row=1;row<=5;row=row+1)
// {
//     for(col=1;col<=row;col=col+1)
//     {
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }


//  1
//  22
//  333
//  4444
//  55555
//  int row,col;
//  for(row=1;row<=10;row=row+1)
//  {
//     for(col=1;col<=row;col=col+1)
//     {
//         cout<<row<<" ";
//     }
//     cout<<endl;
//  }
 


//  1
//  21
//  321
//  4321
//  54321
//  int row,col;
//  for(row=1;row<=5;row=row+1)
//  {
//     for(col=row;col>=1;col=col-1)
//     {
//         cout<<col;
//     }
//  cout<<endl;
// }



// a
// b b 
// c c c
// d d d d 
// e e e e e

// int row,col;
// for(row=1;row<=5;row=row+1)
// {
//     for(col=1;col<=row;col=col+1)
//     {
//         char name = 'a'+row-1;
//         cout<<name<<" ";
//     }
//     cout<<endl;
// }


// 1
// 21
// 321
// 4321
// 54321

int row,col;
for(row=1;row<=5;row=row+1)
{
    for(col=1;col<=5-row;col=col+1)
    {
        cout<<" ";
    }
    for(col=row;col>=1;col=col-1)
    {
        cout<<col;
    }
    cout<<endl;
}

return 0;
}