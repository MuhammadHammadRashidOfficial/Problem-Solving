def Sum(number):
    if number == 0 or number == 1:
        return number;
    else:
        return number + Sum(number - 1)

number = int(input("Enter the number: "))
if number < 0:
  print("The sum for negative numbers does not exist")
else:
  print("The sum is:", Sum(number))
