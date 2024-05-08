// pointer1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main() {

    mahasiswa mhs{ 1 }; // object mhs
    mhs.showNim(); // member acces operator
