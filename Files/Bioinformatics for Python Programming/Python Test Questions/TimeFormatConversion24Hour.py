
time_in = input("Enter a time is 24-hour format:")

hour = time_in.split(':')[0]
minute = time_in.split(':')[1]

print(int(hour) - 12 if int(hour) > 12 else 12 if int(hour) == 0 else int(hour), ':', minute, ' pm' if int(hour) > 11 else ' am', sep='')
