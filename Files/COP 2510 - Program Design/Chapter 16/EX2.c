
#include <stdio.h>

struct numType
{
   double real;
   double imaginary;
};

void print_struct(struct numType n);

int main(int argc, char *argv[])
{   
   /* When declaring struct vars, you must have a semicolon after each member */
   struct {double real; double imaginary;} c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;
   //struct numType c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;
   
   //print_struct(c1);
   
   //c1 = c2;
   
   //print_struct(c1);
   
   c3.real = c1.real + c2.real;
   c3.imaginary = c1.imaginary + c2.imaginary;
   
   //print_struct(c3);

   getchar();
   getchar();
   return 0;

}

void print_struct(struct numType n)
{
   printf("Real is %f\nImaginary is %f\n", n.real, n.imaginary);
}