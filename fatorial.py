number = int(input("Enter a number: "))
factorial = 1

for i in range(number, 1, -1):
    factorial = factorial*i

print(factorial)