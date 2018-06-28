#***************************************************************
#
#  Author:            Anthony Harvey
#   
#  Program #:         One
#
#  File Name:         Program1.py
#
#  Course:            COSC 1336 Programming Fundamentals I 
#
#  Course Synonym:    32555
#
#  Due Date:          2018-06-06
#
#  Instructor:        Fred Kumi 
#
#  Chapter:           One
#
#  Description:
#     First program in class. Salary calculations.
#
#***************************************************************

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
    
    amount = 32500.00
    
    # Enter a statement here
    biWeekly = amount / 26
    # Enter another statement here
    twiceMonth = amount / 24
    
    print('Annual Salary           = ', format(amount, '.2f'))
    print('When paid twice a month = ', format(twiceMonth, '.2f'))
    print('When paid bi-weekly     = ', format(biWeekly, '.2f'))
    
    # End of main
    
#***************************************************************
#
#  Function:     userInfo
# 
#  Description:  Prints Programmer's information
#
#  Parameters:   None
#
#  Returns:      Nothing 
#
#**************************************************************
def userInfo():
    print('Name:     Anthony Harvey')
    print('Course:   Programming Fundamentals I')
    print('Program:  One')
    print()
    # End of userInfo


# Call functions
userInfo()
main()

# End of Program 1
