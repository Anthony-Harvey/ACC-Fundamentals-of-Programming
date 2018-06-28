#***************************************************************
#
#  Author:            Anthony Harvey
#   
#  Program #:         Five
#
#  File Name:         Program5.py
#
#  Course:            COSC 1336 Programming Fundamentals I
#
#  Course Synonym:    32555
#
#  Due Date:          2018-06-06
#
#  Instructor:        Fred Kumi
#
#  Chapter:           Five
#
#  Description: Fifth program in class. This will calculate the discount to be applied.
#               It will also calculate the savings due to the applied discount.
#
#***************************************************************

#***************************************************************
#
#  Function:    main
# 
#  Description: Calculate and Display:
#               amount purchased / applicable discount / savings / total cost
#
#  Parameters:  None
#
#  Returns:     Nothing 
#
#**************************************************************
def main():

        
    totalSold = int(input("Please enter the number of units sold: "))
    preDiscountCost = float(totalSold * 99)   #This assumes no sales tax

    if totalSold >= 100:
        discountEarned = 50
    elif totalSold >= 70:
        discountEarned = 40
    elif totalSold >= 50:
        discountEarned = 35
    elif totalSold >= 20:
        discountEarned = 30
    elif totalSold >= 10:
        discountEarned = 20
    else:
        discountEarned = 0

    discountSavings = float(discountEarned / 100) * preDiscountCost
    finalCost = float(preDiscountCost - discountSavings)
    
    print("Number of units purchased is: ",totalSold)
    print("Discount applied is: ", discountEarned)
    print("Total savings due to discount is: ", format(discountSavings, '.2f'))
    print("The total cost of the purchase is: ", format(finalCost, '.2f'))    
    
    

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
    print('Program:  Five')
    print()
    # End of userInfo


# Call functions
userInfo()
main()

# End of Program 5
