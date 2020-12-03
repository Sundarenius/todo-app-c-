#include "include/list.h"


/*
* arg_count is the length of arguments including the program name
* args is an array with all the arguments passed in form terminal.
*/
int main (int arg_count, char *args[]) {
    if (arg_count > 1) {
        List simpleList;
        simpleList.name = string(args[1]);
        simpleList.print_menu();
    } else {
        cout << "User name not supplied... exiting the program" << endl;
    }
    
    return 0;
}
