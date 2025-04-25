//time complexity=O(n^2)
#include<iostream>
using namespace std;

int main()
{
    int a[6]={10,8,2,3,1,4};
    int n=6;
    int index;
    for(int i=0;i<n;i++)
    {
        index=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[index])
                index=j;
        swap(a[i],a[index]);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

//descending or decreasing order
// int main()
// {
//     int a[6]={10,8,2,3,1,4};
//     int n=6;
//     int index;
//     for(int i=0;i<n;i++)
//     {
//         index=i;
//         for(int j=i+1;j<n;j++)
//             if(a[j]>a[index])
//                 index=j;
//         swap(a[i],a[index]);
//     }
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
// }