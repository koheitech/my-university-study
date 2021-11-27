"""
---------- Dictionaries ----------
"""
## Dictionary
# A dictionary is a collection which is unordered, changeable and indexed.
# In Python dictionaries are written with curly brackets, and they have keys and values.

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict) #returns {'brand': 'Ford', 'model': 'Mustang', 'year': 1964}

## Accessing Items
# You can access the items of a dictionary by referring to its key name, inside square brackets:
x = thisdict["model"] #returns Mustang

# There is also a method called get() that will give you the same result:
x = thisdict.get("model") #returns Mustang

## Change Values
# You can change the value of a specific item by referring to its key name:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
thisdict["year"] = 2018

## Loop Through a Dictionary
# You can loop through a dictionary by using a for loop.
# When looping through a dictionary, the return value are the keys of the dictionary,
# but there are methods to return the values as well.

# Print all key names in the dictionary, one by one:
for x in thisdict:
  print(x)
# returns keys
# brand
# model
# year

# Print all values in the dictionary, one by one:
for x in thisdict:
  print(thisdict[x])
# returns values
# Ford
# Mustang
# 1964

# You can also use the values() method to return values of a dictionary:
for x in thisdict.values():
  print(x)

# Loop through both keys and values, by using the items() method:
for x, y in thisdict.items():
  print(x, y)
#returns
# brand Ford
# model Mustang
# year 1964

## Check if Key Exists
# To determine if a specified key is present in a dictionary use the in keyword:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
if "model" in thisdict:
  print("Yes, 'model' is one of the keys in the thisdict dictionary")

#you can check the existence of value by using 'values()' attribute
if "Ford" in thisdict.values():
  print("Yes, 'Ford' is one of the values in the thisdict dictionary")


## Dictionary Length
print(len(thisdict))

## Adding Items
# Adding an item to the dictionary is done by using a new index key and assigning a value to it:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
thisdict["color"] = "red"
print(thisdict)

## Removing Items
# There are several methods to remove items from a dictionary:

# The pop() method removes the item with the specified key name:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
thisdict.pop("model")
print(thisdict)

# The popitem() method removes the last inserted item
# (in versions before 3.7, a random item is removed instead):
thisdict.popitem()

# The del keyword removes the item with the specified key name:
del thisdict["model"]

#The del keyword can also delete the dictionary completely:
del thisdict
print(thisdict) #this will cause an error because "thisdict" no longer exists.

# The clear() method empties the dictionary:

thisdict.clear()
print(thisdict) #returns '{}'

## Copy a Dictionary
# You cannot copy a dictionary simply by typing dict2 = dict1,
# because: dict2 will only be a reference to dict1,
# and changes made in dict1 will automatically also be made in dict2.
# There are ways to make a copy, one way is to use the built-in Dictionary method copy().

# Make a copy of a dictionary with the copy() method:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
mydict = thisdict.copy()
print(mydict)

# Make a copy of a dictionary with the built-in function dict():
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
mydict = dict(thisdict)
print(mydict)

## Nested Dictionaries
# A dictionary can also contain many dictionaries, this is called nested dictionaries.

# Create a dictionary that contain three dictionaries:
myfamily = {
  "child1" : {
    "name" : "Emil",
    "year" : 2004
  },
  "child2" : {
    "name" : "Tobias",
    "year" : 2007
  },
  "child3" : {
    "name" : "Linus",
    "year" : 2011
  }
}

# Or, if you want to nest three dictionaries that already exists as dictionaries:
# Create three dictionaries, then create one dictionary that will contain the other three dictionaries:

child1 = {
  "name" : "Emil",
  "year" : 2004
}
child2 = {
  "name" : "Tobias",
  "year" : 2007
}
child3 = {
  "name" : "Linus",
  "year" : 2011
}

myfamily = {
  "child1" : child1,
  "child2" : child2,
  "child3" : child3
}

## The dict() Constructor
thisdict = dict(brand="Ford", model="Mustang", year=1964)
# note that keywords are not string literals
# note the use of equals rather than colon for the assignment
print(thisdict)



"""
---------- Comprehension notation ----------
"""
# Comprehension notation is special notation which allows to write data container such as list or dictionaries

## List comprehension
# [expression for var in iterable]

squares = [v ** 2 for v in range(10)]
print(squares) #returns [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]

# conditioning with if statement
even_lst = [v for v in range(10) if v % 2 == 0]
print(even_lst) #returns [0, 2, 4, 6, 8]

## Set comprehension
{x for x in range(30) if x % 2 == 0}
# returns {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28}

## dictionary comprehension
square_dict = {num: num*num for num in range(1, 11)}
print(square_dict)
# returns {1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64, 9: 81, 10: 100}