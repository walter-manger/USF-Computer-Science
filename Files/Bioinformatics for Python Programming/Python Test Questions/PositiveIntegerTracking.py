
running_sum = 0
average = 0
number_of_inputs = 0

i = int(input("Enter a positive integer, enter 0 to stop input: "))

running_sum += i
number_of_inputs += 1

while i != 0:
    i = int(input("Enter a positive integer, enter 0 to stop input: "))
    running_sum += i
    number_of_inputs += 1


print("Number of positive integers:", number_of_inputs)
print("Sum:", running_sum)
print("Average:", running_sum/number_of_inputs)
