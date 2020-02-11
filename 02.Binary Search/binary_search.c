#include <stdio.h>

int binary_search(int array[], int size, int var);

int main()
{
    int numbers[] = {10,20,30,40,50,60,70,80,90,100};
    int find = 70;

    if(binary_search(numbers, sizeof(numbers)/4, find)){
        printf("Found\n");
    }
    else{
        printf("Not found\n");
    }

    return 0;
}


int binary_search(int array[], int size, int var){

    int found = 0;
    int middle;
    int upper = size-1;
    int lower = 0;

    while(!found){
        middle = (upper + lower) / 2;
        printf("middle: %d\n", middle);

        if (array[middle] == var) {
            printf("%d at %d Matched\n", var, middle);
            found = 1;
        }

        else if (array[middle] > var) {
            printf("Setting upper\n");
            upper = middle - 1;
        }
        else{
            printf("Setting lower\n");
            lower = middle + 1;
        }
    }

    return found;
}
