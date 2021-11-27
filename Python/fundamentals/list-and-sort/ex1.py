loop=True
list=[]

while loop == True:
    num=input('please enter number(enter \'q\' for quit): ')
    if num.isalpha() and num == 'q':
        loop = False
        break
    elif num.isalpha():
        print('please input numbers')
        continue
    else:
        num = float(num)
        list.append(num)

avg=sum(list)/len(list)
print(f'average value: {avg:.2f}') #format literal
print(f'All the values you entered; \n{list}')


