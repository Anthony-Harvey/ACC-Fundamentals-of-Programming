# This program imports the simulation module and
# creates three instances of the Coin class.

import coin

def main():
    # Create three objects from the Coin class.
    Coin = 5
    a = coin.Coin()
    b = coin.Coin()
    c = coin.Coin()

    testDel(a, b, c)
    
def testDel(coin1, coin2, coin3):
    # Display the side of each coin that is facing up.
    print('I have three coins with these sides up:')
    print(coin1.get_sideup())
    print(coin2.get_sideup())
    print(coin3.get_sideup())
    print()
    
    # Toss the coin.
    print('I am tossing all three coins...')
    print()
    coin1.toss()
    coin2.toss()
    coin3.toss()
    coin3.set_sideup("Something")

    # Display the side of each coin that is facing up.
    print('Now here are the sides that are up:')
    print(coin1.get_sideup())
    print(coin2.get_sideup())
    print(coin3.get_sideup())
    print()

# Call the main function.
main()
