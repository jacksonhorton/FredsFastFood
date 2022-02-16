// Name: Jackson Horton
// Date: February 16, 2022
// Description: Fredericks Fast Food ordering project.

#include <iostream>
#include <iomanip>
using namespace std;


int getProdQty (string name, double cost)
{
     // Print a cout and use cin to get the quantity of a product desired.
     cout << "How many " << name << " ($" << cost << ") do you want? ";
     int qty;
     cin >> qty;
     return qty; // returns quantity requested by user
}


void printRecieptItem(string Name, double price, int qty)
{
     if (qty > 0)
     {
          // Prints "item name: qty for $x.xx"
          cout << right << setw(20) << Name << ":" << right << setw(4) << qty
               << " "
               << "at $ " << price << " = $" << right << setw(6) << qty * price
               << endl;
     }
     else
     {
          // prints 0 instead of "qty for $x.xx"
          cout << right << setw(20) << Name << ":" << right << setw(4) << 0
               << endl;
     }
}


void makeChange (double total)
{
     // Ask for money recieved and output change to be given
     int moneyRecieved;
     cout << "How much money did you receive? ";
     cin >> moneyRecieved;
     double changeDue = moneyRecieved - total;
     cout << "The amount of change due is $" << changeDue << endl;
     cout << "  That is " << int(changeDue * 100.0 + .5) << " cents."
          << endl
          << endl;

     cout << "Please give the customer the following:" << endl;

     // Calculations
     // the base code of this section was from my make change lab
     int rDollars = changeDue;
     int rCents = (changeDue - rDollars) * 100 + .5;

     // DOLLARS
     // Calculates number of twenties and updates remainder.
     int nTwenty = rDollars / 20;
     rDollars = rDollars % 20;
     if (nTwenty > 0) cout << nTwenty << " $20s" << endl;

     // Calculates number of tens and updates remainder.
     int nTen = rDollars / 10;
     rDollars = rDollars % 10;
     if (nTen > 0) cout << nTen << " $10s" << endl;

     // Calculates number of fives and updates remainder.
     int nFive = rDollars / 5;
     rDollars = rDollars % 5;
     if (nFive > 0) cout << nFive << " $5s" << endl;

     // Calculates number of ones and updates remainder.
     int nOne = rDollars;
     if (nOne > 0) cout << nOne << " $1s" << endl;

     // COINS
     // Calculates number of quarters and updates remainder.
     int nQ = rCents / 25;
     rCents = rCents % 25;
     if (nQ > 0) cout << nQ << " quarters" << endl;

     // Calculates number of dimes and updates remainder.
     int nD = rCents / 10;
     rCents = rCents % 10;
     if (nD > 0) cout << nD << " dimes" << endl;

     // Calculates number of nickles and updates remainder.
     int nN = rCents / 5;
     rCents = rCents % 5;
     if (nN > 0) cout << nN << " nickels" << endl;

     // Calculates number of pennies and updates remainder.
     int nP = rCents;
     if (nP > 0) cout << nP << " pennies" << endl;
}

int main ()
{
     // initialize constants and other variables
     // CONST
     const double prod1Cost = 7.99;
     const double prod2Cost = 9.19;
     const double prod3Cost = 8.50;
     const double prod4Cost = 4.15;
     const double prod5Cost = 2.10;
     const double prod6Cost = 5.50;

     const string prod1Name = "Fancy Fajita";
     const string prod2Name = "Texas Tuna";
     const string prod3Name = "Chicken Chimichangas";
     const string prod4Name = "Nifty Nachos";
     const string prod5Name = "Canned Coke";
     const string prod6Name = "Chocolate Cheesecake";

     const double TAX_RATE = 0.09; // 9%

     // INTs / other variable
     int prod1Qty, prod2Qty, prod3Qty, prod4Qty, prod5Qty, prod6Qty;


     // Output introduction and ask for product qty's
     cout << fixed << setprecision(2);
     cout << "WELCOME TO FREDRICK'S FAST FOODS!" << endl;
     cout << "Please enter your order..." << endl;
     // Records requested amount of each item in their respective variable
     // TODO try passing an array to a function of all items
     prod1Qty = getProdQty(prod1Name, prod1Cost);
     prod2Qty = getProdQty(prod2Name, prod2Cost);
     prod3Qty = getProdQty(prod3Name, prod3Cost);
     prod4Qty = getProdQty(prod4Name, prod4Cost);
     prod5Qty = getProdQty(prod5Name, prod5Cost);
     prod6Qty = getProdQty(prod6Name, prod6Cost);


     // divides reciept section from input section in console.
     cout << endl
          << "------------------ RECEIPT ------------------" << endl;


     // Prints reciept line-by-line using printRecieptItem function
     // TODO also try to use array here
     printRecieptItem(prod1Name, prod1Cost, prod1Qty);
     printRecieptItem(prod2Name, prod2Cost, prod2Qty);
     printRecieptItem(prod3Name, prod3Cost, prod3Qty);
     printRecieptItem(prod4Name, prod4Cost, prod4Qty);
     printRecieptItem(prod5Name, prod5Cost, prod5Qty);
     printRecieptItem(prod6Name, prod6Cost, prod6Qty);


     // calculations
     double prodPriceSum = (prod1Cost * prod1Qty) + (prod2Cost * prod2Qty)
                         + (prod3Cost * prod3Qty) + (prod4Cost * prod4Qty)
                         + (prod5Cost * prod5Qty) + (prod6Cost * prod6Qty);
     double taxTotal = prodPriceSum * TAX_RATE;
     double grandTotal = prodPriceSum + taxTotal;
     int itemTotal = prod1Qty + prod2Qty + prod3Qty + prod4Qty + prod5Qty
                   + prod6Qty;


     // Displays Total Values on reciept
     cout << left << setw(38) << "TOTAL"
          << "$" << right << setw(6)
          << prodPriceSum << endl;
     cout << left << setw(38) << "Tax (9.0 Percent)"
          << "$" << right << setw(6)
          << taxTotal << endl;
     cout << "=============================================" << endl;
     cout << left << setw(23) << "GRAND TOTAL" << right << setw(2) << itemTotal
          << left << setw(13) << " items"
          << "$" << right << setw(6)
          << grandTotal << endl
          << endl;
     
     // Call makeChange function which prints all of the change info on reciept 
     makeChange(grandTotal);

     return 0;
}



/* Questions: 50pts

1) How hard was this project?
     Part 1: Pretty hard getting all of the couts formatted correctly and
     organized.
     Part 2: Very hard. Formatting still took a long time. Had to work through
     implementing all of the ideas for this project took some time to figure
     out since I didn't look up anything. Turning the make change into a function
     was not too bad.
2) How long did it take you to do it (hours / days)?
     Part 1: 1 Hour
     Part 2: 3.5 hours
3) Did you get help and if so did you documment it above?
     I looked at 5.1 notes slides and DRY slides. Also my make change lab.
*/