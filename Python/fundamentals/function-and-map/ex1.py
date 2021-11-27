#returns sum of 2 smallest values multiplied by the largest value
def add_mult(a, b, c):
    mylist=[a,b,c]
    mylist.sort()
    print(mylist)
    return (mylist[0]+mylist[1])*mylist[2]

print(add_mult(3,0,8))
print(add_mult(7,3,2))