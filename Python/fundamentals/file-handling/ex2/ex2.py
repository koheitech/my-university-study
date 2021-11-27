# write several lines of text to a file
# read the content of the file
# remove "\n" character from the text
# replace letters with capital letters in every third line of text
# append everything back to the file


f = open("ex2.txt")
mylist = f.readlines()
f.close()
myline = [x.strip("\n") for x in mylist]

length = len(myline)
#print(length)

n=1
capsline = []
while length > 2:
    myline[3*n-1] = myline[3*n-1].upper()
    capsline.append(myline[3*n-1])
    n+=1
    length-=3

# for x in capsline:
#     print(x)

f = open("ex2.txt", "a")
for x in capsline:
    f.write("\n")
    f.write(x)
f.close()