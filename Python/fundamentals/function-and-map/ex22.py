#best practice

def isP(str):
    return str.lower().replace(' ', '') == str.lower().replace(' ', '')[::-1]

print(isP('A dffdff daaff'))