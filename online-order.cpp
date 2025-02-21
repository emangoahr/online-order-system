#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    double totalCost = 0;
    double price;

    cout << "Welcome to Biryani Spice Online Ordering System\n";
    
    cout << "Please choose a dish from the menu:\n";
    
    cout << "1. Chicken Biryani---100\n";
    
    cout << "2. Mutton Biryani---200\n";
    
    cout << "3. Vegetable Biryani---300\n";
    
    cout << "4. Paneer Biryani---400\n";
    
    cout << "Enter the number corresponding to your choice: ";
    cin >> choice;

    
    switch (choice) {
        case 1:
            price = 100;
            cout << "You chose Chicken Biryani. Enter quantity ";
            cin >> quantity;
            totalCost = price * quantity;
            break;
        case 2:
            price = 200;
            cout << "You chose Mutton Biryani. Enter quantity ";
            cin >> quantity;
            totalCost = price * quantity;
            break;
        case 3:
            price = 300;
            cout << "You chose Vegetable Biryani. Enter quantity ";
            cin >> quantity;
            totalCost = price * quantity;
            break;
        case 4:
            price = 400;
            cout << "You chose Paneer Biryani. Enter quantity ";
            cin >> quantity;
            totalCost = price * quantity;
            break;
        default:
            cout << "Invalid choice. Please restart the order";
            return 0;
    }

    
    cout << "Order Summary";
    cout << "Dish";

    switch (choice) {
        case 1: cout << "Chicken Biryani \n"; break;
        case 2: cout << "Mutton Biryani \n"; break;
        case 3: cout << "Vegetable Biryani \n"; break;
        case 4: cout << "Paneer Biryani\n"; break;
    }

    cout << "Quantity " << quantity << endl;
    cout << "Total Cost" << totalCost << endl;

    cout << "Thank you for ordering from Biryani Spice! Your order will be delivered soon";

    return 0;
}
