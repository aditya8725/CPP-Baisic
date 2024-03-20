#include "inventory.h"
#include <stdexcept>

// Constructors
Inventory::Inventory() : balance_stock(30)
{
    if (balance_stock < 20)
        balance_stock = 20;
}

Inventory::Inventory(std::string description, int stock, int code)
    : description_of_product(description), balance_stock(stock), productcode(code)
{
    if (balance_stock < 20)
        balance_stock = 20;
}

// Member Functions
void Inventory::purchaseProduct(int quantity)
{
    balance_stock += quantity;
    std::cout << "After purchase stock: " << balance_stock << std::endl;
}

void Inventory::saleProduct(int quantity)
{
    if (balance_stock - quantity < 20)
    {
        throw std::runtime_error("Low stock level");
    }
    else
    {
        balance_stock -= quantity;
        std::cout << "After sale stock: " << balance_stock << std::endl;
    }
}

void Inventory::find(Inventory arr[], int size, int productCode)
{
    bool found = false;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i].productcode == productCode)
        {
            found = true;
            std::cout << "Product found: " << arr[i].description_of_product << std::endl;
            break;
        }
    }
    if (!found)
        throw std::runtime_error("Product not found");
}

void Inventory::displayShoppingProducts(Inventory arr[], int size)
{
    std::cout << "Shopping Products:" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i].productcode % 2 == 0)
        {
            std::cout << "Description: " << arr[i].description_of_product << ", Stock: " << arr[i].balance_stock << std::endl;
        }
    }
}

