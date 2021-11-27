# Python encoding list
# https://docs.python.org/2.4/lib/standard-encodings.html

f1 = open("demo.txt")
a =f1.read()
f1.close # make sure to close file every time done with file handling
print(a)
print(type(a))
print(a[1])
print("--------------------------")

f2 = open("demo.txt", encoding="utf-8") #encoding specified
print(f2.read(5)) # read only 5 letters
print(f2.readline())
f2.close()
print("--------------------------")

f3 = open("demo.txt")
b = f3.readlines()
f3.close()
print(b)
print(b[1])
for x in b:
    print(x)

# when using "readlines" method,
# the escape sequence '\n' disturbs us
# so, it is nice to use method "strip"

for x in b:
    print(x.strip())

b2 = [x.strip() for x in b] #short version

print("--------------------------")
f4 = open("write.txt", "w")
f4.write("only 1 string\nand 2") # "write" method can write only one line
f4.close()

print("--------------------------")
f5 = open("write.txt", "a")
f5.writelines(b) # more than one strings
# and its appended this time
f5.close()

print("--------------------------")
# different syntax
with open("write.txt") as f6:
    print(f6.read())
# this is nice because there is no need for closing the file
# but this allows to open only one file at once










