#include <iostream>
using namespace std;

class Count
{
    private:
        int value=0;

    public:
        Count() : value(14) { }

        void increment(const string& countName)
        {
            cout << "value of " << countName << " is: " << value << endl;
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

    count1.increment("count1"); // value of count1 is: 15
    count2.increment("count2"); // value of count2 is: 15

    return 0;
}
