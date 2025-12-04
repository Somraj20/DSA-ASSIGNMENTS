#include <iostream>
using namespace std;

class Queue {
public:
    int front, rear, maxsize;
    int *arr;

    Queue(int size) {
        maxsize = size;
        front = rear = -1;
        arr = new int[maxsize];
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == maxsize - 1);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
        cout << "Inserted " << x << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        int val = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return val;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue Empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue Empty\n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int choice, value;
    Queue q(5);

    while (true) {
        cout << "\n--- SIMPLE QUEUE MENU ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. isEmpty\n6. isFull\n7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                cout << "Deleted: " << q.dequeue() << endl;
                break;
            case 3:
                cout << "Front: " << q.peek() << endl;
                break;
            case 4:
                q.display();
                break;
            case 5:
                cout << (q.isEmpty() ? "Empty" : "Not Empty") << endl;
                break;
            case 6:
                cout << (q.isFull() ? "Full" : "Not Full") << endl;
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid Option\n";
        }
    }
}
