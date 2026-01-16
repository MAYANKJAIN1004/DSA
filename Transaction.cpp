#include"Transaction.h"
#include<iostream>

void Transact(Account *pAccount){
    cout<<"InSide Transaction!\n";
    cout<<"Initial Balance : "<<pAccount->GetBalance()<<endl;
    pAccount->Deposit(300);
    pAccount->AccumulateInterest();
    pAccount->Withdrow(200);
    cout<<"Interest Rate : "<<pAccount->GetInterestRate()<<endl;
    cout<<"Final Balance : "<<pAccount->GetBalance()<<endl;
}