# Task
# 1. A program user inputs x value.
# 2. The program computes two intermediate values “a” and “b”, and outputs these values on the screen.
# 3. The program computes and outputs the final result “y” using the first or the second expression, depending on the given condition:
#    y = (C) ? 1st expression : 2nd expression

# a = x**2+2
# b = 2*sqrt(x-3)
# c: a<25
# 1st expression: math.log((a/10)-b
# 2nd expression: (a*b)/2



import math

x = float(input('Please enter a number(x>=3): '))
# since b = 2*sqrt(x-3), x should be more than or equal to 3 to be defined.

if(x < 3): #validation for input
    print('calculation cannot be done. Please enter a number which is more than or equal to 3.')
else:
    a = x**2+2
    b = 2*(math.sqrt(x-3))
    print(f'value a: {a}')
    print(f'value b: {b}')

    if(a<25):
        if(((a/10)-b)>0):
            #validation for expression1
            #((a/10)-b) should be more than 0 for natural log to be defined.
            print('1st expression is chosen:')
            print(math.log((a/10)-b)) #expression1
        else:
            print('further calculation cannot be done because of the domain error.')
    else:
        print('2nd expression is chosen:')
        print((a*b)/2) # expression2

# I intentionally did not assign expressions into variables,
# because I thought if you calculated the expression before conditioning,
# it might throw and error.
# and also for better time complexity.

# Thank you very much.
# Kohei Miyamoto
# 191ADB103
