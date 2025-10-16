#include<iostream>

#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(5);

    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

}