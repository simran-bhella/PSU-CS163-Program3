#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;

//Simranjit Bhella
//2/8/2022
//CS163
//The purpose of this code is to set up the structs and classes required for the hash table search program.
//These include the item struct with information about the products, the node struct, and the hashtable class,
//The node struct is a used for a classic linked list and has an item object and next pointer as data members.
//The hashtable class's public functions include functions to add items, load the table from an external file,
//display all, display by keyword, retrieve by keyword, remove by keyword, and display all items of a certain type.
//Its private members include the hash function, the hash table, and the table size.

//Item stuct with info on the items
struct item {
    char * keyword; //keyword for hashing
    char * description;
    char * type;
    char * platform;
    char * rating;
};

//Node struct with an item object and a next pointer
struct node {
    struct item this_item;
    node * next;
};

//Hashtable class will set up the hash table and manage edits and searches.
class hashtable {
    public:
        hashtable(int size); //hashtable class constructor
        ~hashtable(); //hashtable class destructor
        int additem(item * to_add); //function to add an item to the hashtable
        int loadtable(); //function to load table from external file
        int displayall(); //function to display table for testing
        int displaymatch(char * to_find); //function to display item by keyword
        int retrivematch(char * to_find, item * retrieve); //function to retrieve item by keyword
        int removeitem(char * to_remove); //function to remove item by keyword
        int displaytype(char * to_find); //function to find item by keyword
    private:
        int hash(char * key) const; //function to generate an item's index on hash table by keyword
        node ** hash_table; //the actual hash table
        int table_size; //size of the hash table (array size)
};