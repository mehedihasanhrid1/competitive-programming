def c_to_f(c):
    f = (c * 9/5) + 32
    return f

celsius = 30
fahrenheit = c_to_f(celsius)
print(str(celsius) + " degrees Celsius is equal to " + str(fahrenheit) + " degrees Fahrenheit.")
