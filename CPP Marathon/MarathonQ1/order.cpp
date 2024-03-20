#include "order.h"



Order::Order() : order_id(1), order_value(20.0), discount(10.0), otype(Ordertype::MARKET)
{
    count++;
}


Order::Order(int oid, double ov, double dic, Ordertype ot) : order_id(oid), order_value(ov), discount(dic), otype(ot)
{
    count++;
}

void Order::display()
{
    std::cout << "\nOrder ID: " << order_id;
    std::cout << "\nOrder Value: " << order_value;
    std::cout << "\nDiscount: " << discount;

    switch (otype)
    {
    case 0:
        std::cout << "  Market";
        break;
    case 1:
        std::cout << "  Limit";
        break;
    case 2:
        std::cout << "  Stop";
        break;
    default:
        std::cout << "Invalid input !!! ";
    }
}

int Order::orderId() const
{
    return order_id;
}

void Order::setOrderId(int orderId)
{
    order_id = orderId;
}

void Order::getOrderId(int orderId)
{
    order_id = orderId;
}

double Order::orderValue() const
{
    return order_value;
}

void Order::setOrderValue(double orderValue)
{
    order_value = orderValue;
}

double Order::getDiscount() const
{
    return discount;
}

void Order::setDiscount(double discount_)
{
    discount = discount_;
}



int Order::getCount()
{
    return count;
}


 // Static function to find order with highest discount
    static Order findHighestDiscount(Order orders[], int size) {
        if (size <= 0)
            throw std::invalid_argument("Invalid size for array");
        
        Order highestDiscountOrder;
        double maxDiscount = 0.0;

        for (int i = 0; i < size; ++i) {
            if (orders[i].getDiscount() > maxDiscount) {
                maxDiscount = orders[i].getDiscount();
                highestDiscountOrder = orders[i];
            }
        }

        return highestDiscountOrder;
    }