#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    bool end_program;
    int choice;

    while(!end_program)
    {
        cout << "=====================================" << endl;
        cout << "Selamat datang di program buku telpon. Apa yang mau Anda lakukan?\n";
        cout << "1. Menampilkan seluruh kontak\n2. Mengubah info kontak\n3. Menambah kontak\n4. Menghapus kontak\n5. Mencari kontak\n6. Keluar\n";
        cout << "=====================================" << endl;
        cin >> choice;
        switch(choice)
        {
        case 1:
            cout << "Menampilkan seluruh kontak\n";
            break;
        case 2:
            cout << "Mengubah info kontak\n";
            break;
        case 3:
            cout << "Menambah kontak\n";
            break;
        case 4:
            cout << "Menghapus kontak\n";
            break;
        case 5:
            cout << "Mencari kontak\n";
            break;
        case 6:
            exit(0);
            break;
        }
    }

    return 0;
}
