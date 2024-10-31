#include <iostream>
#include <ostream>
using namespace std;

struct Address {
    string street;
    string city;
    string zip;
};

struct Customer {
    string ID;
    string name;
    string email;
    Address customerAddress;
};

ostream& operator<<(ostream& stream, Customer info) {
    stream << "Your ID is : " << info.ID << endl;
    stream << "Your Name is : " << info.name << endl;
    stream << "Your email is : " << info.email << endl;
    stream << "Your Street is : " << info.customerAddress.street << endl;
    stream << "Your City is : " << info.customerAddress.city << endl;
    stream << "Your Zipcode is : " << info.customerAddress.zip << endl;
    return stream;
}