// friend funcation 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class pelajar;
class manusia
{
public:
    void showNilaiPelajar(pelajar& x);
};
class pelajar
{
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaiPelajar(pelajar& x);
};

void manusia::showNilaiPelajar(pelajar& x)
{
    cout << x.nilai;
}

int main()
{
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
}