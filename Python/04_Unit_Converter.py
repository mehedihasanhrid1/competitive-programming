print("What do you want to convert? \n 1. Temperature\n 2. Length")
print("What do you select - 1/2")

# Take Input from User for which unit to convert
choice = int(input("\nEnter your choice : "))

# Temperature Conversion
if choice == 1:
  print(
      "\nYou want to convert Temperature from \n 1. Celsius to Fahrenheit \n 2. Fahrenheit to Celsius"
  )

  # Take Input from user for choice of conversion and value
  opt = int(input("\nEnter your choice - 1 or 2 : "))
  val = float(input("Enter Value of Temperature: "))

  # Convert Values
  if opt == 1:
    result = int(round((9 * val) / 5 + 32))
    print("Temperature is equivalent to {} Fahrenheit".format(result))
  else:
    result = int(round((val - 32) * (5 / 9)))
    print("Temperature is equivalent to {} Celsius".format(result))

# Length Conversion
else:
  print(
      "\nYou want to convert Length from \n 1. Meter to Kilometer \n 2. Kilometer to Meter"
  )

  # Take Input from user for choice of conversion and value
  opt = int(input("\nEnter your choice - 1 or 2 : "))
  val = float(input("Enter Value of Length: "))

  # Convert Values
  if opt == 1:
    result = val / 1000
    print("Length is equivalent to {} Kilometer".format(result))
  else:
    result = val * 1000
    print("Length is equivalent to {} Meter".format(result))
