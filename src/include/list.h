#include <iostream>
#include <vector>
using namespace std;

class List {
    private:
    // Private members
    protected:
    // protected members
    public:
    // public members

    List () {
        // Constructor
    }

    ~List () {
        // deconstructor
    }

    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};
