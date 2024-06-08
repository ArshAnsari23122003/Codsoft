#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Task {
    string description;
    bool completed;

    Task(const string& task_name) : description(task_name), completed(false) {}
};

class TodoList {
private:
    vector<Task> todo;

public:
	/* To add new element in ToDo List*/
    void addtoList(const string& task_name) {
        todo.push_back(Task(task_name));
        cout << "Task added successfully to List.\n";
    }
    
	/* To view all elements of ToDo List*/
    void viewList() const {
        cout << "Tasks:\n";
        for (size_t i = 0; i < todo.size(); ++i) {
            cout << i + 1 << ". " << todo[i].description;
            if (todo[i].completed) {
                cout << " (You have marked it as Completed.)";
            }
            cout << "\n";
        }
    }
    
	/* To Mark as Completed in ToDo List*/
    void markCompleted(size_t index) {
        if (index >= 1 && index <= todo.size()) {
            todo[index - 1].completed = true;
            cout << "Task marked as completed.\n";
        } else {
            std::cout << "Invalid index.\n";
        }
    }
	/* To remove element from ToDo List*/
    void removeTask(size_t index) {
        if (index >= 1 && index <= todo.size()) {
            todo.erase(todo.begin() + index - 1);
            cout << "Task deleted successfully.\n";
        } else {
            cout << "Invalid index.\n";
        }
    }
};

int main() {
    TodoList todoID;
    int option;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. Mark Task as Completed\n";
        cout << "3. Display Tasks\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1: {
                string details;
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, details);
                todoID.addtoList(details);
                break;
            }
            case 2:{
                size_t taskIndex;
                cout << "Enter task index to mark as completed: ";
                cin >> taskIndex;
                todoID.markCompleted(taskIndex);
                break;
            }
            case 3: 
			todoID.viewList();
                break;
            case 4: {
                size_t taskIndex;
                cout << "Enter task index to remove: ";
                cin >> taskIndex;
                todoID.removeTask(taskIndex);
                break;
            }
            case 5:
                cout << "Exiting from program.\n";
                break;
            default:
                cout << "Invalid choice of operation. Please choose from the above options.\n";
        }
    } while (option != 5);

    return 0;
}

