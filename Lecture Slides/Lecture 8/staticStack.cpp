#include <iostream>
#define MAX 5 // Define maximum size of the stack

class StaticStack {
private:
    int arr[MAX];
    int top;

public:
    StaticStack() { // Constructor initializes top to -1 (empty stack)
        top = -1;
    }

    bool isFull() {
        return top == MAX - 1; // Stack is full when top reaches the last index
    }

    bool isEmpty() {
        return top == -1; // Stack is empty when top is -1
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "Stack Overflow!" << std::endl;
            return;
        }
        top+=1;
        arr[top] = value; // Increment top and insert value
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow!" << std::endl;
            return;
        }
        top--; // Simply decrement the top pointer
        
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty!" << std::endl;
            return -1;
        }
        return arr[top]; // Return the top element
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty!" << std::endl;
            return;
        }
        std::cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
};

int main() {
    StaticStack s;
    //s.push(1);
    //s.push(20);
    //s.push(30);

   // s.display(); // Output: 30 20 10

    std::cout << "Top element: " << s.peek() << std::endl; // Output: 30

   // s.pop();
   // s.display(); // Output: 20 10

    return 0;
}

