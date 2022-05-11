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

shared_ptr<Myclass>shPtr1=make_shared<Myclass>();

  cout<<"shared count: "<<shPtr1.use_count()<<endl;

  {shared_ptr<Myclass>shPtr2=shPtr1;

  cout<<"shared count now: "<<shPtr1.use_count()<<endl;
    }
   
   cout<<"Finally shared count: "<<shPtr1.use_count()<<endl;

   cout<<"...................."<<endl;

} 