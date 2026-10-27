#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> actions;
    string input;

    cout << "Enter text editor actions (type 'done' to finish): "<<endl;
    while (true) {
        cout << "Action: ";
        getline(cin, input);
        if (input == "done")
            break;
        actions.push(input);
    }
    int undoCount;
    cout << "\nHow many undo operations would you like to perform? ";
    cin >> undoCount;
    cin.ignore();
    cout << "\nUndo Operations"<<endl;
    for (int i = 0; i < undoCount; i++) {
        if (!actions.empty()) {
            cout << "Undo: " << actions.top() << endl;
            actions.pop();
        } else {
            cout << "No more actions to undo."<<endl;
            break;
        }
    }
    cout << "\nRemaining Actions"<<endl;
    if (actions.empty()) {
        cout << "No actions remaining."<<endl;
    } else {
        stack<string> temp;
        while (!actions.empty()) {
            temp.push(actions.top());
            actions.pop();
        }

        while (!temp.empty()) {
            cout << temp.top() << endl;
            actions.push(temp.top());
            temp.pop();
        }
    }

    return 0;
}
