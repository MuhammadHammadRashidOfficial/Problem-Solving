# A program to print a list

list = ["apple", "banana", "orange", "strawberry"]

print("The list is: ", list)

array = ['apple', 'banana', 'orange', 'peach', 'strawberry']    # a list containing fruit items
sizeOfArray = len(array)
print("The length of arr is: ", sizeOfArray)    

array1 = ['apple', 'banana', 'peach', 'orange', 'strawberry', 'mango', 'grapes']

# Function to find the length
def length(array):
    l = 0
    for i in range(0, len(array)):
        l += 1
    return l

sizeOfArray = length(array1)
print("The length of list a is: ", sizeOfArray)

# Append an element in a list
array2 = []
for i in range(len(array2)):
  l = int(input())    # enter the value
  array2.append(l)
print("The array is: ", array2)

# Concatenate
array3 = [1, 3, 5, 7, 9]
array4 = [0, 2, 4, 6, 8]

c = array3 + array4
print(c)
