##  This is just an outline of what I think Program 10 should look like upon initial glance.
##  This content just commented out and left in for my own review later.

##  I will keep trying to update this file as I think about it.

#-End Goals:
#    -Print the record of each household in the survey in a 3 column format
#    -Print the Average Household Income
#    -Print the Identification Number for Households that exceed the Average
#    -Print the Identification Number for Households that fall below US Poverty Line
#    -Print the Percentage of Households that fall below the US Poverty Line

#-Functions:
#    import_Data()
#        list_All_three
#        -or-
#        list_Identification
#        list_Annual_income
#        list_Household_members
#    average_Income()
#    poverty_Level()
#    output_Data()
#    
#-Rought Outline:

#-main()
#    a_list_of_everything = call import_Data()
#    # or maybe lists of each data type should be returned by import_Data()
#        # This needs to be a loop that goes through the imported data and creates a list
#        # It should also print the data in a 3 colum format: 'Identification #', 'Annual Income', 'Household Members'
#
#-def import_Data():
#    list_Identification = []
#    list_Annual_income = []
#    list_Household_members = []
#
#    text_File = open('Program10.txt', 'r')
#    line_Read = text_File.readline()
#    
#    while line_Read != '':
#        blah blah
#        blah blah
#
#        avg_Income, above_Avg_ids = calculate_Avg_Income(placeholder_List)
#        below_Poverty_ids, below_Poverty_percent = poverty_Level(placeholder_List)
#            
#        
#        
#    
#    
#
#Notes:
#    
#    -Compute the Poverty Level/Line using the following formula:
#        povertyLevel = 16460.00 + 4320.00 * (m - 2)
#        # the variable m is the number of members of each Household.
#        
#    -The 3 column output should be: 'Identification #', 'Annual Income', 'Household Members'
#    -No IPO in the main() function! Delegate tasks to individual functions.
#    -All output should be sent to the file 'Program10-Output_File.txt'
#    -NO GLOBAL VARIABLES
#
#
#       -END-
#----------------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------------------------------------------------------------------------------------------------------------


#output_File = open('AnthonyHarvey_Program10-Output.txt', 'w')
#   This works, but I shouldn't use global variables


##################################################################################################################
#    Note    This works in Python3 or later. I'm not sure if it will work in python2.7 for instance..
#            Run the program with the following: python3 AnthonyHarvey_Program10.py
##################################################################################################################

#***************************************************************
#
#  Author:            Anthony Harvey
#   
#  Program #:         Ten
#
#  File Name:         AnthonyHarvey_Program10.py
#
#  Course:            COSC 1336 Programming Fundamentals I
#
#  Course Synonym:    32555
#
#  Due Date:          2018-07-20
#
#  Instructor:        Fred Kumi
#
#  Chapter:           5, 6, 7, 8
#
#  Description:       Tenth program in class. This takes census dat and makes calculations and exports to a file.
#
#
#***************************************************************

#***************************************************************
#
#  Function:     main
# 
#  Description:  The main function of this program.
#
#  Parameters:   None
#
#  Returns:      Nothing 
#
#**************************************************************

def main():
    
    userInfo()
    list_Identification, list_Annual_income, list_Household_members = import_Data()
    #   print(list_Identification, list_Annual_income, list_Household_members)
    #   Debug Print: Uncomment/indent to ensure proper returned values/lists
    
    avg_Income, list_Identification_above = average_Income(list_Identification, list_Annual_income)

    percent_Below_poverty = poverty_Level(list_Household_members, list_Annual_income, list_Identification)
    
    
    outport_Data(avg_Income, list_Identification_above, percent_Below_poverty, list_Identification, list_Annual_income)
    #outport_Data(avg_Income, list_Identification_above, list_Identification, list_Annual_income, list_Household_members, percent_Below_poverty)    
    #avg_Income, above_Avg_ids = calculate_Avg_Income(placeholder_List)
    #below_Poverty_ids, below_Poverty_percent = poverty_Level(placeholder_List)


def import_Data():
    #   The purpose of this function will be to perform the following:
    #   Read the contents of the Program10.txt file and split the data into lists of like content

    list_Identification = []
    list_Annual_income = []
    list_Household_members = []
    

    input_File = open('Program10.txt', 'r')
    output_File = open('AnthonyHarvey_Program10-Output.txt', 'a')
    
    print("The following are the contents of Program10.txt", file=output_File)
    print('', file=output_File)
    print('\tID\t Income\t\tMembers', file=output_File)
    print('\t--\t ------\t\t-------', file=output_File)

    line_Read = input_File.readline()
    while line_Read != '':
        
        identification, income, members = line_Read.split()
        #   Because the text file has three pieces of datum per line, I attempt to store the three pieces in individual variables
        
        print("%10s%15.2f%10s" % (int(identification), float(income), int(members)), file=output_File)
        #   This is a formatting method obtained from the internet, its pretty neato
        #   I don't have the best grasp on its usage, but I'm using it to practice
        #   I should research this more later
        
        list_Identification.append(int(identification))
        list_Annual_income.append(float(income))
        list_Household_members.append(int(members))
        #   I then append each variable to a matching list

        line_Read = input_File.readline()
        #   Continue the while loop
    print() 
    print("\t(End of File Contents)", file=output_File)
    print('-------------------------------------------------------------', file=output_File)
    print('', file=output_File)
    
    input_File.close()
    output_File.close()

    return(list_Identification, list_Annual_income, list_Household_members)


