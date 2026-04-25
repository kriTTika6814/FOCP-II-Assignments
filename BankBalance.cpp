#include <iostream>
using namespace std;
class Bank {
private:
int userIDs[100];
int balances[100];
int userCount;

public:
Bank() {
userCount = 0;}
bool CREATE(int X, int Y) 
{for(int i=0; i<userCount; i++) 
    {if(userIDs[i]==X) 
        {balances[i]+=Y;
        return false;}}
    userIDs[userCount]=X;
    balances[userCount]=Y;
    userCount++;
    return true;}

bool DEBIT(int X, int Y) 
{for(int i=0; i<userCount; i++) 
    {if(userIDs[i]==X) 
        {if (balances[i]>=Y) 
            {balances[i]-=Y;
                return true;}
                return false;}}
        return false;}

bool CREDIT(int X, int Y) 
{for (int i=0; i<userCount; i++) 
    {if(userIDs[i]==X) 
        {balances[i]+=Y;
            return true;}}
        return false;}

int BALANCE(int X) 
{for(int i=0; i<userCount; i++) 
    {if(userIDs[i]==X) 
        {return balances[i];}}
        return -1;}};

int main() 
{Bank b1;
cout<<"Create User 101 with 500:"<<(b1.CREATE(101,500)?"true":"false")<<endl;
cout<<"Create User 101 (add 200):"<<(b1.CREATE(101,200)?"true":"false")<<endl;
cout<<"Balance of 101:"<<b1.BALANCE(101)<<endl;
cout<<"Debit 300 from 101:"<<(b1.DEBIT(101,300)?"true":"false")<<endl;
cout<<"Credit 100 to 101:"<<(b1.CREDIT(101,100)?"true":"false")<<endl;
cout<<"Final Balance of 101:"<<b1.BALANCE(101)<<endl;
cout<<"Balance of unknown user 102:"<<b1.BALANCE(102)<<endl;
return 0;}
