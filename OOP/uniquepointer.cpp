#include <iostream>
#include<memory>

using namespace std;

class Myclass{
  public:
    Myclass(){
      cout<<"Constructor invoked"<<endl;
    }

    ~Myclass(){
      cout<<"Destructor invoked"<<endl;
    }
};
int main() {
   int x=25;
   int *ptr=&x;
   cout<<*ptr<<endl; 
 unique_ptr<int> unPtr1=make_unique<int>(25);
 cout<<"unPtr1: "<<*unPtr1<<endl;


//  unique_ptr<int> unPtr2=unPtr1;

//   unique_ptr<int> unPtr2=move(unPtr1);
//   cout<<"unPtr2: "<<*unPtr2<<endl;

//   cout<<"unPtr1: "<<*unPtr1<<endl;

  unique_ptr<Myclass>unPtr=make_unique<Myclass>();
cout<<"...................."<<endl;

} 