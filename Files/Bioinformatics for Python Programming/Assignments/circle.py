
from point import Point
import math

class Circle:
    
    ''' Models a circle in the plane a center Point and a radius '''
    def __init__(self,center_point,r):
        self.center = center_point
        self.radius = r

    def get_area(self):
        ''' returns the area of the circle '''
        # complete the code
        return math.pi*self.radius**2
 
    def move(self,dx,dy): 
        ''' shifts the circle dx units along the x-axis and dy units along the y-axis '''
        self.center.move(dx, dy) 

    def contains(self,other):
       ''' returns True if and only if circle other is completely contained inside circle self '''
       # complete the code; use pictures to guide you work
       # checking north south east and west
       return other.center.x + other.radius <= self.center.x + self.radius and other.center.x - other.radius >= self.center.x - self.radius and other.center.y + other.radius <= self.center.y + self.radius and other.center.y - other.radius >= self.center.y - self.radius

    def getCircle():
        ''' Inputs the necessary values from the user to create and a  
        circle and returns that circle 
        '''
        # complete the code
        centerx, centery = input('Enter your center point separated by a comma (x,y): ').split(',')
        centerp = Point(float(centerx), float(centery))
        radius = input("Enter a radius: ")
        return Circle(centerp, float(radius))
   
    if __name__ == "__main__":
        
        # Input two circles from the user (getCircle), then print a  
        # message indicating whether the second circle is contained in  
        # the first
        from circle import Circle
        c1 = Circle.getCircle()
        c2 = Circle.getCircle()
        if c1.contains(c2):
            print('c2 is in c1!')
        else:
            print('c2 is not in c1!')
        
