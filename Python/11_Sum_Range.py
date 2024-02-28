start = int(input("Enter the start of the range: "))
end = int(input("Enter the end of the range: "))

sum = 0

for i in range(start, end + 1):
    if i % 3 == 0 and i % 5 == 0:
        sum += i

print("Summation of numbers divisible by both 3 and 5:", sum)
