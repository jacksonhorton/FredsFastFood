// Name: Jackson Horton
// Date: February 9, 2022
// Description: Fredericks Fast Food ordering project.

#include <iostream>
#include <iomanip>
using namespace std;

void printRecieptItem(string Name, double price, int qty)
{
     if (qty > 0)
     {
          // Prints "item name: qty for $x.xx"
          cout << fixed << setprecision(2); // sets precision to 2 decimal places
          cout << right << setw(20) << Name << ":" << right << setw(4) << qty
               << " "
               << "at $ " << price << " = $" << right << setw(6) << qty * price
               << endl;
     }
     else
     {
          // prints 0 instead of "qty for $x.xx"
          cout << fixed << setprecision(2); // sets precision to 2 decimal places.
          cout << right << setw(20) << Name << ":" << right << setw(4) << 0 << endl;
     }
}

int getProdQty(string name, double cost)
{
     // Print a cout and use cin to get the quantity of a product desired.
     int qty;
     cout << fixed << setprecision(2);
     cout << "How many " << name << " ($" << cost << ") do you want? ";
     cin >> qty;
     return qty; // returns quantity entered
}

void makeChange(double total)
{
     int rDollars = total;
     int rCents = (total - rDollars) * 100 + .5;

     // DOLLARS
     // Calculates number of twenties and updates remainder.
     int nTwenty = rDollars / 20;
     rDollars = rDollars % 20;
     if (nTwenty > 0)
          cout << nTwenty << " $20s" << endl;

     // Calculates number of tens and updates remainder.
     int nTen = rDollars / 10;
     rDollars = rDollars % 10;
     if (nTen > 0)
          cout << nTen << " $10s" << endl;

     // Calculates number of fives and updates remainder.
     int nFive = rDollars / 5;
     rDollars = rDollars % 5;
     if (nFive > 0)
          cout << nFive << " $5s" << endl;

     // Calculates number of ones and updates remainder.
     int nOne = rDollars;
     if (nOne > 0)
          cout << nOne << " $1s" << endl;

     // COINS
     // Calculates number of quarters and updates remainder.
     int nQ = rCents / 25;
     rCents = rCents % 25;
     if (nQ > 0)
          cout << nQ << " quarters" << endl;

     // Calculates number of dimes and updates remainder.
     int nD = rCents / 10;
     rCents = rCents % 10;
     if (nD > 0)
          cout << nD << " dimes" << endl;

     // Calculates number of nickles and updates remainder.
     int nN = rCents / 5;
     rCents = rCents % 5;
     if (nN > 0)
          cout << nN << " nickels" << endl;

     // Calculates number of pennies and updates remainder.
     int nP = rCents;
     if (nP > 0)
          cout << nP << " pennies" << endl;
}

int main()
{

     // setup code
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

     int prod1Qty, prod2Qty, prod3Qty, prod4Qty, prod5Qty, prod6Qty;

     cout << "WELCOME TO FREDRICK'S FAST FOODS!" << endl;
     cout << "Please enter your order..." << endl;

     // Records requested amount of each item in their respective variable
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
     printRecieptItem(prod1Name, prod1Cost, prod1Qty);
     printRecieptItem(prod2Name, prod2Cost, prod2Qty);
     printRecieptItem(prod3Name, prod3Cost, prod3Qty);
     printRecieptItem(prod4Name, prod4Cost, prod4Qty);
     printRecieptItem(prod5Name, prod5Cost, prod5Qty);
     printRecieptItem(prod6Name, prod6Cost, prod6Qty);

     // calculates prices, tax, grand, and item qty totals
     double prodPriceSum = (prod1Cost * prod1Qty) + (prod2Cost * prod2Qty) + (prod3Cost * prod3Qty) + (prod4Cost * prod4Qty) + (prod5Cost * prod5Qty) + (prod6Cost * prod6Qty);
     double taxTotal = prodPriceSum * TAX_RATE;
     double grandTotal = prodPriceSum + taxTotal;
     int itemTotal = prod1Qty + prod2Qty + prod3Qty + prod4Qty + prod5Qty + prod6Qty;

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

     // PART 2

     int moneyRecieved;
     cout << "How much money did you receive? ";
     cin >> moneyRecieved;
     double changeDue = moneyRecieved - grandTotal;
     cout << "The amount of change due is $" << changeDue << endl;
     cout << "  That is " << int(changeDue * 100.0 + .5) << " cents."
          << endl
          << endl;

     cout << "Please give the customer the following:" << endl;
     makeChange(changeDue);
     return 0;
}

/* Questions: 50pts

1) How hard was this project?
    Part 1: Pretty hard getting all of the couts formatted correctly and
    organized.
2) How long did it take you to do it (hours / days)?
    Took an hour for part 1. +30min +2hr +45mins
3) Did you get help and if so did you documment it above?
    I looked at 5.1 notes slides.
*/