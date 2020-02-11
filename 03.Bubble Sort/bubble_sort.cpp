#include <iostream>
using namespace std;


class BubbleSort {
    public:
        void perform_sort(int A[], int array_len) {
            int i, j, temp;
            for (i = 0; i < array_len; i++) {
                for (j = 0; j < array_len-i-1; j++){
                    if (A[j] > A[j+1]) {
                        temp = A[j];
                        A[j] = A[j+1];
                        A[j+1] = temp;
                    }
                }
            }
        }

        void show_array(int A[], int len) {
            for (int i = 0; i < len; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
        }
};

int main(void) {
    BubbleSort sort;
    int Array[] = {23,7,2,8,43,6,78,2,7890,7,235346,23};
    int array_size = sizeof(Array)/sizeof(int);
    cout << "Before Sorting..." << endl;
    sort.show_array(Array, array_size);
    sort.perform_sort(Array, array_size);
    cout << "After Sorting..." << endl;
    sort.show_array(Array, array_size);
    return 0;
}