def average_Income(list_Identification, list_Annual_income):
    #   The purpose of this function will be to perform the following:
    #   Calculate the Average Household Income
    #   Print the Identification Numbers for Households that exceed the Average
    
    list_Above_avg = []
    list_Identification_above = []
        
    avg_Income = sum(list_Annual_income) / len(list_Annual_income)
    

    for income in list_Annual_income:
        if income > avg_Income:
            list_Above_avg.append(int(list_Annual_income.index(income)))

    #print(income, list_Above_avg, 'average income and the list: list_Above_avg')
    
    for value in list_Above_avg:
        list_Identification_above.append(list_Identification[value])
        
    #print(list_Identification_above)

    avg_Income = format(avg_Income, '.2f')
        
    return(avg_Income, list_Identification_above)

    
def poverty_Level(list_Household_members, list_Annual_income, list_Identification):
    
    output_File = open('AnthonyHarvey_Program10-Output.txt', 'a')

    list_Households_poverty = []
    list_Households_AbovePov = []
    accumulator = 0

    print("The 2018 United States Contiguous States Poverty Level can be calculated with the following formula: (16460.00 + (4320.00 * (Members of Household - 2)))", file=output_File)
    print("Using that formula, you can obtain the following list of Households that fall below that Poverty Line:", file=output_File)
    print('', file=output_File)
    
    for value in list_Household_members:
        m = value
        #print("These are the household member numbers:", m)

        povertyLevel = 16460.00 + (4320.00 * (m - 2))

        if list_Annual_income[accumulator] < povertyLevel:           
            #   My back hurts
            list_Households_poverty.append(value)

            print("The Household ID: ", '(', list_Identification[value], ')', ' ',\
            'makes the following Annual Income: ', '$', format(list_Annual_income[accumulator], ',.2f'),\
            "\twhich is !BELOW! their calculated Poverty Level: ", ' ($',format(povertyLevel, ',.2f'), ')', sep = '', file=output_File)
            #   Backslash key is awesome! But my Ubuntu Terminal makes this formatting look terrible..
            #   I should run this in Windows to make sure its not just my current environment
            #   or if my formatting is just terrible.
            #   Note to self: The formatting issues I saw were due to running the program in Python2.7 instead of python3            
            
#        elif list_Annual_income[accumulator] > povertyLevel:
#            list_Households_AbovePov.append(value)            
#            print("The Household ID: ", '(', list_Identification[value], ')', ' ',\
#            'makes the following Annual Income: ', '$', format(list_Annual_income[accumulator], ',.2f'),\
#            "\twhich is above their calculated Poverty Level: ", ' ($', format(povertyLevel, ',.2f'), ')', sep = '')          
#    

        accumulator += 1

    #print('This is a list of the index values of Households that fall below the Poverty Line:', list_Households_poverty)

    percent_Below_poverty = format(float(len(list_Households_poverty)) / float(len(list_Annual_income)) * 100, '.2f')
    
    print('', file=output_File)    
    print("The percentage of Households whose income is below the Poverty Level is quite high, at: ", percent_Below_poverty, '%', sep = '', file=output_File)
    print('', file=output_File)
    output_File.close()

    return(percent_Below_poverty)


def outport_Data(avg_Income, list_Identification_above, percent_Below_poverty, list_Identification, list_Annual_income):
    output_File = open('AnthonyHarvey_Program10-Output.txt', 'a')

    list_Test = []
    print('-------------------------------------------------------------', file=output_File)

    print('', file=output_File)
    print("The average income for all of the Households is:", ' $', format(float(avg_Income), ',.2f'), sep = '', file=output_File)
    print('', file=output_File)
    
    print("The following is a collection of all Households whose Annual Income is above that average Annual Income.", file=output_File)
    print('', file=output_File)
    print('\t ID\t Income', file=output_File)
    print('\t --\t ------', file=output_File)
    for num in list_Identification_above:
        somevar = list_Annual_income[list_Identification.index(num)]
        print('\t',num , "\t", somevar, file=output_File)

    output_File.close()
    
    
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
    output_File = open('AnthonyHarvey_Program10-Output.txt', 'w')

    print('Name:     Anthony Harvey', file=output_File)
    print('Course:   Programming Fundamentals I', file=output_File)
    print('Program:  Ten', file=output_File)
    print('', file=output_File)
    output_File.close()

    # End of userInfo
    
# End of main
main()
    
    
