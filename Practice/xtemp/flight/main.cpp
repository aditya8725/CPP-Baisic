#include "flight.h"
// Function to search flight number
bool search(Flight a[], std::string str)
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i].getFlightNumber() == str)
        {
            return true;
        }
    }
    return false;
}

// Function to find maximun fare
int maxfare(Flight a[])
{
    int maxi = 0;
    int j;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].getFare() > maxi)
        {
            maxi = a[i].getFare();
            j=i;
        }
    }
    return j;
}

int main()
{
    std::string str;
    Flight a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i].feedinfo();
    }

    std::cout<<"Displayying....";
    for (int i = 0; i < 3; i++)
    {
        a[i].showinfo();
    }

    std::cout << "Enter flight no to find : ";
    std::cin >> str;
    if (search(a, str))
    {
        std::cout << "\nFlight is found";
        
    }
    else
    {
        std::cout << "\nFlight not found";
    }

    int x = maxfare(a);
    std::cout << "\nFlight with max fare is : " << a[x].getFlightNumber();
    return 0;
}