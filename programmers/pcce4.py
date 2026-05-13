code = input()
last_four_words = code[-4:]

if last_four_words == "_eye":
    print("Ophthalmologyc")
elif "head":
    print("Neurosurgery")
elif "infl":
    print("Orthopedics")
elif "skin":
    print("Dermatology")
else:
    print("direct recommendation")