#include "creditcard.h"
#include "customer.h"

#include <iostream>

CreditCard::CreditCard()
{
    mBalance = 100;
    mState = CreditCardState::New;
}

CreditCard::~CreditCard(){
    std::cout << "Card destroyed" << std::endl;
}

int CreditCard::getBalance()
{
    return mBalance;
}

CreditCardState CreditCard::getState(){
    return mState;
}

void CreditCard::setState(const CreditCardState &state){
    mState = state;
}

void CreditCard::withdrawMoney(const int amount)
{

    mBalance -= amount;
}