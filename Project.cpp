#include<iostream>
#include"Account.h"
#include"Savings.h"
#include"Checking.h"
#include"Transaction.h"

using namespace std;

int main()
{
    cout<<"Inside Main!\n";

    Checking chk ("Mayank Jain",1000,100);
    //Savings sav ("Mayank Jain",1000,10.0f);
    try{
        //Transact(sav);
        Transact(chk);
    }catch(exception &ex){
        cout<<"Exception : "<<ex.what()<<endl;
    }
    
    //cout<<"Min Balance is : "<<chk.GetMinBalance()<<endl;

/*
    Account *acc = new Savings("Mayank Jain",1000,10.0f);
    //acc->SizeOfAccount();
    //cout<<"Size of Pointer : "<<sizeof(acc)<<endl;
    //cout<<"Size Of Account Class : "<<sizeof(Account)<<endl;
    delete acc;

    Savings sav("Mayank",1000,10.0f);
    Transact(&sav);
    Checking chk("Mayank Jain",1000);
    cout<<"chk Balance : "<<chk.GetBalance()<<endl;
    chk.Withdrow(500);
    cout<<"chk Balance : "<<chk.GetBalance()<<endl;
    Savings sav("Mayank Jain",1000,10.0);
    cout<<"sav Name : "<<sav.GetName()<<endl;
    cout<<"sav No : " <<sav.GetAccountNo()<<endl;
    cout<<"sav Balance : "<<sav.GetBalance()<<endl;
    sav.Deposit(5000);
    cout<<"sav Balance : "<<sav.GetBalance()<<endl;
    sav.Withdrow(1000);
    cout<<"sav Balance : "<<sav.GetBalance()<<endl;
    sav.AccumulateInterest();
    cout<<"Interest Rate : "<<sav.GetInterestRate()<<endl;
    cout<<"AccumulateInterest : "<<sav.GetBalance()<<endl;

    Account acc("Mayank Jain",1000);

    cout<<"Acc Name : "<<acc.GetName()<<endl;
    cout<<"Acc No : " <<acc.GetAccountNo()<<endl;
    cout<<"Acc Balance : "<<acc.GetBalance()<<endl;

    Account acc1("Manshi Jain",2000);
    cout<<"Acc1 Name : "<<acc1.GetName()<<endl;
    cout<<"Acc1 No : " <<acc1.GetAccountNo()<<endl;
    cout<<"Acc1 Balance : "<<acc1.GetBalance()<<endl;

    acc.Deposit(500);
    acc1.Deposit(500);

    cout<<"Acc1 Balance : "<<acc1.GetBalance()<<endl;
    cout<<"Acc Balance : "<<acc.GetBalance()<<endl;

    acc1.Withdrow(1000);
    acc.Withdrow(1000);

    cout<<"Acc1 Balance : "<<acc1.GetBalance()<<endl;
    cout<<"Acc Balance : "<<acc.GetBalance()<<endl;
*/
    cout<<"Main - Exit!\n";
    return 0;
}