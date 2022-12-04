# Q3-Program to swap integer and float value using reference variable

# Q/A

What is `&` mean in this code

        // function declarations
        void swap_int(int &, int &);
        void swap_float(float &, float &);
        // function definition
        void swap_int(int & x1,int & x2){
            ...
        }

        void swap_float(int & x1,int & x2){
            ...
        }

Can we use this instead for above

        // function declarations
        void swap_int(int , int);
        void swap_float(float , float );
        // function definition
        void swap_int(int x1,int x2){
            ...
        }

        void swap_float(int x1,int x2){
            ...
        }

        
