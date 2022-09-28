#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  
   cout << "Nilai kehadiran,Tugas, UTS, UAS "<<endl;
    cout << "Masukan Nilai Kehadiran = ";
    int NilaiKehadiran;
    cin >> NilaiKehadiran;
    
    cout << "Masukan Nilai Tugas = ";
    int NilaiTugas;
    cin >> NilaiTugas;
    
    cout << "Masukan Nilai UTS = ";
    int NilaiUTS;
    cin >> NilaiUTS;
    
    cout << "Masukan Nilai UAS = ";
    int NilaiUAS;
    cin >> NilaiUAS;

    
    int hasil;
    hasil = ( NilaiKehadiran + NilaiTugas + NilaiUTS + NilaiUAS )/ 4;
    cout << " Hasil Nilai Kehadiran, Tugas, UTS, UAS = "<< hasil ;
}