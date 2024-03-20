#ifndef BANK_H
#define BANK_H

#include<iostream>
#include<cstring>

enum accountType {SAVINGACC,CURRENTACC};

class bank
{
    char *bankholdername;
    int accoutno;
    double accountBal;
    enum accountType accType;
    double amtwithdraw;

    static int count;

public:

    bank();
    bank(char*,int,double,accountType,double);
    ~bank();
    void SavingAccount(double);
    void currentAccount(double);




    friend std::ostream& operator<<(std::ostream& os,bank &bobj);
    
    friend std::istream& operator>>(std::istream& is,bank &bobj);

};



#endif // BANK_H
