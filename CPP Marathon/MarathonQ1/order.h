#ifndef ORDER_H
#define ORDER_H

#include <iostream>

enum Ordertype {MARKET,LIMIT,STOP};

class Order
{

    int order_id;
    double order_value;
    double discount;

    enum Ordertype otype;
    static int count;

    public:
    Order();
    Order(int,double,double,Ordertype);
    
    void display();

    

    double orderValue() const;
    void setOrderValue(double orderValue);

    double getDiscount() const;
    void setDiscount(double discount_);

    static int getCount();

    int orderId() const;
    void setOrderId(int orderId)

};

#endif // ORDER_H
