#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    
    cout << "Nilai UTS dan UAS"<<endl;
    cout << "Masukan Nilai UTS = ";
    int NilaiUTS;
    cin >> NilaiUTS;
    
    cout << "Masukan Nilai UAS = ";
    int NilaiUAS;
    cin >> NilaiUAS;
    
       
    int hasil;
    hasil = (NilaiUTS + NilaiUAS)/ 2;
    cout << " Hasil Nilai UTS DAN UAS = "<< hasil ;
}