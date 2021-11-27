"""
---------- Tuples ----------
"""
# A tuple is a collection which is ordered and unchangeable.
# In Python tuples are written with round brackets.
thistuple = ("apple", "banana", "cherry")
print(thistuple)
print(thistuple[1]) #return 'banana'
print(thistuple[-1]) #return 'cherry'

## Change Tuple Values
# Once a tuple is created, you cannot change its values.
# Tuples are unchangeable, or immutable as it also is called.
# But there is a workaround.
# You can convert the tuple into a list, change the list, and convert the list back into a tuple.
x = ("apple", "banana", "cherry")
y = list(x) #convert to list
y[1] = "kiwi" #value is changeable because now it is list
x = tuple(y) #convert back to tupple
print(x)

## Loop Through a Tuple
thistuple = ("apple", "banana", "cherry")
for x in thistuple:
  print(x)

## Check if Item Exists
thistuple = ("apple", "banana", "cherry")
if "apple" in thistuple:
  print("Yes, 'apple' is in the fruits tuple")

## Tuple Length
thistuple = ("apple", "banana", "cherry")
print(len(thistuple)) #return 3

## adding items to tuple is not allowd
thistuple = ("apple", "banana", "cherry")
thistuple[3] = "orange" # This will raise an error
print(thistuple)

## Create Tuple With One Item
# To create a tuple with only one item, you have to add a comma after the item,
# otherwise Python will not recognize it as a tuple.
thistuple = ("apple",)
print(type(thistuple)) #returns <class 'tuple'>
#NOT a tuple
thistuple = ("apple")
print(type(thistuple)) #returns <class 'str'>

## Remove Items
# Tuples are unchangeable, so you cannot remove items from it,
# but you can delete the tuple completely:
# The del keyword can delete the tuple completely:

thistuple = ("apple", "banana", "cherry")
del thistuple
print(thistuple) #this will raise an error because the tuple no longer exists

## Join Two Tuples
# To join two or more tuples you can use the + operator:
tuple1 = ("a", "b" , "c")
tuple2 = (1, 2, 3)

tuple3 = tuple1 + tuple2
print(tuple3) #returns ('a', 'b', 'c', 1, 2, 3)

## The tuple() Constructor
# It is also possible to use the tuple() constructor to make a tuple.
thistuple = tuple(("apple", "banana", "cherry")) # note the double round-brackets
print(thistuple)