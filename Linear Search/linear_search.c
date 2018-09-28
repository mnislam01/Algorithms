#include <stdio.h>

int linear_search(int array[], int size, int var);

int main()
{
    int numbers[] = {10,20,30,40,50,60,70,80,90,100};
    int find = 20;

    if(linear_search(numbers, sizeof(numbers)/4, find)){
        printf("Found\n");
    }
    else{
        printf("Not found\n");
    }

    return 0;
}


int linear_search(int array[], int size, int var){

    int i, found = 0;

    for (i = 0; i < size; i++){
        if(array[i] == var){
            printf("%d at %d Matched\n", var, i);
            found = 1;
        }
        else{
            printf("%d at %d Not matched\n", var, i);
        }
    }
    return found;
}
