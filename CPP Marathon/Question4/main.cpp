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

    iobj.Salesproduct(5);
    iobj.Salesproduct(4);
    iobj.Purchaseproduct(10);
    iobj.Salesproduct(25);

    Inventory arr[3] = {
        {"Household", 100, 50111},
        {"Electronics", 500, 50112},
        {"Sports", 300, 50113},
    };

    find(arr, 3, 50112); //to find based on product code

    Inventory arr2[3] = {
        {"Household", 100, 50111, SHOPPING},
        {"Electronics", 500, 50112, ACCESSORIES},
        {"Sports", 300, 50113, ACCESSORIES},
    };

    displayAll(arr2, 3, SHOPPING); //to display shopping category
}

