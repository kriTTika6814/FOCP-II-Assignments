#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{int T; 
 cin>>T;
while (T--) 
{int N;
cin >> N;

vector<int>array(N);
for(int i=0;i<N;i++) 
 {cin>>array[i];}

sort(array.rbegin(), array.rend());

    long long Alex_sum=0;
    long long Bob_sum=0;
    int Alex_last=-1;     
    int Bob_last=-1;     
    
    bool alex_turn = true;

    for (int i=0; i<N; i++) 
    {int x=array[i]; 
    if (alex_turn) 
    {
    if (x!= Alex_last) 
    {Alex_sum+=x;
     Alex_last=x;
     alex_turn = false;}} 
    else 
    {if (x!=Bob_last) 
    {Bob_sum+=x;
     Bob_last=x;
     alex_turn =true;}}}

if (Alex_sum>Bob_sum) 
{cout<<"Alex"<<endl;} 
else 
{cout<<"Bob"<<endl;}}
return 0;}
