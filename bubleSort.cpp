#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variabel global array a dengan ukuran 20
int n; // deklarasi variabel global n dengan menyimpan banyak elemen

void input(){ // procedur untuk input
    while (true){
        cout << "masukkan banyak elemen pada array :"; //output ke layar
        cin >> n; // input dari pengguna
        if (n <=20) // jika n kurang dari atau sama dengan 20
            break; // keluar dari loop
        else { // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n" ;
        }
    }

}
