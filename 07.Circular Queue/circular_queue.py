import array


class Queue:

    def __init__(self):
        self.q_size = 5
        self._data = array.array('b')
        self._tail = 0
        self._head = 0

    def get_tail(self):
        return self._tail

    def get_head(self):
        return self._head

    def enqueue(self, item):
        if (self._tail + 1) % (self.q_size + 1) == self._head:
            print("Queue is full!")
            return

        self._data.insert(self._tail, item)
        self._tail = (self._tail + 1) % (self.q_size + 1)

    def dequeue(self):
        if self._tail == self._head:
            print("Queue is empty")
            return -1

        item = self._data[self._head]
        self._head = (self._head + 1) % (self.q_size + 1)
        return item


if __name__ == "__main__":
    my_queue = Queue()
    
    my_queue.enqueue(1)
    print(f"Tail: {my_queue.get_tail()}")
    my_queue.enqueue(2)
    print(f"Tail: {my_queue.get_tail()}")

    print(f"Begining Head: {my_queue.get_head()}")
    item = my_queue.dequeue()
    print(f"Begining Head: {my_queue.get_head()}")
    item = my_queue.dequeue()
    print(f"Begining Head: {my_queue.get_head()}")
    item = my_queue.dequeue()
