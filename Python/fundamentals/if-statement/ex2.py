sal = float(input('Please enter your monthly salary(euros): '))
dur = float(input('How many years are you working here?: '))

if dur>2:
    bonus = sal*(dur-2)*0.15
    print(f'you can get bonus of {bonus} euros.')
else:
    print('Sorry, there is no bonus for you.')

