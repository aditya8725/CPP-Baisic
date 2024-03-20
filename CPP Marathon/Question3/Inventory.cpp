#include "Inventory.h"

Inventory::Inventory()
{
    _balance_stock = 21;
}

Inventory::Inventory(int bal)
{
    _balance_stock = bal;
}

Inventory::Inventory(std::string pName, int stock, int pCode)
{
    _description_of_product = pName;
    _balance_stock = stock;
    _productcode = pCode;
}

Inventory::Inventory(std::string pName, int stock, int pCode, _productType ptype)
{
    _description_of_product = pName;
    _balance_stock = stock;
    _productcode = pCode;
    _ptype = ptype;
    
    // if(type == "SHOPPING") _ptype = {SHOPPING};
    // else _ptype = {ACCESSORIES};
}

void Inventory::Purchaseproduct(int q)
{
    _balance_stock+=q;
    std::cout<<"after purchase stock = "<<_balance_stock<<std::endl;
}

void Inventory::Salesproduct(int amt)
{
    if(_balance_stock-amt > 20 ){
        _balance_stock-=amt;
        std::cout<<"after sale stock = "<<_balance_stock<<std::endl;
    }
    else throw std::runtime_error("\nlow stock level");
}
