#Task

#Raghu is a shoe shop owner. His shop hasX  number of shoes.
#He has a list containing the size of each shoe he has in his shop.
#There are N number of customers who are willing to pay xi amount of money only if they get the shoe of their desired size.

#Your task is to compute how much money Raghu earned.

#Input Format

#The first line contains X, the number of shoes.
#The second line contains the space separated list of all the shoe sizes in the shop.
#The third line contains N, the number of customers.
#The next N lines contain the space separated values of the shoe size desired by the customer and xi, the price of the shoe.

#Output Format

#Print the amount of money earned by Raghu.


from collections import Counter

x = int(input())
shoe_sizes = Counter(map(int,input().split()))

money_earned = 0

for _ in range(int(input())):
    cus_size, shoe_price = map(int,input().split())
    if shoe_sizes[cus_size]:
        money_earned += shoe_price
        shoe_sizes[cus_size] -= 1
print(money_earned)

