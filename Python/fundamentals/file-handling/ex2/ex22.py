f = open("ex22.txt")
a = f.readlines()
f.close()

b = [line.strip() for line in a]

f = open("ex22.txt", "a")
f.writelines("\n")

count =1
for line in b:
    if count % 3 ==0: #every 3 line
        f.writelines(line.upper())
        f.writelines("\n")
    else:
        f.writelines(line)
        f.writelines("\n")
    count += 1
