# reverse input and make the first and last letters capital

name = input("Enter your name: ")
reverse=name[0].upper()+name[1:-1]+name[-1].upper()
print(reverse[::-1])