#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    int *p;
    Test(int, int);
    Test(const Test &obj);
    void setValue(int, int);
    void display()
    {
        cout << "a is: " << a << " ,value of p is: " << *p << endl;
    }
};

Test::Test(int x, int ptrval)
{
    a = x;
    *p = ptrval;
}

Test::Test(const Test &t1)
{
    a = t1.a;
    // p=t1.p; //this is wrong as both the object will point to the same value, shallow copy
    p = new int; // deep copy, so different object will point to different heap memory
}

void Test::setValue(int x, int ptrVal)
{
    a = x;
    *p = ptrVal;
}

int main()
{
    Test t1(5, 30);
    t1.display();
    Test t2(t1); // calling copy constructor
    t2.display();

    // changing t2 values
    t2.setValue(10, 50);
    t2.display();
    t1.display();
    return 0;
}