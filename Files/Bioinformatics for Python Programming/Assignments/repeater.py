# Name: Walter Manger U54576622
# File Name: repeater.py
# Comment:  The directions did not say if the code needed
#           to be in a function or not, I just assumed that
#           we didn't need to have a function call here. 
# -----------------------------------------------------------

set = input("Enter the first word: ")
subset = input("Enter the second word: ")
firstFindIndex = set.find(subset)
secondFindIndex = set[firstFindIndex+len(subset):].find(subset)
if firstFindIndex > -1 and secondFindIndex > -1:
    print("Yes") 
else:
    print("No")


