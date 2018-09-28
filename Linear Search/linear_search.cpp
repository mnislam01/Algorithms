#include <iostream>
using namespace std;

bool linear_search(int List[], int SizeOfList, int var){
    bool result = false;
    for(int i = 0; i < SizeOfList; i++){
        if (List[i] == var) {
            cout << var << " at " << i << " Matched" << endl;
            result = true;
        }
        else{
            cout << var << " at " << i << " Not matched" << endl;
        }
    }

    return result;
}

int main()
{
    int IntList[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int Find = 20;

    if(linear_search(IntList, sizeof(IntList)/4, Find)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}
