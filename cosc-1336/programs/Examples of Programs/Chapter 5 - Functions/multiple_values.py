# This program demonstrates a function that returns multiple values

import math

def main():
    print()
    print('This program finds the square root and square of a number.')
    num1 = int(input("Please enter a number: "))
    value1, value2 = calSqrtSquare(num1)
    print("Square root of ", num1, " is ", value1)
    print("Square of ", num1, " is ", value2)

def calSqrtSquare(num1):
    val1 = math.sqrt(num1)
    val2 = num1 * num1
    return val1, val2

# Call the main function.
main()
