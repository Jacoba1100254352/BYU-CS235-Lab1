#ifndef TODO_LIST_H
#define TODO_LIST_H

#include <iostream>
#include <string>
#include "TodoListInterface.h"
#include <fstream>
#include <vector>

using namespace std;

class TodoList : public TodoListInterface {
public:
    vector <string> tasks;
    //ADD TO FILE!!!
    TodoList();
    ~TodoList() override;

    /*
    *   Adds an item to the todo_list with the data specified by the string "_duedate" and the task specified by "_task"
    */
    void add(string, string) override;

    /*
    *   Removes an item from the todo_list with the specified task name
    *
    *   Returns 1 if it removes an item, 0 otherwise
    */
    int remove(string) override;

    /*
    *   Prints out the full todo_list to the console
    */
    void printTodoList() override;

    /*
    *   Prints out all items of a todo_list with a particular due date (specified by _duedate)
    */
    void printDaysTasks(string) override;
};

#endif
