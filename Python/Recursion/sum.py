def calculateSumOfAllNaturalNumbersTillNumber(number):
    if number == 0 or number == 1:
        return number;
    else:
        return number + calculateSumOfAllNaturalNumbersTillNumber(number - 1)

number = int(input("Enter the number: "))
if number < 0:
  print("The sum for negative numbers does not exist")
else:
  print("The sum is:", calculateSumOfAllNaturalNumbersTillNumber(number))
