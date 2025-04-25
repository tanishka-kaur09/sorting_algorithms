#include<iostream>
using namespace std;

int main()
{
    int a[6]={2,1,1,5,3,7};
    int n=6;
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
                swap(a[j],a[j-1]);
            else
                break;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

//increaing order but from last
// int main()
// {
//     int a[6]={2,1,1,5,3,7};
//     int n=6;
//     for(int i=n-2;i>=0;i--)
//     {
//         for(int j=i;j<n;j++)
//         {
//             if(a[j]>a[j+1])
//                 swap(a[j],a[j+1]);
//             else
//                 break;
//         }
//     }
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
// }

//decreasing order
// int main()
// {
//     int a[6]={2,1,1,5,3,7};
//     int n=6;
//     for(int i=1;i<n;i++)
//     {
//         for(int j=i;j>=0;j--)
//         {
//             if(a[j]>a[j-1])
//                 swap(a[j],a[j-1]);
//             else
//                 break;
//         }
//     }
//     for(int i=0;i<n;i++)
//          cout<<a[i]<<" ";
// }