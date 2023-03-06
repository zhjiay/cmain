#include<vector>
#include<string>
// #include"classTest.h"
using namespace std;

class Stack
{
private:
    vector<string> _stack;
public:
    Stack();
    ~Stack();

    bool push(const string&);
    bool pop(string &elem);
    bool peek(string &elem);

    bool empty();
    bool full();

    int size(){
        return _stack.size();
    }
};

Stack::Stack(/* args */)
{
}

Stack::~Stack()
{
}

inline bool Stack::empty(){
    return _stack.empty();
}

inline bool Stack::full(){
    return _stack.size()==_stack.max_size();
}

bool Stack::push(const string &s){
    if(full()){
        return false;
    }else{
        _stack.emplace_back(s);
    }
    return true;
}

bool Stack::peek(string &s){
    if(empty()) return false;
    s=_stack.back();
    return true;
}

bool Stack::pop(string &s){
    if(empty()) return false;
    s=_stack.back();
    _stack.pop_back();
    return true;
}