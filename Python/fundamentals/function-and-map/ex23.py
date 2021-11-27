def isPal(str):
    str = str.lower()

    #removing all spaces, saving into temp
    temp = ""
    for i in str:
        if i != " ":
            temp = temp+i

    #reverseing temp
    rev=""
    for i in temp:
        rev = i+rev

    return temp == rev

print(isPal('aab ba a'))