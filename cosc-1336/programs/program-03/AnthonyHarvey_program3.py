#***************************************************************
#
#  Author:              Anthony Harvey
#   
#  Program #:           Three
#
#  File Name:           Program3.py
#
#  Course:              COSC 1336 Programming Fundamentals I
#
#  Course Synonym:      32555
#
#  Due Date:            2018-06-12
#
#  Instructor:          Fred Kumi
#
#  Chapter:             Three
#
#  Description:         Third program in class. Annual tax burden for a Homeowner.
#
#
#***************************************************************

#***************************************************************
#
#  Function:            main
# 
#  Description:         Calculate and display annual Property Tax based on user input.
#
#  Parameters:          None
#
#  Returns:             Nothing 
#
#**************************************************************
def main():
    
    
    taxablePercentage = 60
    
    houseValue = float(input("Please enter the current value of your home: ").replace(',', '').replace('$', ''))
        #   I used the two .replace() to allow users to enter values containing commas and dollar signs for USD as expected.
        #   This solves the comma issue for USD, but doesn't solve the issues that arise when users enter spaces or extra periods.
        #   This will also cause issues for users entering a comma in place of the period.
        #   In short, this "fix" sucks and should be replaced.
        
    if houseValue <= 0:
        print("Wow, that's unfortunate. Let's just pretend you have a nice house, then.")
        print()
        houseValue = float(input("Please enter the imaginary, POSITIVE, value of your home: ").replace(',', '').replace('$', ''))
        
    taxRate = float(input("Please enter the current Tax Rate for your county: "))
    
    
    annualPropTax = ((houseValue * taxablePercentage * (taxRate / 100)) / 100)

    print("Based on the given information, your Annual Property Tax will be:", format(annualPropTax, '.2f'))
        #   I haven't figured out how to output the value with commas, yet..

    print()
    input('Please press ENTER to exit')
    
    # End of main
    
#***************************************************************
#
#  Function:            userInfo
# 
#  Description:         Prints Programmer's information
#
#  Parameters:          None
#
#  Returns:             Nothing 
#
#**************************************************************
def userInfo():
    print('Name:     Anthony Harvey')
    print('Course:   Programming Fundamentals I')
    print('Program:  Three')
    print()
    # End of userInfo


# Call functions
userInfo()
main()

# End of Program 3
