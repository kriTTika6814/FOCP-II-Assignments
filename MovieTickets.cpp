#include <iostream>
using namespace std;

class MovieTicket {
private:
int bookCustomer[100];
int bookMovie[100];
int bookingCount;
int movieIDs[100];
int ticketsLeft[100];
int movieCount;

int getMovieIndex(int Y) 
{for (int i=0; i<movieCount; i++) 
    {if (movieIDs[i]==Y)
        return i;}
        movieIDs[movieCount]=Y;
        ticketsLeft[movieCount]=100;
        return movieCount++;}

public:
    MovieTicket() 
    {bookingCount = 0;
        movieCount = 0;}

    bool BOOK(int X, int Y) 
    {if(IS_BOOKED(X, Y))
        return false;

    int Id = getMovieIndex(Y);
    if (ticketsLeft[Id]<=0)
        return false;

    bookCustomer[bookingCount]=X;
    bookMovie[bookingCount]=Y;
    bookingCount++;
    ticketsLeft[Id]--;
    return true;}

    bool CANCEL(int X, int Y) 
    {for(int i=0; i<bookingCount;i++) 
        {if(bookCustomer[i]==X && bookMovie[i]==Y) 
            {bookCustomer[i]=bookCustomer[bookingCount-1];
                bookMovie[i]=bookMovie[bookingCount-1];
                bookingCount--;

                int Id=getMovieIndex(Y);
                ticketsLeft[Id]++;
                return true;}}
        return false;}

    bool IS_BOOKED(int X, int Y) 
    {for (int i=0; i<bookingCount; i++) 
        {if (bookCustomer[i]==X && bookMovie[i]==Y)
            return true;}
        return false;}

    int AVAILABLE_TICKETS(int Y) 
    {for (int i=0; i<movieCount; i++) 
        {if(movieIDs[i]==Y)
            return ticketsLeft[i];}
        return 100;}};

int main() 
{MovieTicket m1;
cout<<"Booking 101 for Movie 5:"<<(m1.BOOK(101, 5)?"true":"false")<<endl;
cout<<"Available tickets for Movie 5:"<< m1.AVAILABLE_TICKETS(5)<<endl;
cout<<"Is 101 booked for Movie 5"<< (m1.IS_BOOKED(101, 5)?"true":"false")<<endl;
cout<<"Canceling 101 for Movie 5:"<< (m1.CANCEL(101, 5)?"true":"false")<<endl;
cout<<"Available tickets for Movie 5 after cancel:"<< m1.AVAILABLE_TICKETS(5)<<endl;
return 0;}
