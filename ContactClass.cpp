#include <iostream>
#include <string>
#define LIMIT 100;

using namespace std;

void start();
int mainMenu();
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
	int choice=0;
	int Total_contacts=0;
    check=manu();
    do
    {
	    //Display contacts
	    	if (choice==2)
		{
			int choice2=0;
			for(int i=0; i<100;i++)
			{
				if(name[i]!="\0")
				cout<<"\t\t\t\t\t Name :"<<name[i]<< "      Phone :"<<no[i]<<endl;
				check2++;
			}
			if(choice2==0)
			{
				cout<<"\t\t\t\t\t";
			}
		}
	    //Search by Number
		else if(choice==5)
		{
			string temp;
			cout<<"Phone number: ";
			cin>>temp;
			int choice2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==no[i])
				{
					cout<<"Number is Found\n";
					cout<<"Name: "<<name[i]<<"       Phone: "<<no[i]<<endl;
					check2++;
				}
			}
			if(choice2==0)
			{
				cout<<"This Number is not found in your contact list\n";
			}
		}

        //Search By Name
		else if(choice==5)
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
			if(choice2==0)
			{
				cout<<"This name is not found in your contact list\n";
			}
		}
	    	choice=mainMenu();
    }
}

int mainMenu()                     //Main Menu dari program
{
    cout << "==================================================================" << endl;
    cout << "Selamat datang di program buku telpon. Apa yang mau Anda lakukan?\n";
    cout << "1. Menampilkan seluruh kontak\n2. Mengubah info kontak\n3. Menambah kontak\n4. Menghapus kontak\n5. Mencari kontak\n6. Keluar\n";
    cout << "==================================================================" << endl;
    cin >> choice;
	int a;
	cin>>a;
	system("cls");
	return a;
}
