#***************************************************************
#
#  Author:              Anthony Harvey
#   
#  Program #:           Four
#
#  File Name:           Program4.py
#
#  Course:              COSC 1336 Programming Fundamentals I
#
#  Course Synonym:      32555
#
#  Due Date:            2018-06-15
#
#  Instructor:          Fred Kumi
#
#  Chapter:             Three
#
#  Description:         Fourth program in class. Calculate the weekly gross pay of Annan Supermarket employees.
#
#
#***************************************************************

#***************************************************************
#
#  Function:            main
# 
#  Description:         Calculate the weekly gross pay of Annan Supermarket employees.
#
#  Parameters:          None
#
#  Returns:             Nothing 
#
#**************************************************************
def main():

    employeeID = input("Please enter the employees ID number: ")
    payRate = float(input("Please enter the employees hourly pay rate: "))
    hoursWorked = float(input("Please enter the employees hours for the week: "))
    parkingCost = float(20)
    
    if hoursWorked > 40:
        overtimeHours = hoursWorked - 40
        overtimePay = float((hoursWorked - 40) * payRate * 1.5)
        regularHours = hoursWorked - overtimeHours
        regularPay = float(regularHours * payRate)
        grossPay = float(regularPay + overtimePay)
        
    else:
        grosspay = hoursWorked * payRate
        overtimeHours = 0
        overtimePay = 0
        regularHours = hoursWorked
        regularPay = regularHours * payRate
        grossPay = hoursWorked * payRate

    if grossPay >= 500:
        postTaxPercentPercent = .85
        
    else:
        postTaxPercentPercent = 1.00

    netPay = postTaxPercentPercent * grossPay
    taxPayment = grossPay - netPay
    totalDeductions = taxPayment + parkingCost

    print()
    print()
    print("ID Number: ", employeeID)
    print("Pay Rate: ", payRate)
    print("Regular Hours: ", regularHours)
    print("Overtime Hours: ", overtimeHours)
    print("Total Hours: ", hoursWorked)
    print("Regular Pay: $",format(regularPay, ',.2f'))
    print("Overtime Pay: $",format(overtimePay, ',.2f'))
    print("Gross Pay: $",format(grossPay, ',.2f'))
    print("Deductions: $",format(totalDeductions, ',.2f'))
    print("Net Pay: $",format(netPay - parkingCost, ',.2f'))
    
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
    print('Program:  Four')
    print()
    # End of userInfo


# Call functions
userInfo()
main()

# End of Program 4
