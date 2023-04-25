#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

#include "creditcard.h"

enum class CustomerState {
    New,
    Standard,
    Premium
};

class Customer {
    public:
        /**
         * @brief Customer holding a card
        */
        Customer();

        Customer(const CustomerState &state);

        /**
         * @brief Customer destructor
        */
        virtual ~Customer();

        /**
         * @brief verifyStatus
         * @return returns customer's credit status
        */
       bool verifyStatus();

       /**
         * @brief setState
        */
       void setState(const CustomerState &state);

       /**
         * @brief getState
        */
       CustomerState getState();

       CreditCard * getCard();

       void withdraw(const int &amount);

       void setCardState(const CreditCardState &state);

       int getBalance();

    private:

        /**
         * @brief customer state
         * @param mState holds customer's state
        */
       CustomerState mState = CustomerState::New;

       /**
        * @brief credit card
        * @param mCreditCard holds credit card
       */
      CreditCard mCreditCard;
};

#endif