# Write a Python Program to calculate the multiplication table of a given number upto 10
n = int(input("Enter a number: "))

for i in range(1,11):
    print(f"{n} * {i} = {n*i}")
