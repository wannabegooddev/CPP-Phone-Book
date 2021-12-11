#include <iostream>
#include <string>
#define LIMIT 100;

using namespace std;

class contact
{
    public:
        string name, phone_number, organization, tags;

    void inputData()
    {
        cout << "Input name: ";
        cin >> name;
        cout << "Input phone number: ";
        cin >> phone_number;
        cout << "Input related organization: ";
        cin >> organization;
        cout >> "Input tags: ";
        cout << tags;
    }
} contact[LIMIT];

case 1:
        cout << "Menampilkan seluruh kontak\n" << endl; //Display contacts
        for(int i = 0; i < LIMIT; i++)
        {
            if(contact[i].name != "\0")
            {
                cout << i+1 << endl;
                cout << "Nama:" << contact[i].name << endl;
                cout << "Nomor telpon:" << contact[i].phone_number << endl;
                cout << "Organisasi:" << contact[i].organization << endl;
                cout << "Tags:" << contact[i].tags << endl << endl;
            }
        }
        break;

