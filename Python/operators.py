#Task
#Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent 
#(the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

#Function Description
#Complete the solve function in the editor below.

#solve has the following parameters:

#int meal_cost: the cost of food before tip and tax
#int tip_percent: the tip percentage
#int tax_percent: the tax percentage
#Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.

#Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.

#Input Format

#There are 3 lines of numeric input:
#The first line has a double, mealscost (the cost of the meal before tax and tip).
#The second line has an integer, tippercent (the percentage of mealscost being added as tip).
#The third line has an integer, taxpercent (the percentage of mealscost being added as tax).


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(meal_cost, tip_percent, tax_percent):
    total_cost = meal_cost + (tip_percent/100 * meal_cost ) + (tax_percent/100 * meal_cost)
    print(round(total_cost))

if __name__ == '__main__':
    meal_cost = float(input())

    tip_percent = int(input())

    tax_percent = int(input())

    solve(meal_cost, tip_percent, tax_percent)
