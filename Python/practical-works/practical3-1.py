# Task: 
# Given an integer K and a text file, remove K leading characters from each line of the file. 
# If the length of some line is less than K then remove all characters from the line.

with open("lab3.txt") as f:
    mylist = f.readlines()

mylist = [x.strip("\n") for x in mylist] #strip with \n
# print(mylist)
newlist = mylist.copy()
k = 5
#for count, item in enumerate(grocery):
for count, x in enumerate(mylist):
    if len(x) > k:
        newlist[count] = newlist[count][k:]
    else:
        newlist[count] = " "

print(mylist, newlist)

f = open("newlines.txt", "w")
for x in newlist:
    f.write(x)
    f.write("\n")
f.close()