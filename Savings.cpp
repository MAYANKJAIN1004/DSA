#include"Savings.h"
#include<iostream>

Savings::Savings(const std::string &name,float balance,float rate):Account(name,balance),m_Rate(rate){
    cout<<"InSide Savings::Savings!\n";
}

Savings::~Savings(){
    cout<<"InSide Savings::~Savings!\n";
}

float Savings::GetInterestRate()const{
    return m_Rate;
}

void Savings::AccumulateInterest(){
    m_Balance += (m_Balance*m_Rate);
}