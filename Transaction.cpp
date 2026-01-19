#include"Transaction.h"
#include"Checking.h"
#include<iostream>
#include<typeinfo>

void Transact(Account &pAccount){
    cout<<"InSide Transaction!\n";
    cout<<"Initial Balance : "<<pAccount.GetBalance()<<endl;
    pAccount.Deposit(300);
    pAccount.AccumulateInterest();

/*
    if(typeid(*pAccount)==typeid(Checking)){
        Checking *pChecking = static_cast<Checking*>(pAccount);
        cout<<"Min Balance is : "<<pChecking->GetMinBalance()<<endl;
    }
*/
    Checking &pChecking = dynamic_cast<Checking&>(pAccount);
    cout<<"Min Balance is : "<<pChecking.GetMinBalance()<<endl;
    pAccount.Withdrow(200);
    cout<<"Interest Rate : "<<pAccount.GetInterestRate()<<endl;
    cout<<"Final Balance : "<<pAccount.GetBalance()<<endl;
}

void Transact(Account *pAccount){
    cout<<"InSide Transaction!\n";
    cout<<"Initial Balance : "<<pAccount->GetBalance()<<endl;
    pAccount->Deposit(300);
    pAccount->AccumulateInterest();

/*
    if(typeid(*pAccount)==typeid(Checking)){
        Checking *pChecking = static_cast<Checking*>(pAccount);
        cout<<"Min Balance is : "<<pChecking->GetMinBalance()<<endl;
    }
*/
    Checking *pChecking = dynamic_cast<Checking*>(pAccount);
    if(pChecking!=nullptr)
        cout<<"Min Balance is : "<<pChecking->GetMinBalance()<<endl;
    pAccount->Withdrow(200);
    cout<<"Interest Rate : "<<pAccount->GetInterestRate()<<endl;
    cout<<"Final Balance : "<<pAccount->GetBalance()<<endl;
}