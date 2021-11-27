f = open("ex23.txt")
l = f.readlines()
f.close()
a = list()

count = 1
for line in l:
    a.append(line.strip()) #appending string in "ex23.txt" to list

for line in a:
    if count%3==0:
        a[count-1] = line.upper()
        count+=1
    else:
        count+=1

f = open("ex23.txt", "a")
f.write("\n")
for line in a:
    f.write(line + "\n")
f.close()