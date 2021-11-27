def aaa(*args):
    sum=0
    for i in args:
        if type(i) == int or type(i) == float: #validation for arguments
            sum += i
    return sum

print(aaa('aa', 4, 6, 'fsda'))

#------------------------------

def bbb(*args, multi=1):
    sum=0
    for i in args:
        if type(i) == int or type(i) == float: #validation for arguments
            sum += i*multi
    return sum

print(bbb('aa', 4, 6, 'fsda', multi=2))

#------------------------------
def ccc(*args, multi=1, cond=True):
    sum=0
    for i in args:
        if type(i) == int or type(i) == float: #validation for arguments
            sum += i*multi
    if cond == True: #validation whether you print out or not
        print(sum)
    return sum

print(ccc('aa', 4, 6, 'fsda', multi=2, cond=False))

