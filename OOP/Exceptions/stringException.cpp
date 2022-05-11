#include <iostream>
using namespace std;

double division(int, int);

int main(){
  int x=50;
  int y=0;
  double z;

  try{
    z=division(x,y);
    cout<<z<<endl;
  }catch(const char* msg){
    cout<<msg<<endl;
  }
  
}

double division(int a, int b){
  if (b==0){
    throw "Division by zero exception";
  }
  return a/b;
}