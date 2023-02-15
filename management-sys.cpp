#include <iostream>
#include <string>

using namespace std;

int main()
{
    int quantity, choice;

    // q means the quantity we have in our hotel
    int qroom = 0, qpasta = 0, qburger = 0, qchowmein = 0;
    int qcoffee = 0, qpaneer = 0;

    // s means the quantity we sold
    int sroom = 0, spasta = 0, sburger = 0, schowmein = 0;
    int scoffee = 0, spaneer = 0;

    // variables to store total price of items
    int totalRoom = 0, totalPasta = 0, totalBurger = 0;
    int totalChowmein = 0, totalCoffee = 0, totalPaneer = 0;

    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available: ";
    cin >> qroom;

    cout << "\n Quantity of Coffee: ";
    cin >> qcoffee;

    cout << "\n Quantity of Burger: ";
    cin >> qburger;

    cout << "\n Quantity of Chowmein: ";
    cin >> qchowmein;

    cout << "\n Quantity of Pasta: ";
    cin >> qpasta;

    cout << "\n Quantity of PaneerRoll: ";
    cin >> qpaneer;

    m:
    // creating menu for our items
    cout << "\n\t\t Please select from the given menu options.";
    cout << "\n 1. Rooms";
    cout << "\n 2. Coffee";
    cout << "\n 3. Burger";
    cout << "\n 4. Chowmein";
    cout << "\n 5. Pasta";
    cout << "\n 6. PaneerRoll";
    cout << "\n 7. Info. regarding sales and collections";
    cout << "\n 8. Exit";

    cout << "\n\n Please enter your choice:- ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter number of rooms you want: ";
        cin >> quantity;

        if (qroom - sroom >= quantity)
        {
            sroom = sroom + qroom;
            totalRoom = totalRoom + quantity * 1200;
            cout << "\n\t\t" << quantity << "number of rooms alloted to you";
        }
        else
            cout << "\n Only " << qroom - sroom << " number of rooms remaining in our hotel.";
        break;

    case 2:
        cout << "\n\n Enter number of cup of Coffee you want: ";
        cin >> quantity;

        if (qcoffee - scoffee >= quantity)
        {
            scoffee = scoffee + quantity;
            totalCoffee = totalCoffee + quantity * 30;
            cout << "\n\n\t\t" << quantity << " cup of Coffee is ordered.";
        }
        else
            cout << "\n\t only " << quantity << " cup of Coffee is remaining.";
        break;

    case 3:
        cout << "\n\n Enter numbers of Burgers you want: ";
        cin >> quantity;

        if (qburger - sburger >= quantity)
        {
            sburger = sburger + quantity;
            totalBurger = totalBurger + quantity * 60;
            cout << "\n\n\t\t" << quantity << "count of burger is ordered.";
        }
        else
            cout << "\n\t only " << quantity << " count of burger is remaining.";
        break;

    case 4:
        cout << "\n\n Enter numbers of plates of Chowmein you want: ";
        cin >> quantity;

        if (qchowmein - schowmein >= quantity)
        {
            schowmein = schowmein + quantity;
            totalChowmein = totalChowmein + quantity * 120;
            cout << "\n\n\t\t" << quantity << " plates of chowmein is ordered.";
        }
        else
            cout << "\n\t only " << quantity << " plates of chowmein is remaining.";
        break;

    case 5:
        cout << "\n\n Enter how many plates of Pasta you want: ";
        cin >> quantity;

        if (qpasta - spasta >= quantity)
        {
            spasta = spasta + quantity;
            totalPasta = totalPasta + quantity * 180;
            cout << "\n\n\t\t" << quantity << "plate of pasta is the order.";
        }
        else
            cout << "\n\t Only " << qpasta - sroom << " plate of pasta is remaining.";
        break;

    case 6:
        cout << "\n\n Enter numbers of PaneerRoll you want: ";
        cin >> quantity;

        if (qpaneer - spaneer >= quantity)
        {
            spaneer = spaneer + quantity;
            totalPaneer = totalPaneer + quantity * 70;
            cout << "\n\n\t\t" << quantity << " count of PaneerRoll is ordered.";
        }
        else
            cout << "\n\t only " << quantity << " count of PaneerRoll is remaining.";
        break;

    case 7:
        cout << "\n\t\t Details of sales and collection";
        cout << "\n\n Number of rooms we had: " << qroom;
        cout << "\n\n Number of rooms we gave for rent: " << sroom;
        cout << "\n\n Remaining rooms: " << qroom - sroom;
        cout << "\n\n Total collection from room: " << totalRoom;

        cout << "\n\n Cups of Coffee we had: " << qcoffee;
        cout << "\n\n Cups of Coffee we served: " << scoffee;
        cout << "\n\n Cups of Coffee remaining: " << qcoffee - scoffee;
        cout << "\n\n Total collection from Coffee: " << totalCoffee;

        cout << "\n\n Number of Burger we had: " << qburger;
        cout << "\n\n Number of Burger we served: " << sburger;
        cout << "\n\n Number of Burger remaining: " << qburger - sburger;
        cout << "\n\n Total collection from Burger: " << totalBurger;

        cout << "\n\n Plates of Chowmein we had: " << qchowmein;
        cout << "\n\n Plates of Chowmein we served: " << schowmein;
        cout << "\n\n Plates of Chowmein remaining: " << qchowmein - schowmein;
        cout << "\n\n Total collection from Chowmein: " << totalChowmein;

        cout << "\n\n Plates of Pasta we had: " << qpasta;
        cout << "\n\n Plates of Pasta we served: " << spasta;
        cout << "\n\n Plates of Pasta remaining: " << qpasta - spasta;
        cout << "\n\n Total collection from Pasta: " << totalPasta;

        cout << "\n\n Number of PaneerRoll we had: " << qpaneer;
        cout << "\n\n Number of PaneerRoll we served: " << spaneer;
        cout << "\n\n Number of PaneerRoll remaining: " << qpaneer - spaneer;
        cout << "\n\n Total collection from PaneerRoll: " << totalPaneer;

        cout << "\n\n Total price of the order: " << totalRoom + totalCoffee + totalBurger + totalChowmein + totalPasta + totalPaneer;

    case 8:
        exit(0);

    default:
        cout << "Please select from given number..";
    }
    goto m;
}