def FactorialOfANumber(number):
  factorial = 1
  if number == 0 or number == 1:
    return factorial
  else:
    return number * FactorialOfANumber(number - 1)

number = int(input("Enter the value of number: "))
if number < 0:
  print("Factorial for a negative number does not exist")
else:
  print("The factorial of", number, "is:", FactorialOfANumber(number))
