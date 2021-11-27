temp = input('please enter your temperature: ')
# would like to validate and throw error for character input

temp = float(temp)
if 35<=temp<=37:
    print('Everything looks good.')
elif temp<35:
    print("Too cold.")
else:
    print("Too hot.")
print("temperature check finished.")