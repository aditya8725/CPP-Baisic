#include "bank.h"
#include<iostream>

int bank::count=0;
bank::bank()
{
    bankholdername = new char[2];
    strcpy(bankholdername,"");
    accoutno=count++;
    accountBal=50000;
}

bank::bank(char * bhna, int ano, double accbal, enum accountType atype, double amtwit)
{
    bankholdername=new char[strlen(bhna)+1];
    strcpy(bankholdername,bhna);
    // accoutno = ano;
    accoutno=count++;
    accountBal=accbal;
      amtwithdraw=amtwit;
      accType=atype;
}


bank::~bank()
{
    delete bankholdername;
}

void bank::SavingAccount(double amtwithdraw)
{
    if(accountBal>1000)
    {
    accountBal=accountBal-amtwithdraw;
    std::cout<<"Saving Balance : "<<accountBal;
    }
    else
    {
        throw std::runtime_error("\nSaving Balance is low...");
    }

}

void bank::currentAccount(double withdraw)
{
    if(accountBal>5000)
    {
        accountBal=accountBal-withdraw;
        std::cout<<"\nCurrent Balance : "<<accountBal;
    }
    throw std::runtime_error("\nTry Again..");

}


std::istream &operator>>(std::istream &is, bank &bobj)
{
    std::cout<<"Enter the account holder Name: ";
    is>>bobj.bankholdername;
    // std::cout<<"Enter the account no: ";
    // is>>bobj.accountBal;
    std::cout<<"Enter the account bal: ";
    is>>bobj.accountBal;
    std::cout<<"Amount to withdraw: ";
    is>>bobj.amtwithdraw;

    std::cout<<"Enter the account type (0 for Saving and 1 for current): ";
    int acctypechoice;
    is>>acctypechoice;
    switch (acctypechoice)
    {
    case 0:
        bobj.accType=SAVINGACC;
        break;
    case 1:
        bobj.accType=CURRENTACC;
        break;
    
    default:
        std::cout<<"Invalid Account type";
        break;
    }

}

std::ostream &operator<<(std::ostream &os, bank &bobj)
{
    os<<"Account holder Name: "<<bobj.bankholdername;
    os<<"\nAccount no: "<<bobj.accoutno;
    os<<"\nAccount bal: "<<bobj.accountBal;
   
    switch (bobj.accType)
    {
    case 0:

        bobj.SavingAccount(bobj.amtwithdraw);
        break;

    case 1:
        bobj.currentAccount(bobj.amtwithdraw);
        break;
    
    default:
        break;
    }

    // if(bobj.accType == SAVINGACC){
    //     bobj.SavingAccount(bobj.amtwithdraw);
    // }
    // else{
    //     bobj.currentAccount(bobj.amtwithdraw);
    // }
    
    
    return os;
}

