#include "TodoList.h"

///   Constructor   ///
TodoList::TodoList(){
    ifstream infile("TODOLIST.txt");
    string line;
    if (infile.is_open()) {
        while(getline(infile,line)) {
            tasks.push_back(line);
        }
        infile.close();
    }
}

///   Destructor   ///
TodoList::~TodoList(){
    ofstream outfile;
    outfile.open("TODOLIST.txt", ofstream::out | ofstream::trunc);
    for(auto & task : tasks) {
        outfile << task << endl;
    }
    outfile.close();
}

///   TodoList Manipulations   ///
void TodoList::add(string _duedate, string _task) {
    tasks.push_back(_duedate + " " + _task);
    cout << "Successfully Added!" << endl;
}

int TodoList::remove(string _task) {
    bool foundTask = false;
    for(int i = 0; i < tasks.size(); i++) {
        if(tasks[i].find(_task) != -1){
            tasks.erase(tasks.begin() + i);
            foundTask = true;
        }
    }
    if(!foundTask) {
        cout << "Bruh, no task here" << endl;
    }else {
        cout << "We got 'em!" << endl;
    }
    return 0;
}

///   TodoList Prints   ///
void TodoList::printTodoList() {
    for(auto & task : tasks) {
        cout << task << endl;
    }
}

void TodoList::printDaysTasks(string _date) {
    for(auto & task : tasks) {
        if(task.find(_date) != -1) {
            cout << task << endl;
        }
    }
}
