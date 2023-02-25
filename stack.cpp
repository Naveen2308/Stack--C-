#include<iostream>
#include<stack>
using namespace std;
void printing(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}
int main(){
    stack<int>stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    cout<<"stack size:"<<stack1.size()<<endl;
    printing(stack1);
    

}