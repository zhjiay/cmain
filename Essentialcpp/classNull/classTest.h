#include<vector>
#include<string>
using namespace std;

class Stack{
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