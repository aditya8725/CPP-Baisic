#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>

enum _productType{ //enum
    ACCESSORIES,
    SHOPPING
};

class Inventory{
    std::string _description_of_product;
    int _balance_stock;
    int _productcode;
    enum _productType _ptype;

    public:
        Inventory(); //default constr
        Inventory(int);
        Inventory(std::string, int, int);
        Inventory(std::string pName, int stock, int pCode, enum _productType ptype);
        void Purchaseproduct(int q);
        void Salesproduct(int amt);

        int productcode() const { return _productcode; }
        void setProductcode(int productcode) { _productcode = productcode; }

        enum _productType ptype() const { return _ptype; }
        void setPtype(const enum _productType &ptype) { _ptype = ptype; }

        std::string descriptionOfProduct() const { return _description_of_product; }
};

#endif // INVENTORY_H
