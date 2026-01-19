#include"Checking.h"

Checking::Checking(const std::string &name,float balance,float minbalance) :
    m_MinimumBalance(minbalance),Account(name,balance){
        cout<<"InSide Checking::Checking\n";
}

Checking::~Checking(){
    cout<<"InSide Checking::~Checking\n";
}

void Checking::Withdrow(float amount){
    cout<<"InSide Checking::Withdrow\n";// and amount = "<<amount<<" and Balance = "<<m_Balance<<endl;
    if((m_Balance-amount) > m_MinimumBalance)
        Account::Withdrow(amount);
    else
        cout<<"InValid Amount\n";

}

float Checking::GetMinBalance() const{
    return m_MinimumBalance;
}