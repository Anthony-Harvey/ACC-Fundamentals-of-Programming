#End Goals / Output:
#DONE-Create a dictionary containing the key:value pairs: {team_Name:times_Won}
#DONE-Create a dictionary containing the key:value pairs: {year:team_Name}
#    -Prompt the user for a specific Year between 1903 and 2017. 
#        -Be sure to kickback any 1904 / 1994 user input.
#        -Display the Name of the Team that Won
#    -The program should consist of at least 4 Functions
#        -main() and userInfo() included
#    -Run the Program 5 times using the following:
#        -1903, 1994, 2009, 2016, 2017

#   Note: The Boston Americans team had changed names to Boston Red Sox at some point.

#********************************************************************
#
#  Author:            Anthony Harvey
#
#  Program #:         11
#
#  File Name:         Program11.py
#
#  Course:            COSC 1336 Programming Fundamentals I 
#
#  Due Date:          2018-07-27
#
#  Instructor:        Fred Kumi 
#
#  Chapter:           5, 6, 7, 8, 9
#
#  Description:       This prompts a user for a year between 1903 and 2018
#                     and gives them relevant data on the the World Series winners.
#
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
    team_Victories, win_Timeline, year_List = dictionary_Creation()
    dictionary_Query(team_Victories, win_Timeline, year_List)        


def dictionary_Creation():
    team_Victories = {} # team_Name:times_Won
    win_Timeline = {} # year:team_Winner
    year_List = []
    year = 1903
    times_Won = 0
    count_Ever_Won = 0

    input_File = open('Program11.txt', 'r')
    team_Name = input_File.readline()
    while team_Name != '':
        
        if year == 1904 or year == 1994:
            year += 1

        win_Timeline[year] = team_Name.rstrip('\n')
        year_List.append(year)

        year += 1
        
        
        if team_Name.rstrip('\n') not in team_Victories.keys():
            team_Victories[team_Name.rstrip('\n')] = 1
            #print(team_Victories)
            count_Ever_Won += 1


        else:
            team_Victories[team_Name.rstrip('\n')] += 1
            #team_Victories.append(team_Name.rstrip('\n'))

        team_Name = input_File.readline()
#    print("The win_Timeline looks like this:")
#    print("---------------------------------")
#    print(year_List)
#    print(win_Timeline)
#    print(len(win_Timeline.keys()))
#    print("====================================================")
#    print("Total Number of Teams that have ever won a World Series (Including 'Boston Americans'):", count_Ever_Won)
#    print("====================================================")
#    print("Incoming team_Victories info!:")
#    print(team_Victories.keys())
#    print("====================================================")
#    print(team_Victories)
#    print("====================================================")
#    print("Incoming win_Timeline info:")
#    print(win_Timeline.keys())
#    print("====================================================")
#    print(win_Timeline)

#    print()
#    print("The sum of all values of team_Victories:", sum(team_Victories.values()))
#    print("The total number of years the World Series has happened:", ((2018-(1903)) - 2))
#    print()

    return(team_Victories, win_Timeline, year_List)

def dictionary_Query(team_Victories, win_Timeline, year_List):
    # I wonder...could I just put most of the dictionary_Query function into the try/except lol..    
    while True:
        try:
            user_Year = int(input("Enter a year and the World Series winner will be returned: "))
        except:
            ValueError
            print("(ERROR: Please enter a valid year)")           
            continue
        else:
            break
    while user_Year == 1904 or user_Year == 1994:
        user_Year = int(input("There was no World Series this year! Please enter another year:"))

    if user_Year < 1903:
        print("I'm sorry, but there were no World Series games played before 1903.")
        user_Year = int(input("Please enter a new year: "))
    elif user_Year > year_List[-1]:
#    elif user_Year > list(win_Timeline.keys())[-1]:
        # This is maybe not the best way to do this.
        print("I'm sorry, but either our datbase is stale, or we can't guess the future.")
        int(input("Please enter a new year: "))

    print("The team that had won the World Series in", user_Year, 'was the', win_Timeline[user_Year])
    print()
    

#**************************************************************
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
    print('Program:  Eleven')
    print()
    # End of userInfo

# End of main
main()





