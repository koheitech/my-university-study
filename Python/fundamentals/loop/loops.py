"""
---------- While Loop ----------
"""
i = 1
while i < 6:
  print(i)
  i += 1

## The break Statement
# With the break statement we can stop the loop even if the while condition is true:
i = 1
while i < 6:
  print(i)
  if i == 3:
    break
  i += 1 #return 1, 2, 3

## The continue Statement
# With the continue statement we can stop the current iteration, and continue with the next:
i = 0
while i < 6:
  i += 1
  if i == 3:
    continue
  print(i) #return 1, 2, 4, 5, 6

## The else Statement
# With the else statement we can run a block of code once when the condition no longer is true:
i = 1
while i < 6:
  print(i)
  i += 1
else:
  print("i is no longer less than 6")
#return
# 1
# 2
# 3
# 4
# 5
# i is no longer less than 6

"""
---------- For Loop ----------
"""
# A for loop is used for iterating over a sequence
# (that is either a list, a tuple, a dictionary, a set, or a string).
# This is less like the for keyword in other programming languages,
# and works more like an iterator method as found in other object-orientated programming languages.
# With the for loop we can execute a set of statements, once for each item in a list, tuple, set etc.

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)

# Loop through the letters in the word "banana"
for x in "banana":
  print(x)
#returns
# b
# a
# n
# a
# n
# a

## break
# Exit the loop when x is "banana":
fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)
  if x == "banana":
    break
#return 'apple' 'banana'

## continue
# Do not print banana:

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    continue
  print(x)
#returns 'apple' 'cherry'

## Range
# The range() function returns a sequence of numbers, starting from 0 by default,
# and increments by 1 (by default), and ends at a specified number.
for x in range(6):
  print(x) #returns 0, 1, 2, 3, 4, 5
# Note that range(6) is not the values of 0 to 6, but the values 0 to 5.

for x in range(2, 6):
  print(x) #returns 2, 3, 4, 5

## Increment the sequence with 3 (default is 1):
for x in range(2, 30, 3):
  print(x)
#returns 2, 5, 8, 11, 14, 17, 20, 23, 26, 29

## else in for loop
# The else keyword in a for loop specifies a block of code to be executed when the loop is finished:
for x in range(6):
  print(x)
else:
  print("Finally finished!")
#returns
# 0
# 1
# 2
# 3
# 4
# 5
# Finally finished!

## nested for
adj = ["red", "big", "tasty"]
fruits = ["apple", "banana", "cherry"]

for x in adj:
  for y in fruits:
    print(x, y)

#returns
# red apple
# red banana
# red cherry
# big apple
# big banana
# big cherry
# tasty apple
# tasty banana
# tasty cherry

## The pass statement
# for loops cannot be empty, but if you for some reason have a for loop with no content,
# put in the pass statement to avoid getting an error.
for x in [0, 1, 2]:
  pass

## Python enumerate() with for loop
# The enumerate() method adds counter to an iterable and returns it (the enumerate object).
# enumerate(iterable, start=0)

# with enumertate(), we can use for loop with counter
grocery = ['bread', 'milk', 'butter']

for item in enumerate(grocery):
  print(item)

print('\n')
for count, item in enumerate(grocery):
  print(count, item)

print('\n')
# changing default start value
for count, item in enumerate(grocery, 100):
  print(count, item)

#returns;
# (0, 'bread')
# (1, 'milk')
# (2, 'butter')

# 0 bread
# 1 milk
# 2 butter

# 100 bread
# 101 milk
# 102 butter