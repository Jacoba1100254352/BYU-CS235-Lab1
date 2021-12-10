#ifndef TODO_LIST_INTERFACE_H
#define TODO_LIST_INTERFACE_H

#include <iostream>
#include <string>

using namespace std;

class TodoListInterface {
public:
    TodoListInterface() = default;
    virtual ~TodoListInterface() = default;

    /*
    *   Adds an item to the todo_list with the data specified by the string "_duedate" and the task specified by "_task"
    */
    virtual void add(string _duedate, string _task) = 0;

    /*
    *   Removes an item from the todo_list with the specified task name
    *
    *   Returns 1 if it removes an item, 0 otherwise
    */
    virtual int remove(string _task) = 0;

    /*
    *   Prints out the full todo_list to the console
    */
    virtual void printTodoList() = 0;
    
    /*
    *   Prints out all items of a todo_list with a particular due date (specified by _duedate)
    */
    virtual void printDaysTasks(string _date) = 0;
};

#endif
