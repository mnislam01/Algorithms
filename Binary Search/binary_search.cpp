#include <iostream>
using namespace std;

bool binary_search(int List[], int SizeOfList, int var){
    bool found = false;
    int middle, upper, lower;
    upper = SizeOfList - 1;
    lower = 0;
    while(!found){
        middle = (upper + lower) / 2;

        if (List[middle] == var) {
            cout << var << " at " << middle << " Matched" << endl;
            found = true;
        }
        else if (List[middle] > var) {
            upper = middle - 1;
        }
        else{
            lower = middle + 1;
        }
        
    }

    return found;
}

int main()
{
    int IntList[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int Find = 70;

    if(binary_search(IntList, sizeof(IntList)/4, Find)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}
