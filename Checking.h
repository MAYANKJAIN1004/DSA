#pragma once
#include<iostream>
#include"Account.h"

class Checking : public Account{
private:
    float m_MinimumBalance;
protected:
public:
    using Account::Account;
    Checking(const std::string &name,float balance, float minbalance);

    ~Checking();
    void Withdrow(float amount) override;
    float GetMinBalance() const;
};