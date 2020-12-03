#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database {
    private:
    // Private members
    protected:
    // protected members
    public:
    // public members

    Database () {
        // Constructor
    }

    ~Database () {
        // deconstructor
    }
    string name;

    void write(vector<string> list);
    void read();
};
