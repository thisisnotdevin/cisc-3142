#include <iostream>
#include<string>

using namespace std;

class Printer{
  string _name;
  int _availablePapers;

  public:
    Printer(string name, int paper){
        _name=name;
        _availablePapers=paper;
    }

    void print(string txtdoc){
      cout<<"test doc length is "<<txtdoc.length()<<endl;
      int requiredPaper=txtdoc.length()/10; 

      if(requiredPaper>_availablePapers)
        //throw "Not enough paper";
        throw 101;
      
      cout<< "Printing..."<<txtdoc<<endl;

      _availablePapers-=requiredPaper;
      cout<<"Available papers: "<<_availablePapers<<endl;
      cout <<endl;

      
    }
};
int main() {
  Printer myPrinter("HP laserjet 1234",10);
  
  try{
     myPrinter.print("My name is Devin. I teach C++ at the Brooklyn College");
     myPrinter.print("My name is Devin. I teach C++ at the Brooklyn College");
     myPrinter.print("My name is Devin. I teach C++ at the Brooklyn College");
  }
 catch(char const* txtException){
   cout<<"Exception: "<<txtException<<endl;
 }
 

  //  catch(int intException){
  //   cout<<"Exception: "<<intException<<endl;
  // }
  
   catch(...){
    cout<<"Exception happened "<<endl;
  }

} 