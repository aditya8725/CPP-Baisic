#include "inventory.h"

int main()
{

    std::cout << "Test Case 1:" << std::endl;
    Inventory iobj;
    try
    {
        iobj.saleProduct(5);
        iobj.saleProduct(4);
        iobj.purchaseProduct(10);
        iobj.saleProduct(25);
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\nTest Case 2:" << std::endl;
    Inventory iobj2("Sample", 50, 100);
    try
    {
        iobj2.purchaseProduct(10);
        iobj2.saleProduct(45);
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\nTest Case 3:" << std::endl;
    Inventory iarr[3] = {
        {"Household", 100, 50111},
        {"Electronic", 500, 50112},
        {"Sports", 300, 50113}};
    try
    {
        Inventory::find(iarr, 3, 50112);
        Inventory::find(iarr, 3, 50118);
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Display shopping products
    Inventory::displayShoppingProducts(iarr, 3);

    return 0;
}
