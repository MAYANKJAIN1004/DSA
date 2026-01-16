#include"Checking.h"

/*
Checking::Checking(const std::string &name,float balance) : Account(name,balance){
    cout<<"InSide Checking::Checking\n";
}
*/

Checking::~Checking(){
    cout<<"InSide Checking::~Checking\n";
}

void Checking::Withdrow(float amount){
    cout<<"InSide Checking::Withdrow\n";// and amount = "<<amount<<" and Balance = "<<m_Balance<<endl;
    if((m_Balance-amount) > 100)
        Account::Withdrow(amount);
    else
        cout<<"InValid Amount\n";

}