
#include <stdio.h>

#define RECTANGLE 0
#define CIRCLE 1
#define PI 3.14

struct point {int x, y};

struct shape 
{
   int shape_kind;
   struct point center;
   union 
   {
      struct 
      {
         int height, width;
      } rectangle;
      struct 
      {
         int radius;
      } circle;
   } u;
};

struct shape scale(struct shape s, double c);
struct shape move(struct shape s, int x, int y);
double calculate_area(struct shape s);

int main(int argc, char *argv[])
{   

 
   getchar();
   getchar();
   return 0;
}

double calculate_area(struct shape s)
{
   if(s.shape_kind == RECTANGLE)
   {
      printf("\nThe area of the rectangle is %d\n", s.u.rectangle.height*s.u.rectangle.width);
      return s.u.rectangle.height*s.u.rectangle.width;
   }
   else
   {
      printf("\nThe area of the circle is %f\n", s.u.circle.radius*(2*PI));
      return s.u.circle.radius*(2*PI);
   }
}

struct shape move(struct shape s, int x, int y)
{
   struct shape new_shape = s;
   new_shape.center.x = s.center.x + x;
   new_shape.center.y = s.center.y + y;
   
   printf("\nThe shape's new center is x=%f, y=%f\n", new_shape.ceneter.x, new_shape.center.y);
   
   return new_shape;
}

struct shape scale(struct shape s, double c)
{
   struct shape new_shape = s;
   if(new_shape.shape_kind == RECTANGLE)
   {
      new_shape.u.rectangle.height = (new_shape.rectangle.height*c);
      new_shape.u.rectangle.width = (new_shape.rectangle.width*c);
   }else{
      new_shape.u.circle.radius = (new_shape.circle.radius*c);
   }
   
   return new_shape;
}




