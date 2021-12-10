#include <string>
#include "TodoList.h"

using namespace std;

/***********
*   MAIN   *
***********/

int main([[maybe_unused]] int argc, char* argv[]) {
    TodoList myList;
    string firstarg = argv[1];
    if(firstarg== "add" ) {
        string date = argv[2];
        string task = argv[3];
        myList.add(date, task);
    } else if(firstarg == "printDay" ) {
        myList.printDaysTasks(argv[2]);
    } else if(firstarg == "printList" ) {
        myList.printTodoList();
    } else if(firstarg == "remove") {
        string task = argv[2];
        myList.remove(task);
    }
    return 0;
}
