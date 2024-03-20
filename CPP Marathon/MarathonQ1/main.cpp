#include<iostream>
#include "order.h"

int main() {
    // Create an array of 3 order objects and initialize them with data
    Order orders[3] = {
        Order(1, 100.0, 10.0),
        Order(2, 200.0, 20.0),
        Order(3, 150.0, 15.0)
    };

    // Find order with highest discount
    Order highestDiscountOrder = Order::findHighestDiscount(orders, 3);
    std::cout << "Order with highest discount: ";
    highestDiscountOrder.display();

    // Display order type and order value based on order id
    int searchID;
    std::cout << "Enter order ID to search: ";
    std::cin >> searchID;
    bool found = false;
    for (int i = 0; i < 3; ++i) {
        if (orders[i].getOrderID() == searchID) {
            std::cout << "Order Type: ";
            orders[i].display();  // Assuming order type is not explicitly stored and displayed
            found = true;
            break;
        }
    }
    if (!found)
        std::cerr << "Order not found!" << std::endl;

    // Display average discount
    double totalDiscount = 0.0;
    for (int i = 0; i < 3; ++i) {
        totalDiscount += orders[i].getDiscount();
    }
    double averageDiscount = totalDiscount / 3;
    std::cout << "Average Discount: " << averageDiscount << std::endl;

    // Display number of orders placed
    std::cout << "Number of orders placed: " << Order::getCount() << std::endl;

    return 0;
}



// int main() {
//     // Create an array of 3 order objects and initialize them with data
//     Order orders[3] = {
//         Order(1, 100.0, 10.0),
//         Order(2, 200.0, 20.0),
//         Order(3, 150.0, 15.0)
//     };

//     // Find order with highest discount
//     Order highestDiscountOrder = Order::findHighestDiscount(orders, 3);
//     std::cout << "Order with highest discount: ";
//     highestDiscountOrder.display();

//     // Display order type and order value based on order id
//     int searchID;
//     std::cout << "Enter order ID to search: ";
//     std::cin >> searchID;
//     bool found = false;
//     for (int i = 0; i < 3; ++i) {
//         if (orders[i].getOrderID() == searchID) {
//             std::cout << "Order Type: ";
//             orders[i].display();  // Assuming order type is not explicitly stored and displayed
//             found = true;
//             break;
//         }
//     }
//     if (!found)
//         std::cerr << "Order not found!" << std::endl;

//     // Display average discount
//     double totalDiscount = 0.0;
//     for (int i = 0; i < 3; ++i) {
//         totalDiscount += orders[i].getDiscount();
//     }
//     double averageDiscount = totalDiscount / 3;
//     std::cout << "Average Discount: " << averageDiscount << std::endl;

//     // Display number of orders placed
//     std::cout << "Number of orders placed: " << Order::getCount() << std::endl;

//     return 0;
// }



create in three different file order.h,order.cpp,main.cpp