#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>

class Inventory {
private:
    std::string description_of_product;
    int balance_stock;
    int productcode;

public:
    enum ProductType { Accessories, Shopping };

    // Constructors
    Inventory();
    Inventory(std::string description, int stock, int code);

    // Member Functions
    void purchaseProduct(int quantity);
    void saleProduct(int quantity);
    static void find(Inventory arr[], int size, int productCode);
    static void displayShoppingProducts(Inventory arr[], int size);
};

#endif // INVENTORY_H
