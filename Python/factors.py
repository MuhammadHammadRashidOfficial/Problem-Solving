number = int(input("Enter the number: "))
factors = set()

for i in range(1, number + 1):
    if number % i == 0:
        factors.add(i)
print("Factors =", factors)
