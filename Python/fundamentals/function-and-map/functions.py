"""
---------- Functions ----------
"""
# A function is a block of code which only runs when it is called.
# You can pass data, known as parameters, into a function.
# A function can return data as a result.

## Creating a Function
# In Python a function is defined using the def keyword:
def my_function():
  """Documentation"""
  print("Hello from a function")

my_function() #calling function

## Arguments
# Information can be passed into functions as arguments.
# Arguments are specified after the function name, inside the parentheses.
# You can add as many arguments as you want, just separate them with a comma.
# The following example has a function with one argument (fname).
# When the function is called, we pass along a first name,
# which is used inside the function to print the full name:
def my_function(fname):
  print(fname + " Refsnes")

my_function("Emil")
my_function("Tobias")
my_function("Linus")

## Parameters or Arguments?
# The terms parameter and argument can be used for the same thing:
# information that are passed into a function.
# From a function's perspective:
# A parameter is the variable listed inside the parentheses in the function definition.
# An argument is the value that is sent to the function when it is called.

## Number of Arguments
# By default, a function must be called with the correct number of arguments.
# Meaning that if your function expects 2 arguments,
# you have to call the function with 2 arguments, not more, and not less.
def my_function(fname, lname):
  print(fname + " " + lname)

my_function("Emil", "Refsnes")

## Arbitrary Arguments, *args
# If you do not know how many arguments that will be passed into your function,
# add a * before the parameter name in the function definition.
# This way the function will receive a tuple of arguments, and can access the items accordingly:
def my_function(*kids):
  print("The youngest child is " + kids[2])

my_function("Emil", "Tobias", "Linus")


## Keyword Arguments
# You can also send arguments with the key = value syntax.
# This way the order of the arguments does not matter.
def my_function(child3, child2, child1):
  print("The youngest child is " + child3)

my_function(child1 = "Emil", child2 = "Tobias", child3 = "Linus")

## Arbitrary Keyword Arguments, **kwargs
# If you do not know how many keyword arguments that will be passed into your function,
# add two asterisk: ** before the parameter name in the function definition.
# This way the function will receive a dictionary of arguments, and can access the items accordingly:
def my_function(**kid):
  print("His last name is " + kid["lname"])

my_function(fname = "Tobias", lname = "Refsnes")

## Default Parameter Value
# The following example shows how to use a default parameter value.
# If we call the function without argument, it uses the default value:
def my_function(country = "Norway"):
  print("I am from " + country)

my_function("Sweden")
my_function("India")
my_function() #returns 'Norway'
my_function("Brazil")

## Passing a List as an Argument
# You can send any data types of argument to a function (string, number, list, dictionary etc.),
# and it will be treated as the same data type inside the function.
# E.g. if you send a List as an argument, it will still be a List when it reaches the function:

def my_function(food):
  for x in food:
    print(x)

fruits = ["apple", "banana", "cherry"]
my_function(fruits)
#In this case, arguments passed are list


## Return Values
# To let a function return a value, use the return statement:
def my_function(x):
  return 5 * x

print(my_function(3))
print(my_function(5))
print(my_function(9))

## The pass Statement
# function definitions cannot be empty,
# but if you for some reason have a function definition with no content,
# put in the pass statement to avoid getting an error.
def myfunction():
  pass

## Recursion
def tri_recursion(k):
  if(k > 0):
    result = k + tri_recursion(k - 1)
    print(result)
  else:
    result = 0
  return result

print("\n\nRecursion Example Results")
tri_recursion(6)
#returns
# Recursion Example Results
# 1
# 3
# 6
# 10
# 15
# 21

"""
---------- Lambda ----------
"""
# A lambda function is a small anonymous function.
# A lambda function can take any number of arguments, but can only have one expression.

## Syntax
# lambda arguments : expression
# The expression is executed and the result is returned:
x = lambda a : a + 10
print(x(5)) #retunrs 15

# Lambda functions can take any number of arguments:
x = lambda a, b : a * b
print(x(5, 6))

## Why Use Lambda Functions?
# The power of lambda is better shown when you use them
# as an anonymous function inside another function.
def myfunc(n):
  return lambda a : a * n #function which multiplies lamda by argument

mydoubler = myfunc(2)
#assigning function to variable 'mydoubler'
#it became lamda function which can multiply argument by 2.

print(mydoubler(11)) # returns 22


# Or, use the same function definition to make two functions, in the same program:
def myfunc(n):
  return lambda a : a * n

mydoubler = myfunc(2)
mytripler = myfunc(3)
# using myfunc, create lamda functions of doubling and tripling arguments
print(mydoubler(11)) #returns 22
print(mytripler(11)) #returns 33

# note: Use lambda functions when an anonymous function is required for a short period of time.