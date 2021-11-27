h = int(input('Enter the height of your tree: '))
sym = '*'
for i in range(1, h+1): #loop h times
    print(" "*(h-i)+sym*(2*i-1))
    # num of space is 'h-i'
    # num of symbol is '2*i-1'

