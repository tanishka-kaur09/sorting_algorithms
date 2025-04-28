#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0,max=0;
    int index;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        sum+=a[i][j];
        if(sum>max)
        {
            max=sum;
            index=i;
        }
    }
    cout<<index;
}