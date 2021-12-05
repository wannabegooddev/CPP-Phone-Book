#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#define LIMIT 100

using namespace std;

//Deklarasi global variable di sini
int choice, entry;
//=================================

class Contact                       //Class Contact untuk kontak, termasuk method untuk manipulasi datanya
{
    public:
        string name, phone_number, organization, tags;

    void inputData()
    {
        cout << "Input name: ";
        cin >> name;
        cout << "Input phone number: ";
        cin >> phone_number;
    }

    void deleteData()
    {

    }

} contact[LIMIT];

void ignoreLine()                   //ignoreLine function untuk menghindari infinite loop input berupa selain int
{
    cin.clear();
    cin.ignore();
}

void mainMenu()                     //Main Menu dari program
{
    cout << "==================================================================" << endl;
    cout << "Selamat datang di program buku telpon. Apa yang mau Anda lakukan?\n";
    cout << "1. Menampilkan seluruh kontak\n2. Mengubah info kontak\n3. Menambah kontak\n4. Menghapus kontak\n5. Mencari kontak\n6. Keluar\n";
    cout << "==================================================================" << endl;
    cin >> choice;
    switch(choice)
    {
    case 1:
        cout << "Menampilkan seluruh kontak\n" << endl;
        for(int i = 0; i < LIMIT; i++)
        {
            if(contact[i].name != "")
            {
                cout << i+1 << endl;
                cout << "Nama:" << contact[i].name << endl;
                cout << "Nomor telpon:" << contact[i].phone_number << endl;
                cout << "Organisasi:" << contact[i].organization << endl;
                cout << "Tags:" << contact[i].tags << endl << endl;
            }
        }
        break;
    case 2:
        cout << "Mengubah info kontak";
        cout << "Entri yang ingin diubah: ";
        cin >> entry;
        contact[entry-1].inputData();
        break;
    case 3:
        cout << "Menambah kontak" << endl;
        for(int i = 0; i < LIMIT; i++)
        {
            if(contact[i].name == "")
            {
                contact[i].inputData();
                break;
            }
        }
        break;
    case 4:
        cout << "Menghapus kontak";
        break;
    case 5:
        cout << "Mencari kontak";
        break;
    case 6:
        exit(0);
        break;
    default:
        cout << "Perintah tidak dimengerti. Silakan coba lagi.";
        break;
    }
}

int main()                      //Driver Code
{
    bool end_program;

    ofstream writeData("Phonebook Save.txt");
    ifstream readData("Phonebook Save.txt");

    contact[0].name = "Alpha";
    contact[0].phone_number = "085700192422";
    contact[1].name = "Beta";
    contact[1].phone_number = "081227360323";


    while(!end_program)
    {
        mainMenu();

        while (cin.fail()){
            ignoreLine();
        }
    }

    return 0;
}
