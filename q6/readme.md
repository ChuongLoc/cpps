# Q6

Write a program to perform arithmetic operations using inline function.

# Q/A

What is `inline function`: https://www.geeksforgeeks.org/inline-functions-cpp/

        inline return-type function-name(parameters)
        {
            // function code
        }

Example:

        #include <iostream>
        using namespace std;
        inline int cube(int s)
        {
            return s*s*s;
        }
        int main()
        {
            cout << "The cube of 3 is: " << cube(3) << "\n";
            return 0;
        } //Output: The cube of 3 is: 27