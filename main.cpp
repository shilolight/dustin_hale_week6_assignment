#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string choice;
    std::string passenger[5];
    cout<<"AIRLINE REGISTRATION"<<std::endl;
    do {
        cout<<"a - Add Passenger Entry"<<endl;
        cout<<"l - List Passenger Details"<<endl;
        cout<<"u - Update Passenger Details"<<endl;
        cout<<"d - Delete Passenger Details"<<endl;
        cout<<"q - Quit"<<endl<<endl;
        cout<<"Choice: ";
        cin>>std::ws;
        std::getline(cin, choice);
        if(choice == "a") {
            std::string fname, lname, boarding_date, card_number, destination;
            cout<<"First Name: ";
            cin>>std::ws;
            std::getline(cin,fname);
            passenger[0] = fname;
            cout<<"Last Name: ";
            cin>>std::ws;
            std::getline(cin,lname);
            passenger[1]=lname;
            cout<<"Boarding Date: ";
            cin>>std::ws;
            std::getline(cin,boarding_date);
            passenger[2]=boarding_date;
            cout<<"Card Number: ";
            cin>>std::ws;
            std::getline(cin,card_number);
            passenger[3]=card_number;
            cout<<"Destination: ";
            cin>>std::ws;
            std::getline(cin,destination);
            passenger[4]=destination;
        }
        else if (choice == "l") {
            for(int i = 0; i  < 5; i ++)
                cout<<passenger[i]<<endl;
        }
        else if (choice == "u") {
            std::string fname, lname, boarding_date, card_number, destination;
            cout<<"First Name: ";
            cin>>std::ws;
            std::getline(cin,fname);
            passenger[0] = fname;
            cout<<"Last Name: ";
            cin>>std::ws;
            std::getline(cin,lname);
            passenger[1]=lname;
            cout<<"Boarding Date: ";
            cin>>std::ws;
            std::getline(cin,boarding_date);
            passenger[2]=boarding_date;
            cout<<"Card Number: ";
            cin>>std::ws;
            std::getline(cin,card_number);
            passenger[3]=card_number;
            cout<<"Destination: ";
            cin>>std::ws;
            std::getline(cin,destination);
            passenger[4]=destination;
        }
        else if (choice == "d") {
            passenger[0]=" ";
            passenger[1]=" ";
            passenger[2]=" ";
            passenger[3]=" ";
            passenger[4]=" ";
        }
        else if (choice == "q") {
            break;
        }
    }
    while (true);
}
