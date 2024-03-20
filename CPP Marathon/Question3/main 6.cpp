#include"Inventory.h"

void find(Inventory arr[], int size, int pCode){
    int flag = 0;
    try{
        for(int i=0; i<size; i++){
            if(pCode == arr[i].productcode()){
                std::cout<<"\nProduct found";
                flag = 1;
                //std::cout<<arr[i].productcode();
            }
        }
        if(flag == 0) throw std::runtime_error("\nProduct not found"); //exception handling
    }
    catch(std::runtime_error &e){
        std::cout<<e.what()<<"\n";
    }
    
}

void displayAll(Inventory arr[], int size, enum _productType pt){

        for(int i=0; i<size; i++){
            if(pt == arr[i].ptype()){
                std::cout<<"\nProduct found";
                std::cout<<arr[i].descriptionOfProduct();
            }
        }
    
}

int main(){

Inventory iobj(30);
try
{
    iobj.Salesproduct(5);
    iobj.Salesproduct(4);
    iobj.Purchaseproduct(10);
    iobj.Salesproduct(25);
}
    catch (const std::runtime_error &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

Inventory iobj2(50);
try
{
        iobj2.Purchaseproduct(10);
        iobj2.Salesproduct(45);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}


    
    Inventory arr[3] = {
        {"Household", 100, 50111},
        {"Electronics", 500, 50112},
        {"Sports", 300, 50113},
    };


    Inventory arr2[3] = {
        {"Household", 100, 50111, SHOPPING},
        {"Electronics", 500, 50112, ACCESSORIES},
        {"Sports", 300, 50113, ACCESSORIES},
    };

    try
    {
        find(arr2, 3, 50112);
        find(arr2, 3, 50118);
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    
    find(arr, 3, 50112);

    displayAll(arr2, 3, SHOPPING);

    return 0;

}





    // std::cout << "Test Case 1:" << std::endl;
    // Inventory iobj;
    // try
    // {
    //     iobj.saleProduct(5);
    //     iobj.saleProduct(4);
    //     iobj.purchaseProduct(10);
    //     iobj.saleProduct(25);
    // }


    // std::cout << "\nTest Case 2:" << std::endl;
    // Inventory iobj2("Sample", 50, 100);
    // try
    // {
    //     iobj2.purchaseProduct(10);
    //     iobj2.saleProduct(45);
    // }
    // catch (const std::runtime_error &e)
    // {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << "\nTest Case 3:" << std::endl;
    // Inventory iarr[3] = {
    //     {"Household", 100, 50111},
    //     {"Electronic", 500, 50112},
    //     {"Sports", 300, 50113}};
    // try
    // {
    //     Inventory::find(iarr, 3, 50112);
    //     Inventory::find(iarr, 3, 50118);
    // }
    // catch (const std::runtime_error &e)
    // {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // // Display shopping products
    // Inventory::displayShoppingProducts(iarr, 3);

    // return 0;