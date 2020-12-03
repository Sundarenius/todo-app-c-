#include "include/list.h"

void List::print_menu () {
    int choice;

    cout << "************" << endl;
    cout << "1. Print list" << endl;
    cout << "2. Add to list" << endl;
    cout << "3. Delete from list" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choise then press return: ";

    cin >> choice;

    if (choice == 4) {
        exit(0);
    } else if (choice == 1) {
        print_list();
    } else if (choice == 2) {
        add_item();
    } else if (choice == 3) {
        delete_item();
    } else {
        cout << "Sorry choice not implemented yet" << endl;
    }
}

void List::add_item () {
    cout << endl << endl;
    cout << "*** Add item ***" << endl;
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added an item to the list" << endl;
    cin.clear();

    print_menu();
}

void List::delete_item () {
    cout << "*** Delete item ****" << endl;
    cout << "Select an index number to delete" << endl;
    if (list.size()) {
        for (int i = 0; i < (int)list.size(); i++) {
            cout << i << ": " << list[i] << endl;
        }
    } else {
        cout << "No items to delete" << endl;
    }

    print_menu();
}

void List::print_list() {
    cout << endl << endl;
    cout << "*** Printing list ***" << endl;

    for (int list_index = 0; list_index < (int)list.size(); list_index++) {
        cout << " * " << list[list_index] << endl;
    }
}