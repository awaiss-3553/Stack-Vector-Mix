#include<iostream>
#include<list>
#include <vector>
#include<queue>
#include<stack>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    stack<int> s;
    for(int val:v){
        s.push(val);
    }
   while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
   }

}
