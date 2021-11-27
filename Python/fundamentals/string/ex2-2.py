answer = input('Answer: ')
crypt = "" #initialize a string

#create encrypted answer;
for x in answer:
    if x == ' ':
        crypt += ' '
    else:
        crypt += '*'
print(crypt)

#guess with enumerate()
guess = input('Guess: ')
for count, x in enumerate(answer):
    if guess == x:
        crypt = crypt[:count]+x+crypt[count+1:]
print(crypt)

