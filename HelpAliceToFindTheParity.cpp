#include<iostream>
using namespace std;

int main() {
    long long L,R;
    cin>>L>>R;
	

    long long odds=(R+1)/2;
    long long odds_2 = (L)/2;
    long long count=odds-odds_2;

    if(count%2==0) 
	{cout<<"even"<<endl;} 
	else 
	{cout<<"odd"<<endl;}
      return 0;}
