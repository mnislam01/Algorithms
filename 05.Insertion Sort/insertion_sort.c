#include <stdio.h>

void show_array(int A[], int len);
void inserstion_sort(int A[], int array_len);
void blank_line(void);

int main(void){
    int Array[] = {23,7,2,8,43,6,78,2,7890,7,235346,23};
    show_array(Array, sizeof(Array)/sizeof(int));
    inserstion_sort(Array, sizeof(Array)/sizeof(int));
    show_array(Array, sizeof(Array)/sizeof(int));
    
}


void inserstion_sort(int A[], int array_len){
    int i, j, key;
    for (i = 1; i < array_len; i++){
        key = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
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