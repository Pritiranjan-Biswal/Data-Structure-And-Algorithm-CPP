#include<iostream>
#include<deque>
using namespace std;



int main() {
    deque<int>d;


d.push_back(1);
d.push_front(2);

for(int i:d) {
    cout<<i<<" "<<endl;
}


// d.pop_front();
// cout<<endl;
// for(int i:d) {
//    cout<<i<<" ";
// }

// cout<<d.at(1)<<endl;

// cout<<d.front()<<endl;
// cout<<d.back()<<endl;
// cout<<d.empty();

cout<<d.size();



d.erase(d.begin(), d.begin()+1);
cout<<"now the sizw will be:"<<d.size()<<endl; 






}
