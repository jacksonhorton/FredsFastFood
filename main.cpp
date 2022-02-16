// Name: Jackson Horton
// Date: February 9, 2022
// Description: Fredericks Fast Food ordering project.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

     // Setup code
     int nFajita, nTuna, nChimichanga, nNacho, nCoke, nCheesecake;

     cout << "WELCOME TO FREDRICK'S FAST FOODS!" << endl;
     cout << "Please enter your order..." << endl;

     // Records requested amount of each item in their respective variable
     cout << "How many Fancy Fajita ($7.99) do you want? ";
     cin >> nFajita;
     cout << "How many Texas Tuna ($9.19) do you want? ";
     cin >> nTuna;
     cout << "How many Chicken Chimichangas ($8.50) do you want? ";
     cin >> nChimichanga;
     cout << "How many Nifty Nachos ($4.15) do you want? ";
     cin >> nNacho;
     cout << "How many Canned Coke ($2.10) do you want? ";
     cin >> nCoke;
     cout << "How many Chocolate Cheesecake ($5.50) do you want? ";
     cin >> nCheesecake;

     // Prints reciept with quantity and price breakup.
     cout << endl
          << "------------------ RECEIPT ------------------" << endl;
     // Referenced notes slides for formatting and alignment in this section.
     cout << fixed << setprecision(2); // sets precision to 2 decimal places.
     cout << fixed << setprecision(2) << right << setw(21) << "Fancy Fajita:"
          << right << setw(3) << nFajita << "  "
          << "at $ 7.99 = $"
          << right << setw(6) << nFajita * 7.99 << endl;
     cout << fixed << setprecision(2) << right << setw(21) << "Texas Tuna:"
          << right << setw(3) << nTuna << "  "
          << "at $ 9.19 = $"
          << right << setw(6) << nTuna * 9.19 << endl;
     cout << fixed << setprecision(2) << right << setw(21)
          << "Chicken Chimichangas:"
          << right << setw(3) << nChimichanga << "  "
          << "at $ 8.50 = $"
          << right << setw(6) << nChimichanga * 8.50 << endl;
     cout << fixed << setprecision(2) << right << setw(21) << "Nifty Nachos:"
          << right << setw(3) << nNacho << "  "
          << "at $ 4.15 = $"
          << right << setw(6) << nNacho * 4.15 << endl;
     cout << fixed << setprecision(2) << right << setw(21) << "Canned Coke:"
          << right << setw(3) << nCoke << "  "
          << "at $ 2.10 = $"
          << right << setw(6) << nCoke * 2.10 << endl;
     cout << fixed << setprecision(2) << right << setw(21) << "Chocolate Cheesecake:"
          << right << setw(3) << nCheesecake << "  "
          << "at $ 5.50 = $"
          << right << setw(6) << nCheesecake * 5.50 << endl;
}

/* Questions: 50pts

1) How hard was this project?
    Part 1: Pretty hard getting all of the couts formatted correctly and
    organized.
2) How long did it take you to do it (hours / days)?
    Took an hour for part 1.
3) Did you get help and if so did you documment it above?
    I looked at 5.1 notes slides.
*/