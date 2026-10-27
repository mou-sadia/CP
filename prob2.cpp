#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> vipQueue;
    queue<string> regularQueue;

    vipQueue.push("Alice");
    vipQueue.push("Bob");
    vipQueue.push("Eve");

    regularQueue.push("Charlie");
    regularQueue.push("Diana");
    regularQueue.push("Frank");
    regularQueue.push("Grace");

    cout << "Enter new customers (type 'exit' as name to stop): "<<endl;
    while (true) {
        string name, type;
        cout << "\nEnter customer name: ";
        getline(cin, name);
        if (name == "exit")
            break;

        cout << "Enter customer type (VIP or Regular): ";
        getline(cin, type);

        if (type == "VIP" || type == "vip") {
            vipQueue.push(name);
        } else if (type == "Regular" || type == "regular") {
            regularQueue.push(name);
        } else {
            cout << "Invalid type. Please enter 'VIP' or 'Regular'.\n";
        }
    }

    cout << "\n--- Serving Customers ---\n";

    while (!vipQueue.empty() || !regularQueue.empty()) {
        if (!vipQueue.empty()) {
            cout << "Serving VIP: " << vipQueue.front() << endl;
            vipQueue.pop();
        }
        if (!regularQueue.empty()) {
            cout << "Serving Regular: " << regularQueue.front() << endl;
            regularQueue.pop();
        }
    }

    cout << "\nFinal Queue Status"<<endl;
    cout << "VIP customers remaining: " << vipQueue.size() << endl;
    cout << "Regular customers remaining: " << regularQueue.size() << endl;
    cout << "VIP queue is " << (vipQueue.empty() ? "empty" : "not empty") << endl;
    cout << "Regular queue is " << (regularQueue.empty() ? "empty" : "not empty") << endl;

    return 0;
}
