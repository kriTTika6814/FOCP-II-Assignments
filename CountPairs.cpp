#include <iostream>
using namespace std;
int main()
{int T;
 cin>>T;
 while(T--)
   {int n;
    cin>>n;
    int count=0;
    int temp=n;
    for(int i=2;i<=temp;i++)
        {if(temp%i==0)
            {count++;  

    while(temp%i==0)
        {temp=temp/i;}}}

int ans=1;
for(int i=1;i<=count; i++)
    {ans =ans*2;}

cout<<ans<<endl;}
return 0;}
