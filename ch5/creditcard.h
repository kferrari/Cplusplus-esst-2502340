#ifndef CREDITCARD_H
#define CREDITCARD_H

enum CreditCardState {
    New,
    Valid,
    TransferInProgress,
    Invalid,
    Error
};

class CreditCard {
    public:
        /**
         * @brief Credit card constructor
        */
        CreditCard();

        /**
         * @brief Credit card destructor
        */
        virtual ~CreditCard();

        /**
         * @brief withdrawMoney
        */
       void withdrawMoney(const int amount);

       /**
         * @brief return current balance
        */
       int getBalance();

       /**
         * @brief sets state
        */
       void setState(const CreditCardState &state);

       /**
         * @brief gets state
        */
       CreditCardState getState();

    private:

        /**
         * @brief customer state
         * @param mState holds customer's state
        */
       CreditCardState mState;

       /**
        * @brief balance
        * @param mBalance holds current balance
       */
      int mBalance;
};

#endif