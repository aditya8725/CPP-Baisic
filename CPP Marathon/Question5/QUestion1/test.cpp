// #include <iostream>
// #include <stdexcept>

// class Order {
// private:
//     int order_id;
//     double order_value;
//     double discount;
//     enum class OrderType { MARKET, LIMIT, STOP };
//     static int count;

// public:
//     // Default constructor
//     Order() : order_id(0), order_value(0.0), discount(0.0) {
//         count++;
//     }

//     // Parametrized constructor
//     Order(int id, double value, double disc) : order_id(id), order_value(value), discount(disc) {
//         count++;
//     }

//     // Display function
//     void display() {
//         std::cout << "Order ID: " << order_id << ", Order Value: " << order_value << ", Discount: " << discount << std::endl;
//     }

//     // Getter and setter functions
//     int getOrderID() const {
//         return order_id;
//     }

//     void setOrderID(int id) {
//         order_id = id;
//     }

//     double getOrderValue() const {
//         return order_value;
//     }

//     void setOrderValue(double value) {
//         order_value = value;
//     }

//     double getDiscount() const {
//         return discount;
//     }

//     void setDiscount(double disc) {
//         discount = disc;
//     }

//     // Static function to display number of orders placed
//     static int getCount() {
//         return count;
//     }

//     // Static function to find order with highest discount
//     static Order findHighestDiscount(Order orders[], int size) {
//         if (size <= 0)
//             throw std::invalid_argument("Invalid size for array");
        
//         Order highestDiscountOrder;
//         double maxDiscount = 0.0;

//         for (int i = 0; i < size; ++i) {
//             if (orders[i].getDiscount() > maxDiscount) {
//                 maxDiscount = orders[i].getDiscount();
//                 highestDiscountOrder = orders[i];
//             }
//         }

//         return highestDiscountOrder;
//     }
// };

// int Order::count = 0;

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



// create a class Order
// with data members:
//     order_id integer;
//     order_value double;
//     discount double; 
//     enum Ordertype {MARKET,LIMIT,STOP};
//     static int count;

//     member function:
//     1)default constructor;
//     2)parametriszed constructor
//     3)display
//     4)get and set function
//     5)static function to display number of orders placed.

// client code:
// ->create an array of 3 order objects.initialize this with data.
// ->write a logic to find order with highest discount.
// ->display order type and order value based on order id. take order it from user. handle approriate excption if order not found.
// ->display average discount.
// ->display number of order placed

code should be implemented in 3 different files order.h,order.cpp,main.cpp