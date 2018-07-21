## This file is just an outline of what I think Program 10 should look like upon initial review.

## I will keep trying to update this file as I think about the program needs.

# End Goals:
#    
#    -Print the record of each household in the survey in a 3 column format
#    -Print the Average Household Income
#    -Print the Identification Number for Households that exceed the Average
#    -Print the Identification Number for Households that fall below US Poverty Line
#    -Print the Percentage of Households that fall below the US Poverty Line

#Functions:
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
#Rought Outline:

#main()
#    a_list_of_everything = call import_Data()
#    # or maybe lists of ceach data type should be returned by import_Data()
#        # This needs to be a loop that goes through the imported data and creates a list
#        # It should also print the data in a 3 colum format: 'Identification #', 'Annual Income', 'Household Members'

#def import_Data():
#    list_Identification = []
#    list_Annual_income = []
#    list_Household_members = []

#    text_File = open('Program10.txt', 'r')
#    line_Read = text_File.readline()
#    
#    while line_Read != '':
#        blah blah
#        blah blah

#        avg_Income, above_Avg_ids = calculate_Avg_Income(placeholder_List)
#        below_Poverty_ids, below_Poverty_percent = poverty_Level(placeholder_List)
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
#----------------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------------------------------------------------------------------------------------------------------------




def main():

    list_Identification, list_Annual_income, list_Household_members = import_Data()
    #   print(list_Identification, list_Annual_income, list_Household_members)
    #   Debug Print: Uncomment/indent to ensure proper returned values/lists

    avg_Income = average_Income(list_Identification, list_Annual_income)
    print("The average income is:", '$', avg_Income)
    print()
    print(above_Avg_Households)
    
    
    #outport_Data(avg_Income, avg_Income_exceed, avg_Below_)
    #avg_Income, above_Avg_ids = calculate_Avg_Income(placeholder_List)
    #below_Poverty_ids, below_Poverty_percent = poverty_Level(placeholder_List)

def import_Data():
    #   The purpose of this function will be to perform the following:
    #   Read the contents of the Program10.txt file and split the data into lists of like content

    list_Identification = []
    list_Annual_income = []
    list_Household_members = []

    text_File = open('Program10.txt', 'r')
    line_Read = text_File.readline()
    
    while line_Read != '':
        
        identification, income, members = line_Read.split()
        #   Because the text file has three pieces of datum per line, I attempt to store the three pieces in individual variables

        list_Identification.append(int(identification))
        list_Annual_income.append(float(income))
        list_Household_members.append(int(members))
        #   I then append each variable to a matching list

        line_Read = text_File.readline()
        #   Continue the while loop

    return(list_Identification, list_Annual_income, list_Household_members)

def average_Income(list_Identification, list_Annual_income):
    #   The purpose of this function will be to perform the following:
    #   Calculate the Average Household Income
    #   Print the Identification Numbers for Households that exceed the Average
    
    list_Above_avg = []
    list_Identification_above = []

    #print(list_Annual_income, "HEY THIS IS THE ANNUAL INCOME LIST! OH SHIT")
        
    avg_Income = (sum(list_Annual_income) / len(list_Annual_income))
    
    for income in list_Annual_income:
        if income > avg_Income:
            list_Above_avg.append(list_Annual_income.index(income))
    print(income, list_Above_avg, 'income and list_Above_avg')
    
    for value in list_Above_avg:
        list_Identification_above.append(list_Identification.index(value))
        
    print(list_Identification_above)
    print("Did it work?!")
    
        
        
    #   This one is much harder, I need to iterate through list_Identification and get index values for all values > avg_Income
    
    
    return(avg_Income)
    
#def poverty_Level():





#def outport_Data()





    
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
    print('Program:  Nine')
    print()
    # End of userInfo

# End of main
main()
    
    
