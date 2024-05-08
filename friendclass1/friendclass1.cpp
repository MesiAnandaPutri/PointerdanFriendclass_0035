// friendclass1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{

private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};
