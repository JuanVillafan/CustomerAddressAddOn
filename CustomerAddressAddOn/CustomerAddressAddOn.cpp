#include <iostream>
#include <string>
#include "customerAddress.h"

using namespace std;
int main()
{
    Customer customer;
    //Store Info____
    cout << "Input your ID : ";
    getline(cin, customer.ID);

    cout << "Enter your name : ";
    getline(cin, customer.name);

    cout << "Enter your Email : ";
    getline(cin, customer.email);

    cout << "Enter your Street : ";
    getline(cin, customer.customerAddress.street);

    cout << "Enter your City : ";
    getline(cin, customer.customerAddress.city);

    cout << "Enter your Zipcode : ";
    getline(cin, customer.customerAddress.zip);


    //Print Info____
    cout << customer;

    return 0;
}

