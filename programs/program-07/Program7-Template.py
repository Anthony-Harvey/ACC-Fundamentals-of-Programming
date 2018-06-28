#********************************************************************
#
#  Author:            Anthony Harvey
#
#  Program #:         7
#
#  File Name:         Program7.py
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
#     This program reads and displays the contents
#     of a file.
#********************************************************************
def main():
    
    #   Tasks  to complete:
    #       Print the cost of granting the following pay raises:
    #           7% raise on earning more than 50,000.00
    #           4% raise on earning more than 60,000.00
    #           5.5% raise on earning for values < 50,000.00
    #       Total cost for the above pay raises
    #       Average pay raise cost
    #       Print the total faculty payroll before and after the raises.
    #   
    #   Perform the outlined tasks WITHOUT using LOGICAL OPERATORS
    #

    
    inFile = open('program7.txt', 'r')
    
    lineRead = inFile.readline()
    while lineRead != '':
       words = lineRead.split() 
       for word in words:
          num = float(word)
          print(format(num, '.2f'))
          
       lineRead = inFile.readline()
       
    # Close the file.
    inFile.close()
    
# Call the main function.
main()
