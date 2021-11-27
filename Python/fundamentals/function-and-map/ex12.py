def addMul(numL):
    numL.sort()
    return (numL[0]+numL[1])*numL[2]

num=input('enter 3 numbers separated by space\n')
numL=list(map(int, num.split()))

while(True):
    if len(numL)==3:
        break
    else:
        num=input('enter 3 numbers separated by space\n')
        numL=list(map(int, num.split()))

print(addMul(numL))