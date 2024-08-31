#include <iostream>       
using namespace std;     

class Count
{
    private:
        int value=0;
        int x=0;

    public:
    Count() : value (30) , x(20)
    {
        cout<<"value\n";
        cout<<"value is: "<<value<<endl;

        cout<<"x is: "<<x<<endl;
    }
};

int main() 
{
   Count ob1;


    return 0;         
}