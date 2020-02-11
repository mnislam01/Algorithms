#include <iostream>
using namespace std;


class SelectionSort {
    public:
        void perform_sort(int A[], int array_len) {
            int i, smallest, j, temp;
            for (i = 0; i < array_len; i++) {
                smallest = i;
                for (j = i+1; j < array_len; j++) {
                    if (A[j] < A[smallest]) {
                        smallest = j;
                    }
                }
                if (smallest != i) {
                    temp = A[i];
                    A[i] = A[smallest];
                    A[smallest] = temp;
                }
            }
        }

        void show_array(int A[], int len) {
            for (int i = 0; i < len; i++) {
                cout << A[i] << " ";
            }
        }
};

int main(void) {
    SelectionSort sort;
    int Array[] = {23,7,2,8,43,6,78,2,7890,7,235346,23};
    int array_size = sizeof(Array)/sizeof(int);
    cout << "Before Sorting...";
    sort.show_array(Array, array_size);
    sort.perform_sort(Array, array_size);
    cout << "After Sorting...";
    sort.show_array(Array, array_size);
    return 0;
}
