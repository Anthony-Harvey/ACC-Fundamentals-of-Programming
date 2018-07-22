#End Goals / Output:
#    -Create a dictionary containing the key:value pairs: {team_Name:times_Won}
#    -Create a dictionary containing the key:value pairs: {year:team_Name}
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
#  Due Date:          2018-07-
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
    dictionary_Creation()
    #dictionary1, dictionary2 = dictionary_Creation()
    #dictionary_Query(dictionary1, dictionary2)        


def dictionary_Creation():
    team_Victories = {} # team_Name:times_Won
    win_Timeline = {} # year:team_Winner
    year = 1903
    times_Won = 0
    count_Ever_Won = 0

    input_File = open('Program11.txt', 'r')
    team_Name = input_File.readline()
    while team_Name != '':
        
        if year == 1904 or year == 1994:
            year += 1

        win_Timeline[year] = team_Name.rstrip('\n')
        year += 1
        
        
        if team_Name.rstrip('\n') not in team_Victories.keys():
            team_Victories[team_Name.rstrip('\n')] = 1
            #print(team_Victories)
            count_Ever_Won += 1


        else:
            team_Victories[team_Name.rstrip('\n')] += 1
            #team_Victories.append(team_Name.rstrip('\n'))

        team_Name = input_File.readline()
    print("The win_Timeline looks like this:",win_Timeline)
    print(len(win_Timeline.keys()))
    print("====================================================")
    print("Total Number of Teams that have ever won a World Series (Including 'Boston Americans'):", count_Ever_Won)

    print("Incoming Team Name Keys!:")
    print(team_Victories.keys())
    print(team_Name)
    vic_list = team_Victories

    print()
    print("The sum of all values of team_Victories:", sum(team_Victories.values()))
    print("The total number of years the World Series has happened:", ((2018-(1903)) - 2))


#           blah
#           dictionary2[] = accumulator
#           accumulator += 1
            
#        return('junk1', 'junk2')
#        return(team_Victories, win_Timeline)         
#    
#    def dictionary_Query(dictionary1, disctionary2):
#        asd
#        year = input("Which year would you like to know more about?")
#            while year == 1903 or year == 1994:
#                year = input("There was no World Series! Please enter another year!")
#            
#        
#        
#        

#        print('blahblahblah:", )
#        print('blahblahblah:", )
#        print('blahblahblah:", )

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





