public class stack {
  static final int MaxLimit = 100;
  private int[] data = new int[MaxLimit];
  private int top;

  stack(){
    this.top = 0;
  }

  public void push(int item) {
    if (this.top < stack.MaxLimit) {
      this.data[this.top] = item;
      this.top = this.top + 1;
    } else {
      System.out.println("Stack is full!");
    }
  }

  public int pop() {
    int item;

    if (this.top == 0) {
      System.out.println("Stack is empty!");
      return -1;
    } else {
      this.top = this.top - 1;
      item = this.data[this.top];
    }
    return item;
  }

  public static void main(final String[] args) {
    stack my_stack = new stack();

    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);

    System.out.printf("%d\n", my_stack.pop());
    System.out.printf("%d\n", my_stack.pop());

  }
}