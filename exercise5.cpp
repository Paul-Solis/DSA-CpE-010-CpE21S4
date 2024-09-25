#include <iostream>
#include <stack>
#include <string>
using namespace std;

void display(stack<string> PL) {
    while (!PL.empty()) {
        cout << PL.top() << endl;
        PL.pop();
    }
}

int main() {
    stack<string> PL;
    PL.push("C++");
    PL.push("Java");
    PL.push("Python");
   
    cout << "Initial Stack:" << endl;
    display(PL);
   
    cout << endl;

    string newElement = "C#";
    if (PL.size() < 3) {
        PL.push(newElement);
    } else {
        cout << "Stack is full." << endl;
    }
   
    cout<<endl;
   
    cout << "Final Stack (after attempting to add another element):" << endl;
    display(PL);

    return 0;
}
