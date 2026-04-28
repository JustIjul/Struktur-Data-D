#include <iostream>
#include <stack>
#include <string>
using namespace std;

int hitungPrioritas(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

void infixKePostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            postfix += c;
        }
        else if (c == '(') {
            s.push(c);
        }
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty()) s.pop();
        }
        else {
            while (!s.empty() && hitungPrioritas(c) <= hitungPrioritas(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c); 
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << "Hasil Postfix: " << postfix << endl;
}

int main() {
    string ekspresi = "a+(2*b^3)/(f-g)+d*h";
    cout << "Ekspresi Infix : " << ekspresi << endl;
    infixKePostfix(ekspresi);
    return 0;
}