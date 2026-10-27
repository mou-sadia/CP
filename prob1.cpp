#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOpening(char c) {
    return c == '(' || c == '{' || c == '[';
}

bool isClosing(char c) {
    return c == ')' || c == '}' || c == ']';
}

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int main() {
    string expression;
    cout << "Enter a mathematical expression: ";
    getline(cin, expression);

    stack<pair<char, int> > s;
    int totalBrackets = 0;
    int maxDepth = 0;
    int currentDepth = 0;
    bool balanced = true;
    char unmatchedBracket = '\0';
    int unmatchedIndex = -1;

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (isOpening(ch)) {
            s.push({ch, i});
            totalBrackets++;
            currentDepth++;
            if (currentDepth > maxDepth)
                maxDepth = currentDepth;
        } else if (isClosing(ch)) {
            totalBrackets++;
            if (!s.empty() && isMatching(s.top().first, ch)) {
                s.pop();
                currentDepth--;
            } else {
                unmatchedBracket = ch;
                unmatchedIndex = i;
                balanced = false;
                break;
            }
        }
    }

    if (!s.empty() && balanced) {
        balanced = false;
        unmatchedBracket = s.top().first;
        unmatchedIndex = s.top().second;
    }

    cout << "\nTotal number of brackets: " << totalBrackets << endl;
    cout << "Maximum nesting depth: " << maxDepth << endl;

    if (balanced) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
        cout << "First unmatched bracket: '" << unmatchedBracket << "' at index " << unmatchedIndex << endl;
    }

    return 0;
}
