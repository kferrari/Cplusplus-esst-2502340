#include "customer.h"
#include "creditcard.h"

#include <iostream>

Customer::Customer()
{
    mState = CustomerState::New;
    CreditCard * mCreditCard;
}

Customer::Customer(const CustomerState &state)
{
    mState = state;
    CreditCard * mCreditCard;
}

Customer::~Customer(){
    std::cout << "Customer destroyed" << std::endl;
}

CustomerState Customer::getState(){
    return mState;
}

void Customer::setState(const CustomerState &state){
    mState = state;
}

CreditCard * Customer::getCard(){
    return &mCreditCard;
}

void Customer::setCardState(const CreditCardState &state){
    mCreditCard.setState(state);
}

void Customer::withdraw(const int &amount){
    if (mCreditCard.getState() != CreditCardState::Valid){
        std::cerr << "Card invalid" << std::endl;
        return;
    }

    if (mState != CustomerState::Premium){
        if (mCreditCard.getBalance() < 0){
            std::cerr << "Not enough Pesos" << std::endl;
            return;
        }
    }

    mCreditCard.withdrawMoney(amount);
}

int Customer::getBalance(){
    return mCreditCard.getBalance();
}

bool Customer::verifyStatus(){
    if(mCreditCard.getState() != CreditCardState::Valid)
        return false;

    if(mState == CustomerState::Premium)
        return true;

    if(mCreditCard.getBalance() < 0)
        return false;

    return true;
}
