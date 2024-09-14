#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main () {
    int pilihan;
    double var1, var2;
    char lanjut;

    do {

        cout << "Pilih operasi yang ingin lo lakukan!  :\n";
        cout << "1. Pertambahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n"; 
        cout << "4. Pembagian\n";
        cout << "5. Faktorial\n";
        cout << "6. Keluar\n";

        cout << "Masukkan pilihan lo : ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <=4) {
            cout << "Masukkan dua angka yang lo pilih :";
            cin >> var1 >> var2;

            switch (pilihan) {
                case 1:
                    cout << "Hasil penjumlahan : " << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
                    break;
                case 2:
                    cout << "Hasil pengurangan : " << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
                    break;
                case 3:
                    cout << "Hasil perkalian : " << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
                    break;
                case 4: 
                    if (var2 != 0) {
                        cout << "Hasil pembagian : " << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
                    } else {
                        cout << "Ga bisa dibagi 0 kocak!" << endl;
                    }
                    break;
                default:
                    break;
            }
        } else if (pilihan == 5) {
            int angka;
            cout << "Masukkan angka untuk faktorial : ";
            cin >> angka;

            if (angka < 0) {
                cout << "Ga bisa angka negatif bos!" << endl;
            } else {
            cout << "Hasil faktorial dari " << angka << "adalah : " << faktorial(angka) << endl;
            }
        } else if (pilihan == 6) {
            cout << "Programnya selesai bos! Terima kasih!" << endl;
            break;
        } else {
            cout << "Pilihan lo ga valid!" << endl;
        }


        cout << "Apakah lo ingin lanjutin program ini? (Y/N)";
        cin >> lanjut;
        cout << endl;
    
    } while (lanjut == 'y' || lanjut == 'Y');
    
    return 0;
}