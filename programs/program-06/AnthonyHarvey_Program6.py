#***************************************************************
#
#  Author:              Anthony Harvey
#   
#  Program #:           Six
#
#  File Name:           Program6.py
#
#  Course:              COSC 1336 Programming Fundamentals I
#
#  Course Synonym:      32555
#
#  Due Date:            2018-06-06
#
#  Instructor:          Fred Kumi
#
#  Chapter:             Four
#
#  Description:         Sixth program in class. Repetition Structures.
#
#***************************************************************

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


    rooms_Total = 0
    occupied_Total = 0
    
    floors = int(input("How many floors are in your hotel: "))
    print()
    
    for num in range(1, floors + 1):
        print("How many rooms are on floor ", num, sep = '', end='')
        rooms_Floor = int(input(': '))
        if rooms_Floor < 1:
            rooms_Floor = int(input("Please enter a valid number of rooms: "))
        
        rooms_Total = rooms_Floor + rooms_Total
        
        floor_Occupancy = int(input("How many of those are currently Occupied: "))
        if floor_Occupancy > rooms_Floor or floor_Occupancy < 0:
            floor_Occupancy = int(input("Please enter a valid number of Occupied rooms: "))
  
        occupied_Total = floor_Occupancy + occupied_Total
        print()

    
    occupancy_Rate = format(float((occupied_Total / rooms_Total) * 100), '.2f')
    
    print("The total number of rooms in your Hotel is: ", rooms_Total, sep='')
    print("The total number of OCCUPIED rooms in your Hotel is: ", occupied_Total, sep='')
    print("The total number of VACANT rooms in your Hotel is: ", rooms_Total - occupied_Total, sep='')
    print()
    print("The current Occupancy rate is: ", occupancy_Rate, '%', sep='')
    

    
    
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
    print('Program:  Six')
    print()
    # End of userInfo


# Call functions
userInfo()
main()

# End of Program 6
