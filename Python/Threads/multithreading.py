import threading

def printNumbers():
    for i in range(1, 11):
        print(i)

thread = threading.Thread(target=printNumbers)

thread.start()

for letter in ['x', 'y', 'z']:
    print(letter)
thread.join()
