#include "Item.cpp"

int main()
{
    Item obj;
    std::string choice;
    int option;
    while (true)
    {
        std::cout << "\nChoice 1 for sell item \nchoice 2 for exit";
        std::cout << "\nEnter Choice = ";
        std::cin >> choice;
        try
        {
            option = stoi(choice);
            if (option < 1 || option > 2)
            {
                throw std::invalid_argument("invalid input");
            }
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
            continue;
        }
        int result;
        if (option != 1 && option != 2)
        {
            std::cout << "Invalid input";
            option = 0;
        }
        if (option == 1)
        {
            int result = obj.sellitem();
            if (result == 0)
            {
                std::cout << "\nBalance is zero";
                return 0;
            }
        }
        else if (option == 2)
        {
            return 0;
        }
    }
}
