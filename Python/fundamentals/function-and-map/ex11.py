#returns sum of 2 smallest values multiplied by the largest value
#not only 3 arguments, but more than 3

def add_mult(*args):
    mylist=[]
    for i in args:
        if type(i)==int or type(i)==float: #validation of input
            mylist.append(i)
    mylist.sort()
    print(mylist)
    return (mylist[0]+mylist[1])*max(mylist)

print(add_mult(3,0,8,'aa', 9))