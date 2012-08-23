# Name: Walter Manger (U54576622)
# File: rightTriangle.py
# Assignment 2 - Show whether the three numbers entered can be considered as
#                   the sides of a right triangle. 

print("Welcome to the Right Triangle program, enter sides below.\n")

a = int(input("Enter Side 1: "))
b = int(input("Enter Side 2: "))
c = int(input("Enter Side 3: "))

# Check to see if the sum of any two equal the square of the other
if a*a + b*b == c*c or a*a + c*c == b*b or b*b + c*c == a*a:
    print("The numbers are the side lengths of a right triangle")
else:
    print("The numbers are not the side lengths of a right triangle")
    
