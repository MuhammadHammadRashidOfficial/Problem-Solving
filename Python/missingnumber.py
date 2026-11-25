def missingNumberInAnArray(array, sizeOfArray):
    sum = ((sizeOfArray * (sizeOfArray + 1)) / 2)
    arraySum = 0
    if sizeOfArray == 0: 
        return -1
    elif sizeOfArray == 1:
        return 'No missing number'
    else:
        for i in range(0, sizeOfArray - 1):
            arraySum = arraySum + arr[i]
        return sum - arraySum
    
arr = []
print(missingNumberInAnArray(arr, len(arr)))

arr = [1]
print(missingNumberInAnArray(arr, len(arr)))

arr = [34]
print(missingNumberInAnArray(arr, len(arr)))

arr = [1, 2, 3, 5, 6]
print(missingNumberInAnArray(arr, len(arr)))

arr = [1, 3, 4, 5, 6]
print(missingNumberInAnArray(arr, len(arr)))
