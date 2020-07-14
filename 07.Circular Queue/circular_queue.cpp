#include <iostream>
#define Q_SIZE 5
using namespace std;



class Queue{
    private:
        int data[Q_SIZE + 1];
        int tail, head;

    public:
        Queue(){
            this->tail = 0;
            this->head = 0;
        }

        int get_tail(){
            return this->tail;
        }

        int get_head(){
            return this->head;
        }

        void enqueue(int item){
            if ((this->tail +1) % (Q_SIZE + 1) == this->head)
            {
                cout << "Queue if full!" << endl;
                return;
            }

            this->data[tail] = item;
            this->tail = (this->tail + 1) % (Q_SIZE + 1);
        }

        int dequeue(){
            int item;
            if (this->tail == this->head)
            {
                cout << "Queue is Empty!" << endl;
            }
            item = this->data[this->head];
            this->head = (this->head + 1) % (Q_SIZE + 1);
            return item;
        }
};


int main()
{
    Queue my_queue; int item;

    my_queue.enqueue(1);
    cout << "Tail: " << my_queue.get_tail() << endl;
    my_queue.enqueue(2);
    cout << "Tail: " << my_queue.get_tail() << endl;

    cout << "Begginging Head: " << my_queue.get_head() << endl;
    item = my_queue.dequeue();
    cout << "Begginging Head: " << my_queue.get_head() << endl;
    item = my_queue.dequeue();
    cout << "Begginging Head: " << my_queue.get_head() << endl;
    item = my_queue.dequeue();

    return 0;
}