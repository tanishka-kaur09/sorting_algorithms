//time complexity=O(n^2)
#include<iostream>
using namespace std;

// int main()
// {
//     int a[6]={10,8,2,3,1,4};
//     int n=sizeof(a)/sizeof(a[0]);
//     int swapped=0;
//     for(int i=n-1;i>0;i--)
//     {
//         for(int j=0;j<i;j++)
//         {
//             if(a[j]>a[j+1])
//                 {
//                     swap(a[j],a[j+1]);
//                     swapped=1;
//                 }
//         }
//         if(swapped==0)
//             break;
//         swapped=0;
//     }
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
// }

// increasing order but bubbles from last
int main()
{
    int a[6]={10,8,2,3,1,4};
    int n=6;
    int swapped=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
                {
                    swap(a[j],a[j-1]);
                    swapped=1;
                }
        }    
        if(swapped==0)
            break;
        swapped=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


//decreasing order (bubbles from start)
// int main()
// {
//     int a[6]={10,8,2,3,1,4};
//     int n=6;
//     int swapped=0;
//     for(int i=n-1;i>0;i--)
//     {
//         for(int j=0;j<i;j++)
//         {
//             if(a[j]<a[j+1])
//             {
//                 swapped=1;
//                 swap(a[j],a[j+1]);
//             }
//         }
//         if(swapped==0)
//             break;
//         swapped=0;
//     }
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
// }

//decreasing order (bubbles from end)
// int main()
// {
//     int a[6]={10,8,2,3,1,4};
//     int n=6;
//     int swapped=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n-1;j>i;j--)
//         {
//             if(a[j]>a[j-1])
//             {
//                 swapped=1;
//                 swap(a[j],a[j-1]);
//             }
//         }
//         if(swapped==0)
//             break;
//         swapped=0;
//     }
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
// }
