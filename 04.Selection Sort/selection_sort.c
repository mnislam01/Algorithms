#include <stdio.h>

void blank_line(void);
void selection_sort(int A[], int array_len);
void show_array(int A[], int len);

int main(void) {

    int Array[] = {23,7,2,8,43,6,78,2,7890,7,235346,23};
    printf("Before Sorting...\n");
    show_array(Array, sizeof(Array)/sizeof(int));
    selection_sort(Array, sizeof(Array)/sizeof(int));
    printf("After Sorting...\n");
    show_array(Array, sizeof(Array)/sizeof(int));
    return 0;
}


void selection_sort(int A[], int array_len) {
    int i, smallest, j, temp;
    for (i = 0; i < array_len-1; i++) {
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

void show_array(int A[], int len){
    int i;
    for (i = 0; i < len; i++){
        printf("%d ", A[i]);
    }
    blank_line();
}

void blank_line(void){
    printf("\n");
}