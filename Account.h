#pragma once
#include<string>
#include<iostream>
using namespace std;

class Account{
    private:
        std::string m_Name;
        int m_AccNo;
        static int s_ANGenerator;
    protected:
        float m_Balance;
    public:
        Account(const std::string &name,float balance);
        ~Account();
        const std::string GetName() const;
        float GetBalance() const;
        int GetAccountNo() const;

        void AccumulateInterest();
        void Withdrow(float);
        void Deposit(float);
        float GetInterestRate() const;
};