#include <iostream>
using namespace std;
#define MAX 1000

class Stack {
    int top;
public:
    char a[MAX];
    Stack() { top = -1; }
    bool push(char x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return false;
        }
        a[++top] = x;
        return true;
    }
    char pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        }
        return a[top--];
    }
    char peek() {
        if (top < 0) {
            return 0;
        }
        return a[top];
    }
    bool isEmpty() {
        return (top < 0);
    }
};

// bool isBalanced(string s1) {
//     Stack s;
//     int n = s1.size();
//     for (int i = 0; i < n; i++) {
//         if (s1[i] == '{' || s1[i] == '[' || s1[i] == '(') {
//             s.push(s1[i]);
//         } else if (s1[i] == '}' || s1[i] == ']' || s1[i] == ')') {
//             if (s.isEmpty()) return false;
//             char c = s.pop();
//             if ((s1[i] == '}' && c != '{') ||
//                 (s1[i] == ']' && c != '[') ||
//                 (s1[i] == ')' && c != '(')) {
//                 return false;
//             }
//         }
//     }
//     return s.isEmpty();
// }

// int main() {
//     string s1 = "{[()]}";
//     if (isBalanced(s1))
//         cout << "Balanced";
//     else
//         cout << "Not Balanced";
//     return 0;
// }

//QWrite a program to convert infix into postfix expression
// int precedence(char c) {
//     if(c == '^') return 3;
//     else if(c == '*' || c == '/') return 2;
//     else if(c == '+' || c == '_') return 1;
//     else return -1;
// }

// string infixToPostfix(string s){
//     Stack st;
//     string result;
//     for(int i = 0 ; i < s.size(); i++){
//         char c = s[i];
//         if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
//             result += c;
//         }
//         else if(c == '('){
//             st.push(c);
//         }
//         else if(c == ')'){
//             while(!st.isEmpty() && st.peek() != '('){
//                 result += st.pop();
//             }
//             if(!st.isEmpty()) st.pop();
//         }
//         else{
//             while(!st.isEmpty() && precedence(st.peek()) >= precedence(c)){
//                 result += st.pop();
//             }
//             st.push(c);

//         }
        

//     }
//     while(!st.isEmpty()){
//         result += st.pop();
//     }
//     return result;
// }

// int main() {
//     string s = "a+b*(c^d-e)^(f+g*h)-i";
//     cout << infixToPostfix(s);
//     return 0;
// }

// Write a program for the evaluation of a Postfix expression.
int evaluatePostfix(string s){
    Stack st;
    for(int i = 0 ; i < s.size(); i++){
        char c = s[i];
        if(c >= '0' && c <= '9'){
            st.push(c - '0');
        }
        else{
            int val1 = st.pop();
            int val2 = st.pop();
            switch(c){
                case '+':
                    st.push(val2 + val1);
                    break;
                case '-':
                    st.push(val2 - val1);
                    break;
                case '*':
                    st.push(val2 * val1);
                    break;
                case '/':
                    st.push(val2 / val1);
                    break;
            }
        }
    }
    return st.pop();
}

int main() {
    string s = "231*+9-";
    cout << evaluatePostfix(s);
    return 0;
}