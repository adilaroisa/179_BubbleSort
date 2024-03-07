#include <iostream>
using namespace std;


int a[20]; // Deklarasi array a dengan ukuran 20
int n;     // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() { //  Procedure untuk input 
    while (true) { // Looping 
        cout << "Masukan banyaknya elemen pada array : ";  // Output ke layar
        cin >> n; // Input dari pengguna
        if (n <= 20) // Jika n kurang dari atau sama dengan 20
            break; // Keluar dari loop
        else {     // Jika n lebihh dari 20
            cout << "Array dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
        }
    }
    cout << endl; // Output baris kosong 
    cout << "====================" << endl; // Output ke layar
    cout << "Masukan Elemen Array" << endl; // Output ke layar
    cout << "====================" << endl; // Output ke layar

    for (int i = 0; i < n; i++) { // Looping dengan 1 dimulai dari 0 hingga n-1
        cout << "Data ke-" << ": "; //Output ke layar 
        cin >> a[i]; // Input dari pengguna
    }
}

void display() { // Procedure menampilkan hasil
    cout << endl; // Output baris koosng
    cout << "====================" << endl; // Output ke layar
    cout << "Elemen Array yang telah tersusun" << endl; // Output ke layar
    cout << "====================" << endl; // Output ke layar
    for (int j = 0; j < n; j++) { // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl; // Output ke layar
    }
    cout << endl; // Outputt baris kosong
}
int main()
{
    
}
