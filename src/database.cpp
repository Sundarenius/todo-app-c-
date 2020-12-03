#include "include/database.h"

string fileName = "list.txt";

void Database::write (vector<string> list) {

    ofstream db;
    db.open("db/" + fileName);

    if (db.is_open()) {
        for (int i = 0; i < (int)list.size(); i++) {
            db << list[i] << endl;
        }
        cout << "Created a new file " << fileName << endl;;
    } else {
        cout << "Can not open file for writing";
    }

    db.close();
}


void Database::read () {
    string line;
    ifstream db;
    db.open("db/" + fileName);

    if (db.is_open()) {
        while (getline(db, line, '\n')) {
            cout << line << endl;
        }
    } else {
        cout << "Could not open file for reading" << endl;
    }

    db.close();
}
