#include <bits/stdc++.h>
using namespace std;

    // driver code
int main(){
    int arr[6] = {10, 2, 4, 8, 6, 9 };
 
    // defining priority queue
    // -> Transform in a min heap priority_queue<int, vector<int>, greater<int> > pq(
        //arr, arr + 5);

    //default pq (max heap)
    priority_queue<int> pq;
 
    // printing array
    cout << "Array: ";
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
 
    // printing priority queue
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }

    return 0;
}