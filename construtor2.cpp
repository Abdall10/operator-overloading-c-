#include <iostream>       
using namespace std;     

class Count
{
    private:
        int value=0;

    public:
        Count() : value (10){ }

     

     void increment()
     {
        cout<<"value is: "<<value<<endl;
     }

     Count operator ++()
     {
       Count ob;
       ob.value = ++value;
       return ob;
     }
};

int main() 
{
   Count count1;
   Count count2;
   count2 = ++count1;

   count1.increment(); // value of count1 is: 11
   count2.increment(); // value is: 11

    return 0;         
}
