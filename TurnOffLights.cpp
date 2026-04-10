#include <iostream>
using namespace std;
bool search(int n, int k, int L, string &s) {
    int count=0;
    for (int i=0; i<n;) 
	{if(s[i]=='1') 
	    {count++;    
         i+=L;} 
	else
	{i++;}}
    return count<=k;}

int main() 
{int n,k;
 string s;
 cin>>n>>k>>s;
 int low=1, high=n, ans=n;

while (low<=high) 
{int mid=(low+high)/2;
if (search(n,k,mid,s)) 
    {ans=mid;      
    high=mid-1;} 
else 
    {low=mid+1;}}
cout<<ans<<endl;
return 0;}
