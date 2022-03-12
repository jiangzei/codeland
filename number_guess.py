""" The First Game Designed by Python """
"""
************************************************************
* Name: number_guess                                       *
* Function: Game,Test                                      *
* Author: peda                                             *
* Creat Time: 2022/1/15                                    *
* Modification Time: 2022/1/15: Creat & Add basic function *
*                    2022/1/15: Process optimization       *
*                    2022/2/13: Add annotation             *
* Copyright: Use in this computer only(pedabobomacbook)    *
************************************************************
"""

import random

count = 3
tag = random.randint(0, 10)

print("guess which number (from 0 to 10) am i thinking about: \n\
you only get 3 chances:")
while count > 0:
    temp = input()
    guess = int(temp)

    if(guess == tag):
        print("congratulations~you are right!!")
        break
        
    else:
        if guess < tag:
            print("the number you guess is small")
        else:
            print("the number you guess is large")
        count -= 1

print("game is over")
    
