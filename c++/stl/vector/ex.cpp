#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(3,0);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"vector elments after pop";
     for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    cout<<"access elemnt from index using at";
    cout<<v.at(2)<<endl;

    if(v.empty()){
        cout<<"vector is empty";
    }
    else{
        cout<<"vector is not empty"
    }
    return 0;
}