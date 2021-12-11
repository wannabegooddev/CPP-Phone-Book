#include "addnedit.h"
#include "data.h"
#include <iostream>
#include <string>
#define LIMIT 100;

int count = 0;
int current = -1;
int entry;

using namespace std;
class contact
{
    public:
    string nama, organisasi, nomor, tag;
    string contact[LIMIT];

    void addnedit::adddata;
    {
        cout >> "Nama: "; cin << nama;
        cout >> "Organisasi: "; cin << organisasi;
        cout >> "No. telp: "; cin << nomor;
        cout >> "tag: "; cin << tag;
    }
};


void addnedit::addcontact;
{
    cout << "menambahkan contact baru" << endl;
    for(int i = 0; i < LIMIT; i++)
    {
        if(contact[i].nama == "")
        {
            contact[i].adddata();
            break;
        }
    }
    break;
}

void addnedit::editcontact;
{
    cout << "Mengubah info kontak";
    cout << "Nomor entri yang akan diubah: ";
    cin >> entry;

    data[entry-1].adddata();
    break;
}
