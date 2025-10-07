#include<iostream>
#include<string>
using namespace std;

void display(string dolist[], int n) {
    cout << endl << "Your TO-DO list is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << dolist[i] << endl;
    }
}

void addtask(string dolist[], int &n) {
    string task;
    cin.ignore(); // to clear leftover newline
    cout << endl << "Enter the task you want to add: ";
    getline(cin, task);
    dolist[n] = task;
    n++;
    display(dolist, n);
}

void deletetask(string dolist[], int &n) {
    int tasknum;
    cout << endl << "Enter the task number you want to delete: ";
    cin >> tasknum;

    if (tasknum < 1 || tasknum > n) {
        cout << "Invalid task number!" << endl;
        return;
    }

    for (int i = tasknum - 1; i < n - 1; i++) {
        dolist[i] = dolist[i + 1];
    }
    n--;
    display(dolist, n);
}

void viewtask(string dolist[], int n) {
    int tasknum;
    cout << endl << "Enter the task number you want to view: ";
    cin >> tasknum;

    if (tasknum < 1 || tasknum > n) {
        cout << "Invalid task number!" << endl;
        return;
    }

    cout << endl << "Task " << tasknum << ": " << dolist[tasknum - 1] << endl;
}

void marktask(string dolist[], int n) {
    int tasknum;
    cout << endl << "Enter the task number you want to mark as completed: ";
    cin >> tasknum;

    if (tasknum < 1 || tasknum > n) {
        cout << "Invalid task number!" << endl;
        return;
    }

    dolist[tasknum - 1] += " (Completed)";
    display(dolist, n);
}

int main() {
    int n;
    cout << "No. of tasks you want to add in your TO-DO list: ";
    cin >> n;

    string dolist[100];
    cin.ignore(); // clear buffer

    for (int i = 0; i < n; i++) {
        cout << "Enter task " << i + 1 << ": ";
        getline(cin, dolist[i]);
    }

    int choice;
    do {
        cout << "\n--- TO-DO LIST MENU ---\n";
        cout << "1. Display all tasks\n";
        cout << "2. Add a task\n";
        cout << "3. Delete a task\n";
        cout << "4. View a task\n";
        cout << "5. Mark a task completed\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: display(dolist, n); break;
            case 2: addtask(dolist, n); break;
            case 3: deletetask(dolist, n); break;
            case 4: viewtask(dolist, n); break;
            case 5: marktask(dolist, n); break;
            case 6: cout << "Exiting..."; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
