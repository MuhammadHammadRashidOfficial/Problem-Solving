import threading

def print_numbers():
    for i in range(1, 11):
        print(i)

thread = threading.Thread(target=print_numbers)

thread.start()

for letter in ['x', 'y', 'z']:
    print(letter)

thread.join()
