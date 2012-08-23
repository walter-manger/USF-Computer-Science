
#include <stdio.h>

struct complex
{
   double real;
   double imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex c1, struct complex c2);

int main(int argc, char *argv[])
{   
   struct complex c1, c2, c3;

   c1 = make_complex(1.0, 0.0);
   c2 = make_complex(0.0, 1.0);
   c3 = add_complex(c1,c2);
   
   printf("Real is %f\nImaginary is %f", c3.real, c3.imaginary);
 
   getchar();
   getchar();
   return 0;
}

struct complex make_complex(double real, double imaginary)
{
   struct complex new_complex = {real, imaginary};
   return new_complex;
   
}

struct complex add_complex(struct complex c1, struct complex c2)
{
   struct complex new_complex = {c1.real+c2.real, c1.imaginary+c2.imaginary};
   return new_complex;
}

/*
void print_struct(struct complex n)
{
   printf("Real is %f\nImaginary is %f\n", n.real, n.imaginary);
}
*/