"""
---------- If else ----------
"""
## Identaion is important in python
# Python relies on indentation (whitespace at the beginning of a line) to define scope in the code.

a = 200
b = 33
if b > a:
  print("b is greater than a")
elif a == b:
  print("a and b are equal")
else:
  print("a is greater than b")
# returns "a is greater than b"

# If you have only one statement to execute, you can put it on the same line as the if statement.
if a > b: print("a is greater than b")

#If you have only one statement to execute, one for if, and one for else,
# you can put it all on the same line:
a = 2
b = 330
print("a>b") if a > b else print("a<b")
## This technique is known as Ternary Operators, or Conditional Expressions.

a = 330
b = 330
print("A") if a > b else print("=") if a == b else print("B")

## nested if
x = 41

if x > 10:
  print("Above ten,")
  if x > 20:
    print("and also above 20!")
  else:
    print("but not above 20.")
#returns Above ten, and also above 20!

# if statements cannot be empty, but if you for some reason have an if statement with no content,
# put in the pass statement to avoid getting an error.
a = 33
b = 200

if b > a:
  pass
