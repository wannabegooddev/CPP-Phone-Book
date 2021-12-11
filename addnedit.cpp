#include "addnedit.h"
#include <iostream>
#include <string>
#define LIMIT 100;

int count = 0;
int entry;

using namespace std;
class contact
{
    public:
    string nama, organisasi, nomor, tag;
    string contact[LIMIT];

    void addnedit::adddata; //function to add data
    {
        cout >> "Nama: "; cin << nama;
        cout >> "Organisasi: "; cin << organisasi;
        cout >> "No. telp: "; cin << nomor;
        cout >> "tag: "; cin << tag;
    }
};


void addnedit::addcontact;  //function to add new contact
{
    cout << "menambahkan contact baru" << endl;
    for(int i = 0; i < LIMIT; i++) //loop to check for new empty entry
    {
        if(contact[i].nama == "")
        {
            contact[i].adddata();
            break;
        }
    }
    else //if the entry is full
    {
        cout << "Jumlah kontak sudah mencapai batasnya(100).";
    }
    break;
}

void addnedit::editcontact;  //to edit existing contact
{
    string pilihan;
    
    cout << "Mengubah info kontak";
    cout << "Nomor entry yang akan diubah: ";
    cin >> entry;
    
    if((entry-1).name == "") //if entry is empty then offers an option to add a new one
    {
        cout << "entry ini kosong, apakah mau menambahkan kontak baru? (y/n)";
        cin >> pilihan;
        if(pilihan == "y")
        {
            contact[entry-1].adddata();
        }
        else
        {
            break;
        }
    }
    else //if entry is not empty then continue edit the existing contact
    {
        data[entry-1].adddata();
    }
    break;
}
