#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        int a[n];
        int sum[n];
        int ms[n];
        int x = -100000;
        int y = -100000;
        for(int i=0;i<n;i++)
            {
            cin>>a[i];
            if(i==0)
                {
                sum[i]=a[i];
                ms[i]=a[i];
                }
            else
                {
                sum[i]=sum[i-1]+a[i];
                ms[i]=max(ms[i-1]+a[i],a[i]);
                }
            if(y<ms[i])
                {
                y=ms[i];
                }
            }
        bool flag=0;
        int s = 0;
        for(int i=0;i<n;i++)
            {
            if(a[i]>0)
                {
                flag=1;
                s+=a[i];
                }
             }
        if(flag==1)
            {
            x = s;
            }
        else
            {
            for(int i=0;i<n;i++)
                {
                if(a[i]>x)
                    {
                    x = a[i];
                    }
                 }
             }
        cout<<y<<" "<<x<<endl;
        }
    return 0;
}

