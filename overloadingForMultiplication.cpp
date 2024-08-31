#include <iostream>
using namespace std;

class Count
{
    private:
      int value;
      
    public:
      Count() : value(10) { }

      // result = count1 * count2
      Count operator *(Count ob)
      {
        Count result;
        result.value = value * ob.value;
        return result;
      }

      void print()
      {
        cout << "value is: " << value << endl;
      }
};

int main() 
{
    Count count1;
    Count count2;
    Count result = count1 * count2;  // Multiplying two Count objects
    result.print();  // Print the result of the multiplication , value is: 100

    return 0;
}
