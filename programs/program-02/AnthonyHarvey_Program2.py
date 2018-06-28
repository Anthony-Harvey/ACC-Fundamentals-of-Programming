#***************************************************************
#
#  Author:            Anthony Harvey
#   
#  Program #:         Two
#
#  File Name:         Program2.py
#
#  Course:            COSC 1336 Programming Fundamentals I
#
#  Course Synonym:    32555
#
#  Due Date:          2018-06-06
#
#  Instructor:        Fred Kumi
#
#  Chapter:           Two
#
#  Description:  Second program in class. Grade average calculation.
#
#
#***************************************************************

#***************************************************************
#
#  Function:     main
# 
#  Description:  The main function of this program is to accept a users Test score input,
#                and then output averaged results.
#
#  Parameters:   None
#
#  Returns:      Nothing 
#
#**************************************************************
def main():
    
    print("This program will output the averaged score for your five Tests.")
        
    t1=float(input("Enter the score for Test 1: "))
    t2=float(input("Enter the score for Test 2: "))
    t3=float(input("Enter the score for Test 3: "))
    t4=float(input("Enter the score for Test 4: "))
    t5=float(input("Enter the score for Test 5: "))
    
    testTotal=float((t1+t2+t3+t4+t5))
    testAvg=(testTotal/5)
    
    print("Your average Test score is:",format(testAvg, '.1f')) # This should be the better way to print on one line.

    print()
    
    input('Press ENTER to exit')                                # I wanted the program to stay open long enough for the user to read.
                                                                # It was immediately closing after being run in Windows, otherwise.
    
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
    print('Program:  Two')
    print()
    # End of userInfo


# Call functions
userInfo()
main()

# End of Program 2
