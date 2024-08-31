#include <iostream>
using namespace std;
// x++ operator Postfix
// ++x operator Prefix

class Test 
{
    private:
      int x = 0;
      public:
      Test ()
      {
          cout<<"enter x : ";
          cin>>x;
      }
      void operator ++(int) // postfix
      {
          x++;
      }
       void operator ++() // prefix , ob1++ befor ++ob1
      {
          x++;
      }
      void print()
      {
          cout<<"x is "<<x<<endl;
      }
};
int main() {
   Test ob1;
   ob1++;  // posfix ob1++ , prefix ++ob1
   ob1.print();
   
    return 0;
}


