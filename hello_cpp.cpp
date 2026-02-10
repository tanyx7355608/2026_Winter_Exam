#include<iostream>
using namespace std;
void say_hello(char name[])
{
    std::cout<<"Hello,I am"<<name<<",I am ready for battle!";
}
int main()
{
    char name[10]="shuaige";
    say_hello(name);
    return 0;
}