# title

Create a class named calculate that uses overloaded function calclulate_area of circle,
reractangle,square and triangle.

# Q/A

What is `function overloading`?

**Note** You can define function outside the class

        class Calculate{
            public:

                float area;
                const float PI = 3.1415;

                // function overloading declaration
                void calculate_area(float); // circle
                void calculate_area(float,float); // rectangle
                void calculate_area(float,float,float); // triangle

        };

        // function definition outside of the class
        void Calculate::calculate_area(float radius){
            area = PI * radius * radius;
            cout << "area of circle " << area << endl;
        }

        void Calculate::calculate_area(float width, float height){
            area = width * height;
            cout << "area of rectangle " << area << endl;
        }

        void Calculate::calculate_area(float half,float height,float length){
            area = half * height * length;
            cout << "area of triangle " << area << endl;
        }