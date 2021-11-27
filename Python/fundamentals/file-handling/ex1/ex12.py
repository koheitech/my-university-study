f = open("test.txt")
a = f.readlines()
f.close()

b = [int(num.strip()) for num in a]
# here, we can split and at the same time convert to int  NICE!

print("Content of the file:") #additional part
for num in b:
    # print("\t", num)
    print(num)

print("Result: ", sum(b))