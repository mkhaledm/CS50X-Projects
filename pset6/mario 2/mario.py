from cs50 import get_int

# Notification
print("Welcome, Please enter a number from one to eight to build.")
# Getting height.
h = 0
while 1 > h or h > 8:
    h = get_int("Height: ")
# Build.
for row in range(1, (h + 1), 1):
    print(" " * (h - row), end="")
    print("#" * row, end="")
    print(" " * 2, end="")
    print("#" * row, end="")
    print("")
