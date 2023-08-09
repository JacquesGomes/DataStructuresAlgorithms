#include <bits/stdc++.h>
using namespace std;

int main(){

    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);

    cout << gquiz.front()<< "\n";
    cout << gquiz.back()<< "\n";
    gquiz.pop_back();
    gquiz.pop_front();
    cout << gquiz.front()<< "\n";
    cout << gquiz.back() << "\n";
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.max_size() : " << gquiz.max_size();
 
    cout << "\ngquiz.at(2) : " << gquiz.at(1);
 
    return 0;
}