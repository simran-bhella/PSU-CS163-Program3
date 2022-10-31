#include "hash.h"
//Simranjit Bhella
//2/11/2022
//CS163
//The purpose of this file is to implement the functions from the hashtable class from the hash.h file.
//The functions are as follows:
//hashtable();
//~hashtable();
//int additem(item * to_add);
//int loadtable();
//int displayall();
//int displaymatch(char * to_find);
//int retrivematch(char * to_find);
//int removeitem(char * to_remove);
//int displaytype(char * to_find);
//And the private function: int hash(char * key)
//As an ADT class, these functions do not directly interact with the application. All functions will return 0 or 1 for
//success or failure.

//hashtable constructor
hashtable::hashtable(int size) {
    hash_table = new node * [size];
    for (int i = 0; i < size; ++i) {
        hash_table[i] = nullptr;
    }
    table_size = size;
}

//hashtable destructor
hashtable::~hashtable() {
    for (int i = 0; i < table_size; ++i) {
        hash_table[i] = nullptr;
    }

    table_size = 0;
}

//Hashing function to generate index number for item based on keyword
int hashtable::hash(char *key) const{

    int count = 0;
    for (int i=0; key[i]; i++) {
        count += key[i];
    }
    return count % table_size;


}

//Function to add item to hashtable
int hashtable::additem(item *to_add) {

    if (!to_add) {
        return 0;
    }

    int index = hash(to_add->keyword);

//    if (!hash_table[index]->this_item.keyword){
//        node * tmp = new node;
//        hash_table[index] = tmp;
//
//        hash_table[index]->this_item.description = new char[strlen(to_add->description)+1];
//        strcpy(hash_table[index]->this_item.description, to_add->description);
//
//        hash_table[index]->this_item.type = new char[strlen(to_add->type)+1];
//        strcpy(hash_table[index]->this_item.type, to_add->type);
//
//        hash_table[index]->this_item.platform = new char[strlen(to_add->platform)+1];
//        strcpy(hash_table[index]->this_item.platform, to_add->platform);
//
//        hash_table[index]->this_item.rating = new char[strlen(to_add->rating)+1];
//        strcpy(hash_table[index]->this_item.rating, to_add->rating);
//    }

    node * tmp = hash_table[index];
    while(tmp->next) {
       tmp = tmp->next;
    }

    node * new_data = new node;
    hash_table[index]->next = new_data;

    new_data->this_item.keyword = new char[strlen(to_add->keyword)+1];
    strcpy(new_data->this_item.keyword, to_add->keyword);

    new_data->this_item.description = new char[strlen(to_add->description)+1];
    strcpy(new_data->this_item.description, to_add->description);

    new_data->this_item.type = new char[strlen(to_add->type)+1];
    strcpy(new_data->this_item.type, to_add->type);

    new_data->this_item.platform = new char[strlen(to_add->platform)+1];
    strcpy(new_data->this_item.platform, to_add->platform);

    new_data->this_item.rating = new char[strlen(to_add->rating)+1];
    strcpy(new_data->this_item.rating, to_add->rating);
}

//Function to load a table from an external file
int hashtable::loadtable() {
    ifstream file_in;

    file_in.open("Program3 List.txt");
    if (file_in) {
        while (!file_in.eof()) {
            item to_get;

            file_in.get(to_get.keyword, 100, ':');
            file_in.ignore(100, ':');

            file_in.get(to_get.description, 100, ':');
            file_in.ignore(100, ':');

            file_in.get(to_get.type, 100, ':');
            file_in.ignore(100, ':');

            file_in.get(to_get.platform, 100, ':');
            file_in.ignore(100, ':');

            file_in.get(to_get.rating, 100, ':');
            file_in.ignore(100, ':');

            additem(&to_get);

        }

    }
    file_in.close();
}


//Function to display all from hashtable for testing
int hashtable::displayall() {

    for (int i = 0; i < table_size; ++i) {
        node * tmp = hash_table[i];
        while(tmp) {
            cout << "keyword: " << tmp->this_item.keyword << endl;
            cout << "description: " << tmp->this_item.description << endl;
            cout << "type: " << tmp->this_item.type << endl;
            cout << "platform: " << tmp->this_item.platform << endl;
            cout << "rating: " << tmp->this_item.rating << endl;
            tmp = tmp->next;
        }

    }


}






//Function to display item by keyword
int hashtable::displaymatch(char * to_find) {

    if(!to_find) {
        return 0;
    }

    //send keyword to hash function
    int index = hash(to_find);

    node * tmp = hash_table[index];

    //iterate until found keyword match
    while (strcmp(to_find,tmp->this_item.keyword) != 0 && tmp) {
        tmp = tmp->next;

    }

    if (!tmp) {
        return 0;
    }

    //display items
    cout << "keyword: " << tmp->this_item.keyword << endl;
    cout << "description: " << tmp->this_item.description << endl;
    cout << "type: " << tmp->this_item.type << endl;
    cout << "platform: " << tmp->this_item.platform << endl;
    cout << "rating: " << tmp->this_item.rating << endl;

    return 1;

}

//Function to return item by keyword (by being passed in an array from the front end)
int hashtable::retrivematch(char *to_find, item * retrieve) {
    if(!to_find) {
        return 0;
    }

    //send keyword to hash function
    int index = hash(to_find);

    node * tmp = hash_table[index];

    //iterate until found keyword match
    while (strcmp(to_find,tmp->this_item.keyword) != 0 && tmp) {
        tmp = tmp->next;

    }

    if (!tmp) {
        return 0;
    }

    //Copy items into retrieve object for client
    retrieve->keyword = new char[strlen(tmp->this_item.keyword)+1];
    strcpy(retrieve->keyword, tmp->this_item.keyword);

    retrieve->description = new char[strlen(tmp->this_item.description)+1];
    strcpy(retrieve->description, tmp->this_item.description);

    retrieve->type = new char[strlen(tmp->this_item.type)+1];
    strcpy(retrieve->type, tmp->this_item.type);

    retrieve->platform = new char[strlen(tmp->this_item.platform)+1];
    strcpy(retrieve->platform, tmp->this_item.platform);

    retrieve->rating = new char[strlen(tmp->this_item.rating)+1];
    strcpy(retrieve->rating, tmp->this_item.rating);

    return 1;
}

//Function to remove item from table by keyword
int hashtable::removeitem(char *to_find) {

    if(!to_find) {
        return 0;
    }
    //send keyword to hash function
    int index = hash(to_find);


    node * tmp = hash_table[index];
    node * last;

    //iterate until found keyword match
    while (strcmp(to_find,tmp->this_item.keyword) != 0 && tmp) {
        last = tmp;
        tmp = tmp->next;

    }

    if (!tmp) {
        return 0;
    }

    //If node is only item or last item, simply delete the node
    if (tmp->next == nullptr) {
        delete tmp;
        return 1;
    }

    //otheriwse link up last to next and delete node
    last->next = tmp->next;
    delete tmp;

    return 1;

}


//Function to display items by type
int hashtable::displaytype(char *to_find) {

}
