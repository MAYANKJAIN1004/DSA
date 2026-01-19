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
        virtual ~Account();
        const std::string GetName() const;
        float GetBalance() const;
        int GetAccountNo() const;
        void SizeOfAccount(){
            cout<<"Size Of String : "<<sizeof(m_Name)<<endl;
            cout<<"Size Of Int : "<<sizeof(m_AccNo)<<endl;
            cout<<"Size Of Static int : "<<sizeof(s_ANGenerator)<<endl;
            cout<<"Size Of float : "<<sizeof(m_Balance)<<endl;
        }
        virtual void AccumulateInterest();
        virtual void Withdrow(float);
        void Deposit(float);
        virtual float GetInterestRate() const;
};