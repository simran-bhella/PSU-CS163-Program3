#include "hash.h"
//Simranjit Bhella
//2/11/2022
//CS163
//The purpose of this code is to have a testing application for the ADT that is built in hash.h with the defined functions in hash.cpp.
//In this code under function main, this testing takes place through a dummy application with a user nav menu that allows for the testing of different functions.

int main() {
    int size = 100;
    int loop = 0;
    int menu = 0;
    int tablesize = 0;



    cout << "How large would you like the hashtable to be? ";
    cin >> tablesize;
    cin.ignore(100, '\n');
    hashtable table = hashtable(int(tablesize));




    do {
        cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Please choose an option below: " << endl;
        cout << "[1] Add an item to the table" << endl;
        cout << "[2] Load external table" << endl;
        cout << "[3] Display whole table" << endl;
        cout << "[4] Display by keyword match" << endl;
        cout << "[5] Retrieve by keyword match" << endl;
        cout << "[6] Remove by keyword match" << endl;
        cout << "[Anything Else] Quit the program" << endl << endl;
        cin >> menu;
        cin.ignore(100, '\n');

        //if user wants to add an item to the table
        if (menu == 1) {

            item * to_add = new item;

            cout<< "Enter product keyword: ";
            to_add->keyword = new char[size];
            cin.get(to_add->keyword, size,'\n');
            cin.ignore(100, '\n');

            to_add->description = new char[size];
            cin.get(to_add->description, size,'\n');
            cin.ignore(100, '\n');

            to_add->type = new char[size];
            cin.get(to_add->type, size,'\n');
            cin.ignore(100, '\n');

            to_add->platform = new char[size];
            cin.get(to_add->platform, size,'\n');
            cin.ignore(100, '\n');

            to_add->rating = new char[size];
            cin.get(to_add->rating, size,'\n');
            cin.ignore(100, '\n');

            int status = table.additem(to_add);
            if (!status) {
                cout << "Adding item to table failed" << endl;
            }
        }

            //if user wants to laod the table;
        else if (menu == 2) {
            int status = table.loadtable();

            if (!status) {
                cout << "Loading table failed" << endl;
            }
        }

            //if user wants to display the whole table;
        else if (menu == 3) {
            int status = table.displayall();

            if (!status) {
                cout << "Displaying table failed" << endl;
            }
        }

            //if user wants to display by keyword match
        else if (menu == 4) {
            cout << "Please enter the keyword of the item you would like displayed: ";
            char to_find[size];
            cin.get(to_find, size, '\n');
            cin.ignore(100, '\n');

            int status = table.displaymatch(to_find);

            if (!status) {
                cout << "Loading items to table failed" << endl;
            }
        }

            //if user wants to retrieve item by keyword match
        else if (menu == 5) {
            item * retrieve;
            cout << "Please enter the keyword of the item you would like retrieved: ";
            char to_find[size];
            cin.get(to_find, size, '\n');
            cin.ignore(100, '\n');


            int status = table.retrivematch(to_find,retrieve);
            cout << "Retrieved object description: " << retrieve->description << endl;

            if (!status) {
                cout << "Retrieving item failed" << endl;
            }
        }
        else if (menu == 6) {
            cout << "Please enter the keyword of the item you would like removed: ";
            char remove[size];
            cin.get(remove, size, '\n');
            cin.ignore(100, '\n');

            int status = table.removeitem(remove);

            if (!status) {
                cout << "Removing item failed" << endl;
            }
        }
        else if (menu == 7) {
            int dequeuestatus = 0;

            if (!dequeuestatus) {
                cout << "Dequeuing product from list failed" << endl;
            }
        }

            //If anything else then change quite loop
        else {
            loop = 1;
        }
    } while (loop != 1);
}
