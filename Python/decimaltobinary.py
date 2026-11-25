def decimalToBinary(decimalNumber):
    binaryNumber = ''
    while decimalNumber > 0:
        remainder = decimalNumber % 2
        binaryNumber = str(remainder) + binaryNumber
        decimalNumber = decimalNumber // 2
    return binaryNumber

decimalNumber = 25
binaryNumber = decimalToBinary(decimalNumber)

print(binaryNumber)
