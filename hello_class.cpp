#include<iostream>
#include<string> 
using namespace std;

class robot {
public:
    string name;
    
    void say_hello() 
    {
        cout << "Hello, I am " << name << ", I am ready for battle!" << endl;
    }
};

int main() {
    robot person1;
    person1.name = "shuaige"; 
    person1.say_hello();       
    
    return 0;
}