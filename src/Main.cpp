#include "include/list.h"
#include "include/database.h"


/*
* arg_count is the length of arguments including the program name
* args is an array with all the arguments passed in form terminal.
*/
int main (int arg_count, char *args[]) {
    List simpleList;
    Database data;

    if (arg_count > 1) {
        simpleList.name = string(args[1]);
        simpleList.print_menu();
        data.write(simpleList.list);
        data.read();
    } else {
        cout << "User name not supplied... exiting the program" << endl;
    }
    
    return 0;
}
