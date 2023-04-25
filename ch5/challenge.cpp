#include <iostream>

#include "creditcard.h"
#include "customer.h"

int main()
{    
    Customer peter(CustomerState::Premium);
    Customer john(CustomerState::Standard);

    // Validate credit card
    peter.setCardState(CreditCardState::Valid);
    john.setCardState(CreditCardState::Valid);

    std::cout << "Peter:"  << peter.getBalance() << std::endl;

    std::cout << "John:"  << john.getBalance() << std::endl;

    std::cout << "Each is going to withdraw some Money: First 50, then 100 and finally 200."  << std::endl;

    john.withdraw(50);
    peter.withdraw(50);

    john.withdraw(100);
    peter.withdraw(100);

    john.withdraw(200);
    peter.withdraw(200);

    std::cout << "Balance after withdrawing:" << std::endl;
    std::cout << "Peter:"  << peter.getBalance() << std::endl;
    std::cout << "John:"  << john.getBalance() << std::endl;

    return 0;
}
