number = int(input("Enter the number: "))
print("The entered number is: ",number)
for i in range(1, number, 1):
    if number % i == 0:
        print(f"{i} is a factor of {number}.\n")
