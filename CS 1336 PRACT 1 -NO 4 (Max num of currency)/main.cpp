/*

This program will convert money into its monetary equivalent in
20, 10, 5, 1 dollar bills and quarters, dimes, nickels and pennies.


1. Ask the user to enter an amount of money to convert.
2. Convert the money to an integer by multiplying it by 100.
        Divide the money into dollars.
        Divide the money into cents.

3. Calculate the currency.
        Calculate the dollars:
            Calculate the number of twenty dollar bills.
            Calculate the number of ten dollar bills.
            Calculate the number of five dollar bills.
            Calculate the number of one dollar bills.

        Calculate the cents:
            Calculate the number of quarters.
            Calculate the number of dimes.
            Calculate the number of nickels.
            Calculate the number of pennies.

4. Display the results to the user.

*/


// This program will convert money into its monetary equivalent in
// 20, 10, 5, 1 dollar bills and quarters, dimes, nickels and pennies.

#include <iostream>

using namespace std ;

int main()
{
        // Declare variables.
    double money ;  // Amount of money to change into currency.
    int dollars ;  // The whole number part of the money.
    int cents ;  // The decimal part of the money.
    int numTwenties ;  // The twenty dollar bills in the dollars.
    int numTens ;  // The ten dollar bills in the dollars.
    int numFive ;  // The five dollar bills in the dollars.
    int numOnes ;  // The one dollar bills in the dollars.
    int numQuarters ;  // The number of quarters in the cents.
    int numDimes ;  // The number of dimes in the cents.
    int numNickels ;  // The number of nickels in the cents.
    int numPennies ;  // The number of pennies in the cents.
    int remainingAmount ;  // To hold the remaining dollars or cents while calculating.

        // Ask the user to enter an amount of money to convert.
    cout << "Enter an amount to change: " ;
    cin >> money ;
    cout << endl ;

        // Convert the money to an integer by multiplying it by
        // 100 in order to divide them into dollars and cents.
    remainingAmount = money * 100 ;

        // Convert the money to dollars.
    dollars = remainingAmount / 100 ;

        // Convert the money to cents.
    cents = remainingAmount % 100 ;


    // Calculate the dollars

        // Calculate the number of twenty dollar bills and keep the remainder.
    numTwenties = dollars / 20 ;
    remainingAmount = dollars % 20 ;

        // Calculate the number of ten dollar bills and keep the remainder.
    numTens = remainingAmount / 10 ;
    remainingAmount %= 10 ;

        // Calculate the number of five dollar bills and keep the remainder.
    numFive = remainingAmount / 5 ;
    remainingAmount %= 5 ;

        // Assign the remainder to the number of one dollar bills.
    numOnes = remainingAmount ;


    // Calculate the cents.

        // Calculate the number of quarters and keep the remainder.
    numQuarters = cents / 25 ;
    remainingAmount = cents % 25 ;

        // Calculate the number of dimes and keep the remainder.
    numDimes = remainingAmount / 10 ;
    remainingAmount %= 10 ;

        // Calculate the number of nickels and keep the remainder.
    numNickels = remainingAmount / 5 ;
    remainingAmount %= 5 ;

        // Assign the remainder to the number of pennies
    numPennies = remainingAmount ;

    // Display the results to the user.

    cout << "Change for $" << money << " is " << numTwenties << " Twenty dollar bill(s), " << endl ;
    cout << numTens << " Ten dollar bill(s), " << numFive << " five dollar bill(s), " << endl ;
    cout << numOnes << " one dollar bill(s), " << numQuarters << " quarters, " << endl ;
    cout << numDimes << " dimes, " << numNickels << " nickels and " << numPennies << " pennies." << endl ;

    return 0;
}

/*

    RUN 1: Money to change = $345.00

Enter an amount to change: 345.00

Change for $345 is 17 Twenty dollar bill(s),
0 Ten dollar bill(s), 1 five dollar bill(s),
0 one dollar bill(s), 0 quarters,
0 dimes, 0 nickels and 0 pennies.

    -----------------------------------------------

    RUN 2: Money to change = $39.42

Enter an amount to change: 39.92

Change for $39.92 is 1 Twenty dollar bill(s),
1 Ten dollar bill(s), 1 five dollar bill(s),
4 one dollar bill(s), 3 quarters,
1 dimes, 1 nickels and 2 pennies.

    -----------------------------------------------

    RUN 3: Money to change = $-10.00

Enter an amount to change: -10.00

Change for $-10 is 0 Twenty dollar bill(s),
-1 Ten dollar bill(s), 0 five dollar bill(s),
0 one dollar bill(s), 0 quarters,
0 dimes, 0 nickels and 0 pennies.

    -------------------------------------------------

    RUN 4: Money to change = $0.34567

Enter an amount to change: 0.34567

Change for $0.34567 is 0 Twenty dollar bill(s),
0 Ten dollar bill(s), 0 five dollar bill(s),
0 one dollar bill(s), 1 quarters,
0 dimes, 1 nickels and 4 pennies.

    -----------------------------------------------

    RUN 5:

Enter an amount to change: 0.56

Change for $0.56 is 0 Twenty dollar bill(s),
0 Ten dollar bill(s), 0 five dollar bill(s),
0 one dollar bill(s), 2 quarters,
0 dimes, 1 nickels and 1 pennies.

*/
