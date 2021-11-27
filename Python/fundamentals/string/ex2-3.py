answer = input("Answer: ")
crypt = answer

# for i in range(len(STRING)) == like a usual for loop
for i in range(len(crypt)):
    if crypt[i].isalpha():
         crypt = crypt.replace(crypt[i], "*")
print(crypt)
print(answer)

guess = input('Guess: ')

if guess in answer:
    for x in range(len(answer)):
        if guess == answer[x]:
            crypt = crypt[:x]+guess+crypt[x+1:]
    print(crypt)
else:
    print('guess failed.')