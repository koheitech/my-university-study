"""
---------- Variables ----------
"""
# Variables do not need to be declared with any particular type
# and can even change type after they have been set.

x = 4 # x is of type int
x = "Sally" # x is now of type str
print(x)

## Legal variable names:
myvar = "John"
my_var = "John"
_my_var = "John"
myVar = "John"
MYVAR = "John"
myvar2 = "John"

## Illegal variable names:
# 2myvar = "John" start with numbers
# my-var = "John" '-' is used
# my var = "John"'space' is used


## Python allows you to assign values to multiple variables in one line:
x, y, z = "Orange", "Banana", "Cherry"
print(x)
print(y)
print(z)

## Multiple Assignment
# Python allows you to assign a single value to several variables simultaneously
a=b=c=1
a,b,c = 1,2,"john"

## To combine both text and a variable, Python uses the + character:
x = "awesome"
print("Python is " + x)

## global and local variables
# If you create a variable with the same name inside a function,
# this variable will be local, and can only be used inside the function.
# The global variable with the same name will remain as it was, global and with the original value.

x = "awesome" #global

def myfunc():
  x = "fantastic" #local
  print("Python is " + x) #print local(fantastic)

myfunc()

print("Python is " + x) #print global(awesome)


# Normally, when you create a variable inside a function, that variable is local,
# and can only be used inside that function.
# To create a global variable inside a function, you can use the global keyword.
def myfunc():
  global x #'global' keyword to create global variable inside a funstion
  x = "fantastic"

myfunc()

print("Python is " + x)

# Also, use the global keyword if you want to change a global variable inside a function.
x = "awesome"
def myfunc():
  global x #by using global keyword, global varible can be modified inside the function
  x = "fantastic"

myfunc()

print("Python is " + x)

"""
---------- Data types ----------
"""
# Python has the following data types built-in by default, in these categories:

# Text Type:	str
# Numeric Types:	int, float, complex
# Sequence Types:	list, tuple, range
# Mapping Type:	dict
# Set Types:	set, frozenset
# Boolean Type:	bool
# Binary Types:	bytes, bytearray, memoryview

x = "Hello World" #str
x = 20	#int
x = 20.5	#float
x = 1j	#complex
x = ["apple", "banana", "cherry"]	#list
x = ("apple", "banana", "cherry")	#tuple
x = range(6)	#range
x = {"name" : "John", "age" : 36}	#dict
x = {"apple", "banana", "cherry"}	#set
x = frozenset({"apple", "banana", "cherry"})	#frozenset
x = True	#bool
x = b"Hello"	#bytes
x = bytearray(5)	#bytearray
x = memoryview(bytes(5))    #memoryview

"""
---------- Numbers ----------
"""
x = 1    # int
y = 2.8  # float
z = 1j   # complex

# Float can also be scientific numbers with an "e" to indicate the power of 10.
x = 35e3
y = 12E4
z = -87.7e100

print(type(x))
print(type(y))
print(type(z))

# Python does not have a random() function to make a random number,
# but Python has a built-in module called random that can be used to make random numbers:
import random

print(random.randrange(1, 10))

"""
---------- Casting ----------
"""
int()
float()
str()