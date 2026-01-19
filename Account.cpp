#include"Account.h"

int Account::s_ANGenerator = 1000;

Account::Account(const std::string &name, float balance):
m_Name(name),m_Balance(balance){
    cout<<"InSide Account::Account()\n";
    m_AccNo = ++s_ANGenerator;
}

Account::~Account(){
    cout<<"InSide Account::~Account()\n";
}

const std::string Account::GetName() const{
    return m_Name;
}

float Account::GetBalance() const{
    return m_Balance;
}

int Account::GetAccountNo() const{
    return m_AccNo;
}

void Account::AccumulateInterest(){
    cout<<"InSide Account::AccumulateInterest()\n";
}
void Account::Withdrow(float amount){
    if(amount<m_Balance)
        m_Balance -=amount;
    else
        cout<<"In-sufficient Balance!\n";
}
void Account::Deposit(float amount){
    m_Balance += amount;
}
float Account::GetInterestRate() const{
    cout<<"InSide Account::GetInterestRate()\t";
    return 0.0f;
}