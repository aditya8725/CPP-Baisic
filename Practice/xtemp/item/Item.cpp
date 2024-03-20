#include "Item.h"
// Default Constructor
Item::Item() : cashinhand(100)
{
    std::cout << "\n Item() called";
}

// Function for sell items
int Item::sellitem()
{
    if (cashinhand == 0)
        return 0;

    std::cout << "\nEnter Product Type as \n1.Burger \n2.Pizza " << std::endl;
    std::cin >> Product_type;
    if (Product_type == 1 || Product_type == 2)
    {
        switch (Product_type)
        {
        case 1:
            costperitem = 10;
            break;
        case 2:
            costperitem = 20;
            break;
        default:
            std::cout << "\nInvalid input";
            break;
        }
        std::cout << "Enter no of items : ";
        std::cin >> number_of_items;

        // For Postive no
        try
        {
            if (number_of_items < 0)
            {
                throw "Enter positive input ";
            }
        }
        catch (char const *s)
        {
            std::cout << s << std::endl;
        }
        // for low balance
        try
        {
            if (number_of_items * costperitem > cashinhand)
            {
                throw "low balance";
            }
            else
            {
                cashinhand -= (number_of_items * costperitem);
                std::cout << "\nOrder successful";
            }
        }
        catch (char const *str)
        {
            std::cout << str << std::endl;
            int bal = cashinhand;
            int burgercnt = bal / 10;
            int pizzacnt = bal / 20;
            std::cout << "You have " << burgercnt << "burger or " << pizzacnt << " pizza" << std::endl;
            if (cashinhand % 20 != 0)
            {
                pizzacnt = bal / 20;
                bal = bal - (20 * pizzacnt);
                burgercnt = bal / 10;
                std::cout << "else you have " << burgercnt << " burger and " << pizzacnt << " pizza" << std::endl;
            }
        }
    }
    else
    {
        std::cout << "\nInvalid input";
    }
    return 1;
}

// Destructor
Item::~Item()
{
    std::cout << "\n~Item() called";
}