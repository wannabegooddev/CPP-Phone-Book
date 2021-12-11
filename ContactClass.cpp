#include <iostream>
#include <string>
#define LIMIT 100;

using namespace std;

void start();
int manu();
int k=0;

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

int main()
{
	start();
	string name[100];
	string no[100];
	int check=0;
	int Total_contacts=0;
    check=manu();
    do
    {
        //Search by Number
		if(check==5)
		{
			string temp;
			cout<<"Phone number: ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==no[i])
				{
					cout<<"Number is Found\n";
					cout<<"Name: "<<name[i]<<"       Phone: "<<no[i]<<endl;
					check2++;
				}
			}
			if(check2==0)
			{
				cout<<"This Number is not found in your contact list\n";
			}
		}

        //Search By Name
		else if(check==5)
		{
            string temp;
			cout<<"Name: ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==name[i])
				{
					cout<<"Name is Found\n";
					cout<<"Name: "<<name[i]<<"       Phone: "<<no[i]<<endl;
					check2++;
				}

			}
			if(check2==0)
			{
				cout<<"This name is not found in your contact list\n";
			}
		}
    }
}

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




