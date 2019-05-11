#********************************************************************
#
#  Author:            <Your name>
#
#  Program #:         <Assignment Number>
#
#  File Name:         <Program8.py>
#
#  Course:            COSC 1336 Programming Fundamentals I 
#
#  Due Date:          <Due Date>
#
#  Instructor:        Fred Kumi 
#
#  Chapter:           <Chapter #>
#
#  Description:
#     <An explanation of what the program is designed to do>
#
#********************************************************************

import math
import Disc

#***************************************************************
#
#  Function:     main
# 
#  Description:  The main function of the program
#
#  Parameters:   None
#
#  Returns:      Nothing 
#
#**************************************************************
def main():
    coeffA = int(input('Enter the coefficient A: '))
    coeffB = int(input('Enter the coefficient B: '))
    coeffC = int(input('Enter the coefficient B: '))
    
    disc = Disc.discriminant(coeffA, coeffB, coeffC)
    
    print('\nDiscriminant is: ', disc)
    
   # End of main

#***************************************************************
#
#  Function:     userInfo
# 
#  Description:  Displays the author's name, the course name, and
#                the program number
#
#  Parameters:   None
#
#  Returns:      Nothing 
#
#**************************************************************   
def userInfo():
    print('Name:     Fred Kumi')
    print('Course:   Programming Fundamentals I')
    print('Program:  Eight')
    print()
    # End of userInfo

userInfo()
main()

# End of Program 8
