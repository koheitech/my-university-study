# wite the several lines of integers to the file
# read the contents of the file and calculate the sum of the numbers
# and display the result

with open("test.txt") as f:
    nums = f.readlines()

mylist = [x.strip("\n") for x in nums] #strip with \n

intlist = [int(i) for i in mylist] # convert to integers

print("sum of the integers: ", sum(intlist))
