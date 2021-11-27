# my try
answer = input("Enter a sentence: ")
list = []
for x in answer:
    if x==" ":
        list.append(" ")
        continue
    list.append("*")

print(answer)
print(list)
enc = "".join(list)
print(enc)
# appending to the list and covert to string with 'join'
# but this is not efficient

guess = input("Enter your guess: ")

ans = ""
for x in answer:
       if x == guess:
           ans += guess
       elif x == " ":
           ans += " "
       else:
           ans += "*"

print(ans)