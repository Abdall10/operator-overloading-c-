#include <iostream>
using namespace std;

class Count
{
    private:
      int value=0;
    public:
      Count() : value(10){ }

      // result = count1 + count2
      Count operator +(Count ob)
      {
        Count result;
        result.value = value + ob.value;
        return result;
      }
 
      void print()
      {
        cout<<"value is: "<<value<<endl;
      }
};


int main() 
{
      Count count1;
      Count count2;
      Count result = count1 + count2; // Declare the variable 'result'
      result.print();  // value is: 20

    return 0;
}
