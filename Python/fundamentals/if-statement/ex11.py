temp = input('please enter your temperature: ')
# validating character input
try:
    val = float(temp)
    if 35<=val<=37:
        print('Everything looks good.')
    elif val<35:
        print("Too cold.")
    else:
        print("Too hot.")
except ValueError:
    print("You have to input numbers, either integers or floats.")
