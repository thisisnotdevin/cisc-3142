#include <iostream>
using namespace std;

template<class T, class R> 
R add(T x, R y){return x+y;} //Try changing the return type

int main() {
  cout<<add(10,15.7)<<endl;

} 