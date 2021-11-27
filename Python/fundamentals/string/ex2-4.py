# the simplest way
answer = input('Answer: ')
crypt = answer

for i in crypt:
    if i != " ":
        crypt = crypt.replace(i, "*")
print(crypt)

guess = input('Guess: ')
for i in answer:
    if i != " " and i != guess:
        answer = answer.replace(i, "*")
print(answer)