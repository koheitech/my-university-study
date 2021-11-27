num1 = float(input('Number1: '))
num2 = float(input('Number2: '))
num3 = float(input('Number3: '))

if num1<num2 and num1<num3:
    if num2<num3:
        print(f'{num1} < {num2} < {num3}')
    else:
        print(f'{num1} < {num3} < {num2}')
elif num2<num1 and num2<num3:
    if num1<num3:
        print(f'{num2} < {num1} < {num3}')
    else:
        print(f'{num2} < {num3} < {num1}')
elif num3<num1 and num3<num2:
    if num1<num2:
        print(f'{num3} < {num1} < {num2}')
    else:
        print(f'{num3} < {num2} < {num1}')

elif num1==num2 and num2==num3:
    print("all the numbers are the same.")

else:
    if num1==num2:
        print(f'{num1} = {num2} < {num3}') if num1 < num3 else print(f'{num3} < {num2} = {num1}')
    elif num1==num3:
        print(f'{num1} = {num3} < {num2}') if num1 < num2 else print(f'{num2} < {num3} = {num1}')
    else:
        print(f'{num2} = {num3} < {num1}') if num2 < num1 else print(f'{num1} < {num3} = {num2}')

