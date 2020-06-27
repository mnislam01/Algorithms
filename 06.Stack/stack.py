class Stack(object):
    def __init__(self):
        self.stack = []
        self.top = 0

    def push(self, data):
        if self.top < 100:
            self.stack.append(data)
            self.top += 1
        else:
            print("Stack is full!")

    def pop(self):
        if self.top is 0:
            print("Stack is empty!")
            return -1
        else:
            self.top -= 1
            return self.stack[self.top]

    def __str__(self):
        return f"{[i for i in self.stack]}"


s = Stack()
s.push(1)
s.push(2)
s.push(3)

print(s.pop())
print(s.pop())