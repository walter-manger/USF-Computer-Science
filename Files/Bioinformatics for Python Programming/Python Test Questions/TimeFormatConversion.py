
time = '12:00 am' #input("Input your time in 12 hour format: ")
# Should be ##:## am|pm
segments = time.split()

print(segments)

hour = segments[0].split(":")[0]
minute = segments[0].split(":")[1]


if segments[1].lower() == "pm":
	print(str(12+int(hour)) + ":" + minute)
else:
	print(("00" if hour == "12" else hour) + ":" + minute)