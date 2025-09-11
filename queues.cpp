// 

// #include <iostream>
// using namespace std;

// #define MAX 100

// class Circular_Queue {
//     int arr[MAX];
//     int front, rear;
// public:
//     Circular_Queue() { front = -1; rear = -1; }

//     bool isEmpty() {
//         return front == -1;
//     }

//     bool isFull() {
//         return ((rear + 1) % MAX) == front;
//     }

//     void enqueue(int x) {
//         if (isFull()) {
//             cout << "Circular_Queue Overflow!\n";
//             return;
//         }
//         if (isEmpty()) {
//             front = rear = 0;
//         } else {
//             rear = (rear + 1) % MAX;
//         }
//         arr[rear] = x;
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Circular_Queue Underflow!\n";
//             return -1;
//         }
//         int value = arr[front];
//         if (front == rear) {
//             front = rear = -1; // Queue is now empty
//         } else {
//             front = (front + 1) % MAX;
//         }
//         return value;
//     }

//     void peek() {
//         if (isEmpty()) {
//             cout << "Circular_Queue is empty.\n";
//             return;
//         }
//         cout << "Front element: " << arr[front] << endl;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Circular_Queue is empty.\n";
//             return;
//         }
//         cout << "Circular_Queue elements: ";
//         int i = front;
//         while (true) {
//             cout << arr[i] << " ";
//             if (i == rear) break;
//             i = (i + 1) % MAX;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Circular_Queue q,a,b;
//     cout << "Enter the length of the queue (max 100): ";
//     int n;
//     cin >> n;
//     cout << "Enter " << n << " elements:\n";
//     for(int i=0;i<n;i++){
//         int value;
//         cin >> value;
//         q.enqueue(value);
//     }
//     q.display();
//     for(int i=0;i<n/2;i++){
//         int value;
//         value = q.dequeue();
//         a.enqueue(value);
//     }
//     for(int i=n/2;i<n;i++){
//         int value;
//         value = q.dequeue();
//         b.enqueue(value);
//     }
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             int value;
//             value = a.dequeue();
//             q.enqueue(value);
//         }
//         else{
//             int value;
//             value = b.dequeue();
//             q.enqueue(value);
//         }
//     }
//     q.display();
//     return 0;
// }


#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int>q;
public:
    void push(int val);
    void pop();
    int top();
    bool empty();
};

// Push operation
void Stack::push(int val)
{
    int s = q.size();

    q.push(val);

    for (int i=0; i<s; i++)
    {
        q.push(q.front());

        q.pop();
    }
}

void Stack::pop()
{
    if (q.empty())
        cout << "No elements\n";
    else
        q.pop();
}

int  Stack::top()
{
    return (q.empty())? -1 : q.front();
}

bool Stack::empty()
{
    return (q.empty());
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    cout << s.top() << endl;
    s.pop();
    s.push(30);
    s.pop();
    cout << s.top() << endl;
    return 0;
}