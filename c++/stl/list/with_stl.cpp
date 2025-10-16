#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> dll;
    //insert at end
    dll.push_back(10);
    dll.push_back(20);
    dll.push_back(30);

    //insert element at front
    dll.push_front(5);
    dll.push_front(1);

    for(int i:dll){
        cout<<i<<" ";
    }
    cout<<endl;
    dll.pop_back();
    dll.pop_front();

    for(int i:dll){
        cout<<i<<" ";
    }
    
    return 0;

}