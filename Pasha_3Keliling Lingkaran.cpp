#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int r,d;
    float phi=3.14,keliling;

    cout<<"masukan jari jari lingkaran :";
    cin>>r;

    d=r+r;
    keliling=phi*d;
    cout<<"keliling lingkaran adalah "<<keliling;
    return 0;
}