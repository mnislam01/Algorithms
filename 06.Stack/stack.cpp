#include <iostream>
#define MAX_LIMIT 100
using namespace std;


class Stack{
    private:
        int top;
        int data[MAX_LIMIT];

    public:
        Stack(){
            top = 0;
        }

        void push(int item){
            if (top < MAX_LIMIT ) {
                data[top] = item;
                top = top + 1;
            } else
            {
                cout << "Stack is full!" << endl;
            }
        }

        int pop(){
            int item;
            if (top == 0) {
                cout << "Stack is emptu" << endl;
                return -1;
            } else
            {
                top = top - 1;
                item = data[top];
            }
            return item;
        }
};


int main(void){
    Stack my_stack;

    int item;

    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);

    item = my_stack.pop();
    cout << item << endl;

    item = my_stack.pop();
    cout << item << endl;

    return 0;
}