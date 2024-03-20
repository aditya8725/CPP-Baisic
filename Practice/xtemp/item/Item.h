#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <cstring>

class Item
{
    int Product_type;
    int number_of_items;
    int burger;
    int pizza;
    int cashinhand;
    int costperitem;

public:
    Item();
    ~Item();
    int sellitem();

    int numberOfItems() const { return number_of_items; }
    void setNumberOfItems(int numberOfItems) { number_of_items = numberOfItems; }

    int getCashinhand() const { return cashinhand; }
    void setCashinhand(int cashinhand_) { cashinhand = cashinhand_; }

    int getCostperitem() const { return costperitem; }
    void setCostperitem(int costperitem_) { costperitem = costperitem_; }

    int productType() const { return Product_type; }
    void setProductType(int productType) { Product_type = productType; }
};

#endif // ITEM_H
