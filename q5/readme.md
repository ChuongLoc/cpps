# Q5

WAP in C++ to create a structure named complex having data member real and imag.
Create member function add_complex which takes structure as an argument and return
structure. Using function add two complex numbers.

# Q/A

Which is different between `struct` and `class`?

**Note**

Define `add` function return specific `Complex` type

        // Function declaration
        Complex add(Complex,Complex) // function having complex type arguments
        // Function definition
        Complex add(Complex c1,Complex c2){
            Complex c;
            c.real = c1.real + c2.real; // adding real parts storing in c.real
            c.imag = c1.imag + c2.imag; // adding imag parts and storing in c.imag

            return c; // returning a value of type comple
        }