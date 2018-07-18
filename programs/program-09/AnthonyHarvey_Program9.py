#********************************************************************
#
#  Author:            <Your name>
#
#  Program #:         9
#
#  File Name:         Program9.py
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

###########################################################################
#
# This is just an outline of what I need to write for Program 9.
# 
# End Goals:
#    Total rainfall for the year
#    Average Monthly rainfall
#    Highest rainfall month
#    Lowest rainfall month
#
# Stipulations:
#    No global variables
#    At least 4 functions
#    Main() should drive the functions, no calculations within main()
#
# Rough Draft / Outline of the program:
#
############################################################################

def main():
    #userInput()
    data_Input()
    #rainfall_List_Accumulator = data_Input()
    highest_Rainfall, lowest_Rainfall, = rainfall_Calculations()
    #data_Output()

def data_Input():
    rainfall_List = []
    rainfall_List_Accumulator = 0

    data = open('Program9.txt', 'r')
    line_Read = data.readline()
    while line_Read != '':
        words = line_Read.split()
        words_Fix = float(words[0])
        print(words_Fix)
        rainfall_List_Accumulator += words_Fix
        
        # Create a list of months and compare the indices to the text files monthly listings.
        # Then return those values to main(), where it will then be forwarded to the
        # rainfall_Calculations function

        line_Read = data.readline()

    print(rainfall_List_Accumulator)
    #return(rainfall_List_Accumulator)
 
def rainfall_Calculations():
    #avg_Monthly = rainfall_List_Accumulator / 12
    #highest_Rainfall = index(max(rainfall_List))
    #lowest_Rainfall = index(min(rainfall_List))
        

#def data_Output():
    #print("Blah blah:", rainfall_List_Accumulator)
    #print("Blah Blah:", avg_Monthly)
    #print("Blah:", highest_Rainfall)
    #print("Blah:", lowest_Rainfall)
    #print("data_Output test!")

#def userInput():
    #print("Anthony Harvey - 2018-07-17")
main()
