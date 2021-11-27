import random as r

writer = open("ex13.txt", "w")
for i in range(5):
    writer.write(str(r.randint(0,10))+"\n")
writer.close()
# here the codes above,
# it creates txt file which contains 5 random numbers
# additional stuff

f = open("ex13.txt")
count = 0

for i in f:
    i.strip() #remove "\n"
    count = int(i)+count
f.close()

print("sum:", count)


