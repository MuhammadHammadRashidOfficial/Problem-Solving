def GuessTheQuadrant(x, y):
    if x > 0 and y > 0:
        print("Quadrant 1")
    elif x < 0 and y > 0:
        print("Quadrant 2")
    elif x < 0 and y < 0:
        print("Quadrant 3")
    elif x > 0 and y < 0:
        print("Quadrant 4")
    else:
        print("Invalid")

x = int(input("Enter x: "))
y = int(input("Enter y: "))
GuessTheQuadrant(x, y)
