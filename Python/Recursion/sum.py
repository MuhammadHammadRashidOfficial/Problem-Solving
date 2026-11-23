def Sum(number):
    sum = 0
    if number < 0:
        return -1
    if number == 0 or number == 1:
        return number;
    else:
        return sum + Sum(number - 1)

number = int(input("Enter the number: "))
print("The sum is: ", Sum(number))
