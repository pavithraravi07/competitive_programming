# Fill in the missing lines of code to define the class InsufficientFundsException
# when the input bankBalance is less than the input withdrawAmount.
# Else it prints "Valid Debit Amount"

# The calling code Hello.py is as given below.

from InsufficientFundsException import InsufficientFundsException
bankBalance = int(input())
withdrawAmount = int(input())

try:
    if(bankBalance < withdrawAmount):
        raise InsufficientFundsException("Insufficient Funds")    
    print ("Valid Debit Amount")
except InsufficientFundsException as e:
    print (e)


class InsufficientFundsException(Exception):
    def __init__ (self,arg):
        super().__init__(arg)