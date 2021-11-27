list=[]

while True:
    num=input('please enter number(enter \'q\' for quit): ')
    if num.isalpha() and num == 'q':
        False
        break
    elif num.isalpha():
        print('please input numbers')
        continue
    else:
        num = float(num)
        list.append(num)

#1.a&b
avg=sum(list)/len(list)
print(f'average value: {avg:.2f}')
print(f'All the values you entered; \n{list}')

#1.c
sortList = list.copy()
sortList.sort()
print(f'top3 numbers; \n{sortList[-1:-4:-1]}')
print(f'\nbottom3 numbers; \n{sortList[:3]}')
