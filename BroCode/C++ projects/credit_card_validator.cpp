#include <iostream>
/* Luhn Algorithm
--------------
1. Double every second digit from right to left
   If doubled number is 2 digits, split them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 & 3
5. If step 4 is divisible by 10, # is valid */

// give a try with the following card number : 371449635398431

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEVENDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a card number: ";
    std::cin >> cardNumber;

    result = sumEVENDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << cardNumber << " is a valid card number.\n";
    }
    else
    {
        std::cout << cardNumber << " is not a valid card number.\n";
    }

    return 0;
}
int getDigit(const int number)
{ // if 18 -> 1 + 8 = 9
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0'; // or -48, because '0' is 48 in ASCII
    }

    return sum;
    return 0;
}
int sumEVENDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2); // or -48, because '0' is 48 in ASCII
    }

    return sum;
}
