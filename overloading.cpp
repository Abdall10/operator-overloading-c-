#include <iostream>       
using namespace std;     

// Definition of the Test class
class Test 
{
    private:
        int a = 0;        // Private member variable 'a' initialized to 0
    public:
    // Default constructor
    Test() 
    {
        cout << "Enter the value of a: " << endl; // Prompts the user to enter a value for 'a'
        cin >> a;                                // Stores the input value in 'a'
    }

    // Function to print the value of 'a'
    void print() 
    {
        cout << "The value of a is: " << a << endl; // Outputs the value of 'a' to the console
    }

    // Overloading the += operator for the Test class
    void operator +=(int b) 
    {
        a += b;  // Adds the integer 'b' to 'a' and stores the result back in 'a'
    }
};


int main() 
{
    Test ob1;         // Creates an object 'ob1' of class Test and calls the constructor
    ob1 += 10;        // Uses the overloaded += operator to add 10 to the member variable 'a' of 'ob1'
    ob1.print();      // Calls the print function to display the updated value of 'a'

    return 0;         
}