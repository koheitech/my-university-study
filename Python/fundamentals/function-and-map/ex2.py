#check if given string is palindrome or not
# condition: ignore white space and capital/small letter

def isP(str):
    str = str.replace(' ', '').lower()
    #strip() method can remove only leading and ending whitespace
    #so, to remove all whitespace, use replace() method
    print(str)
    return str == str[::-1]

    # if str==str[::-1]:
    #     return True
    # else: return False
    #this is really redundant.
    #when returning True or Flase, just create condition in one statement like above

print(isP('A dffdff da'))