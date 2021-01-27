#include <iostream>
#include <cmath> 
int main ()
{
    int OK = 0;
    float transaction_amount, account_balance;
    std::cin >> transaction_amount;
    std::cin >> account_balance;
    if (fmod(transaction_amount, 5.0f) == 0.0f)
    {
        transaction_amount += 0.50; // commission
        if (transaction_amount <= account_balance)
        {
            account_balance -= transaction_amount;
        }
    }
    std::cout << account_balance;
    return OK;
}