#include <iostream>
#include "Merge.h"

using namespace std;

int main (){

    int arr[7] = {2,3,4,1,5,6,7};
    merge_sort(arr, 0, 6);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}