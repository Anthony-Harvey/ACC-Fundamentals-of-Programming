#********************************************************************
#
#  Author:            Anthony Harvey
#
#  Program #:         9
#
#  File Name:         Program9.py
#
#  Course:            COSC 1336 Programming Fundamentals I 
#
#  Due Date:          2018-07-16
#
#  Instructor:        Fred Kumi 
#
#  Chapter:           5, 6, and 7
#
#  Description:
#     This program reads and displays the contents
#     of a file. Then makes rainfall calculations based on it.
#********************************************************************

#***************************************************************
#
#  Function:            main
# 
#  Description:         The main function of the program
#
#  Parameters:          None
#
#  Returns:             Nothing 
#
#**************************************************************

def main():
    userInfo()
    sum_Rainfall, rainfall_List = data_Input()
    #   Call the data_Input function and collect the returned data
    avg_Monthly, lowest_Rainfall, lowest_Month, highest_Rainfall, highest_Month = rainfall_Calculations(sum_Rainfall, rainfall_List)
    #   Call the rainfall_Calculations function with sum_Rainfall and rainfall_List used as arguments
    #   and collects the returned data for use in the following data_Output call
    data_Output(avg_Monthly, lowest_Rainfall, lowest_Month, highest_Rainfall, highest_Month)
    
def data_Input():
    rainfall_List = []
    #   Creating the list that will contain data read from the 'Program9.txt' file

    print("-------------------------------------------------------------------------")
    print("The supplied rainfall data that is used for this program:")
    print()
    
    data = open('Program9.txt', 'r')
    line_Read = data.readline()
    while line_Read != '':
        words = line_Read.split()
        monthly_Rainfall = float(words[0])
        print(monthly_Rainfall)
        
        rainfall_List.append(monthly_Rainfall)
        sum_Rainfall = sum(rainfall_List)
        #   Append each iteration to a list and then sum the lists contents
        
        line_Read = data.readline()

    return(sum_Rainfall, rainfall_List)


def rainfall_Calculations(sum_Rainfall, rainfall_List):
    #   This function will do the bulk of the work
    #   It will accept the rainfall_List and sum_Rainfall arguments from main()
    #   It will then calculate the Average Monthly rainfall
    #   Then find the months with the Highest and Lowest rainfall totals
    #
    #   It then returns the relevant data to main()

    months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December']

    avg_Monthly = sum_Rainfall / 12
    
    highest_Rainfall = max(rainfall_List)
    lowest_Rainfall = min(rainfall_List)

    lowest_Index = rainfall_List.index(lowest_Rainfall)
    highest_Index = rainfall_List.index(highest_Rainfall)
    #   These two give me index values that will help me match the corresponding month in the months list
    
    lowest_Month = months[lowest_Index]
    highest_Month = months[highest_Index]
    #   The corresponding months have now been identified within the months list

    return(avg_Monthly, lowest_Rainfall, lowest_Month, highest_Rainfall, highest_Month)

def data_Output(avg_Monthly, lowest_Rainfall, lowest_Month, highest_Rainfall, highest_Month):
    print("-------------------------------------------------------------------------")
    print()
    print("Based on the supplied information, the following observations can be made:")
    print()
    print("The average monthly rainfall is", format(avg_Monthly, '.2f'), 'inches of rain')
    print("The month with the lowest rainfall amount was", lowest_Month, 'with', lowest_Rainfall, "inches of rain")
    print("The month with the highest rainfall amount was", highest_Month, 'with', highest_Rainfall, "inches of rain")


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
