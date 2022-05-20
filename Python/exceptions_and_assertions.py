# Fill in the missing lines of code, so that the function creditAmountToAccount
# generates an AssertionError with the message "Negative Credit Amount"
# when the value of parameter credit is negative. Else it prints the credit value.


def creditAmountToAccount(credit):
    assert (credit >= 0), "Negative Credit Amount"
    print (credit)

try:
    creditAmountToAccount(1500)
    creditAmountToAccount(-100)    
except AssertionError as ae:
    print (ae)