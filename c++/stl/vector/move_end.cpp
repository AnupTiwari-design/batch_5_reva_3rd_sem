#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {0,2,0,0,3,0,1};
    int count = 0; // count of zeros

    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) == 0) {
            count++;
        } 
        else if (count > 0) {
            int temp = v[i];
            v[i] = 0;
            v[i - count] = temp;
        }
    }

    cout << "After moving zeros to end: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}