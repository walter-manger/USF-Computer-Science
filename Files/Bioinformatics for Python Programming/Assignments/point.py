
# file point.py
import math

class Point:
    ''' Models a point in the plane using Cartesian coordinates '''
    def __init__(self,x_val = 0,y_val = 0):
        ''' Initializes a point object with float value x_val,y_val'''
        self.x = x_val   # x-coordinate of the point
        self.y = y_val   # y-coordinate of the point

        
    def move(self,dx,dy):
        ''' Shifts the point dx units along the x-axis and dy units along the y-axis'''
        # fill in the code
        self.x = self.x + dx
        self.y = self.y + dy

    def dist(self,other):
        ''' returns the distance from Point self to Point other'''
        # fill in the code
        return math.sqrt(pow(other.x - self.x, 2) + pow(other.y - self.y, 2))    

    def __str__(self):
        return '(' + str(self.x) + ', ' + str(self.y) + ')'

        
    if __name__ == "__main__":
        # Create a Point corresponding to the origin, then create a 
        # second Point whose coordinates you input from the user.
        from point import Point
        p1 = Point(1, 0)
        p2 = Point(0, 4)      
        # Then print the distance between the two points.
        print('The distance between p1 and p2 = ', p1.dist(p2), 'units')
        # Next, input a horizontal shift amount and a vertical shift 
        # amount and move the user-defined point by those amounts.
        p1.move(3, 3)
        # Finally, print a message that shows the new location of the 
        # Point
        print('New location of p1 = ', p1)

#OOP2
#Define a new method for your point class so that execution of the following code
#P = Point(2.5,3.6)
#print('Here is my Point:',P)
#produces the following output:
#Here is my Point: (2.5,3.6)
