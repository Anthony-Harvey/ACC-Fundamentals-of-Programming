def average_Income():
    #   The purpose of this function will be to perform the following:
    #   Calculate the Average Household Income
    #   Print the Identification Numbers for Households that exceed the Average

    list_Above_avg = []
    list_Annual_income = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

    avg_Income = (sum(list_Annual_income) / len(list_Annual_income))
    print(avg_Income)

    for income in list_Annual_income:
        if income > avg_Income:
            list_Above_avg.append(list_Annual_income.index(income))
            print(income, list_Above_avg, 'income and list_Above_avg')


average_Income()
