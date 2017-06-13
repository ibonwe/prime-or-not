#include <iostream>
using namespace std;

/**
 * The purpose of this method is to determine whether a number is prime
 *
 * @author Chad Petersen
 * @param  int amount An amount of fibonacci numbers
 * @return bool
 */
bool isPrime(int number) {
    return (bool) (number % 2);
}

/**
 * The purpose of this method is to retrieve the prime not prime
 * summation calculation
 *
 * @author Chad Petersen
 * @param  int[] numbers A list of numbers to calculate
 * @param  int   amount  The amount of numbers to calculate
 * @return double
 */
double getPrimeNotPrimeSum(int numbers[], int amount) {
    double total = numbers[0];

    for (int i = 1; i < amount; i++) {
        if (isPrime(numbers[i]))
            total += numbers[i];
        else
            total /= numbers[i];
    }

    return total;
};

/**
 * The purpose of this method is to manage user input.
 *
 * @author Chad Petersen
 * @return int
 */
int main() {
    int numbers[] = {1, 2, 3, 7, 8, 19};
    int amount    = 6;

    cout << "The Prime Not Prime Answer: " << getPrimeNotPrimeSum(numbers, amount);

    return 0;
}
