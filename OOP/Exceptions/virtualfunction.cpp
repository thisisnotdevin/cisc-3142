#include <string_view>
#include <iostream>
using namespace std;

class Base
{
protected:
    int m_value;

public:
    Base(int value){
      m_value=value;
    }

    string getName() const {
      return "Base"; 
      }
    int getValue() const {
      return m_value; 
      }
};

class Derived: public Base
{
public:
    Derived(int value): Base{ value }
    {
    }

    string getName() const {
      return "Derived";
      }
    int getValueDoubled() const {
      return m_value * 2;
      }
};


//Pointers, references, and derived classes
// int main()
// {
//     Derived derived(5);
//     std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';

//     Derived rDerived= derived;
//     std::cout << "rDerived is a " << rDerived.getName() << " and has value " << rDerived.getValue() << '\n';

//     Derived* pDerived= &derived ;
//     std::cout << "pDerived is a " << pDerived->getName() << " and has value " << pDerived->getValue() << '\n';

//     return 0;
// }

//However, since Derived has a Base part, a more interesting question is whether C++ will let us set a Base pointer or reference to a Derived object. It turns out, we can!

int main()
{
    Derived derived(5);

    // These are both legal!
    Base& rBase=derived;
    Base* pBase=&derived;

    cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';
    cout << "rBase is a " << rBase.getName() << " and has value " << rBase.getValue() << '\n';
    cout << "pBase is a " << pBase->getName() << " and has value " << pBase->getValue() << '\n';

    return 0;
}

//Note:It turns out that because rBase and pBase are a Base reference and pointer, they can only see members of Base (or any classes that Base inherited). So even though Derived::getName() shadows (hides) Base::getName() for Derived objects, the Base pointer/reference can not see Derived::getName(). Consequently, they call Base::getName(), which is why rBase and pBase report that they are a Base rather than a Derived.

//Note that this also means it is not possible to call Derived::getValueDoubled() using rBase or pBase. They are unable to see anything in Derived.