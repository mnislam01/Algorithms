#include <iostream>
using namespace std;


class InsertionSort {
    public:
        void perform_sort(int A[], int array_len) {
            int i, j, key;
            for (i = 1; i < array_len; i++) {
                key = A[i];
                j = i - 1;
                while(j >= 0 && A[j] > key){
                    A[j+1] = A[j];
                    j--;
                }
                A[j+1] = key;
            }
        }

        void show_array(int A[], int len) {
            for (int i = 0; i < len; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
        }
};


int main(void){
    InsertionSort sort;
    int Array[] = {23,7,2,8,43,6,78,2,7890,7,235346,23};
    int array_size = sizeof(Array)/sizeof(int);
    cout << "Before Sorting..." << endl;
    sort.show_array(Array, array_size);
    sort.perform_sort(Array, array_size);
    cout << "After Sorting..." << endl;
    sort.show_array(Array, array_size);
    return 0;
}