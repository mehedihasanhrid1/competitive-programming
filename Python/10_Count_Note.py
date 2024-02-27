amount = int(input("Enter the amount: "))

thousand = amount // 1000
amount %= 1000

five_hun = amount // 500
amount %= 500

hundred = amount // 100
amount %= 100

fifty = amount // 50
amount %= 50

twenty = amount // 20
amount %= 20

ten = amount // 10
amount %= 10

five = amount // 5
amount %= 5

two = amount // 2
amount %= 2

print("The notes you need to give:")
print("1 thousand taka:", thousand)
print("5 hundred taka:", five_hun)
print("1 hundred taka:", hundred)
print("50 taka:", fifty)
print("20 taka:", twenty)
print("10 taka:", ten)
print("5 taka:", five)
print("2 taka:", two)
print("Remaining amount:", amount)
