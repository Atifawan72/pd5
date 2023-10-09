#include <iostream>
using namespace std;

// Function to get the car brand/model
string getCarName() {
    string name;
    cout << "Honda, Toyota, Nissan, Audi" << endl;
    cin >> name;
    return name;
}

// Function to get the car price
string getCarPrice() {
    string price;
    cout << "1000$, 1500$, 2000$, 5000$" << endl;
    cin >> price;
    return price;
}

int main() {
    cout << "Which brand car do you want to buy?" << endl;
    string carName = getCarName();

    cout << "Enter the model of car:" << endl;
    // Assuming the model is a string
    string carModel;
    cin >> carModel;

    cout << "Select the color of the car:" << endl;
    // Assuming the color is a string
    string carColor;
    cin >> carColor;

    // Get the car price
    string carPrice = getCarPrice();

    // Display the selected options
    cout << "You have selected:" << endl;
    cout << "Brand: " << carName << endl;
    cout << "Model: " << carModel << endl;
    cout << "Color: " << carColor << endl;
    cout << "Price: " << carPrice << endl;

    return 0;
}
