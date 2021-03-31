#Task

#You are the manager of a supermarket.
#You have a list of N items together with their prices that consumers bought on a particular day.
#Your task is to print each item_name and net_price in order of its first occurrence.

#Input Format

#The first line contains the number of items, N.
#The next N lines contains the item's name and price, separated by a space.

#Output Format

#Print the item_name and net_price in order of its first occurrence.


from collections import OrderedDict

ordered_dictionary = OrderedDict()

for _ in range(int(input())):
    item, _, quantity = input().rpartition(' ')
    ordered_dictionary[item] = ordered_dictionary.get(item, 0) + int(quantity)
    
for item, quantity in ordered_dictionary.items():
    print(item, quantity)
