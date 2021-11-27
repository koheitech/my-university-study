"""
---------- Sets ----------
"""
## Set
# A set is a collection which is unordered and unindexed.
# In Python, sets are written with curly brackets.
thisset = {"apple", "banana", "cherry"}
print(thisset)

## Access Items
# You cannot access items in a set by referring to an index or a key.
# But you can loop through the set items using a for loop,
# or ask if a specified value is present in a set, by using the in keyword.
thisset = {"apple", "banana", "cherry"}

for x in thisset:
  print(x)

print("banana" in thisset) #returns true

## Change Items
# Once a set is created, you cannot change its items, but you can add new items.

## Add Items
# To add one item to a set use the add() method.
# To add more than one item to a set use the update() method.

#add() to add one item
thisset = {"apple", "banana", "cherry"}
thisset.add("orange")
print(thisset) #returns {'orange', 'apple', 'banana', 'cherry'}

# update() to add multiple items
thisset = {"apple", "banana", "cherry"}
thisset.update(["orange", "mango", "grapes"])
print(thisset) #returns {'banana', 'apple', 'orange', 'mango', 'grapes', 'cherry'}

## Get the Length of a Set
thisset = {"apple", "banana", "cherry"}
print(len(thisset))

## Remove Item
# To remove an item in a set, use the remove(), or the discard() method.

#If the item to remove does not exist, remove() will raise an error.
thisset = {"apple", "banana", "cherry"}
thisset.remove("banana")
thisset.remove('dog') #rasie an error
print(thisset)

# If the item to remove does not exist, discard() will NOT raise an error.
thisset = {"apple", "banana", "cherry"}
thisset.discard("banana")
thisset.discard('dog') #not rasie an error
print(thisset)

# You can also use the pop(), method to remove an item,
# but this method will remove the last item. Remember that sets are unordered,
# so you will not know what item that gets removed.
# The return value of the pop() method is the removed item.
thisset = {"apple", "banana", "cherry"}
x = thisset.pop()
print(x) #unknown what is to be removed
print(thisset)

# The clear() method empties the set:
thisset = {"apple", "banana", "cherry"}
thisset.clear()
print(thisset) #retuns 'set()'

# The del keyword will delete the set completely:
thisset = {"apple", "banana", "cherry"}
del thisset
print(thisset) #returns error

## Join Two Sets
# You can use the union() method that returns a new set containing all items from both sets,
# or the update() method that inserts all the items from one set into another:

set1 = {"a", "b" , "c"}
set2 = {1, 2, 3}
set3 = set1.union(set2)
print(set3) #returns {2, 1, 'c', 'a', 3, 'b'} => order is random

set1 = {"a", "b","c"}
set2 = {1, 2, 3}
set1.update(set2)
print(set1)

#Note: Both union() and update() will exclude any duplicate items.

## The set() Constructor
thisset = set(("apple", "banana", "cherry")) # note the double round-brackets
print(thisset)

## Set comprehension
{x for x in range(30) if x % 2 == 0}
# returns {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28}

## method
# Method	                Description
# add()	                    Adds an element to the set
# clear()	                Removes all the elements from the set
# copy()	                Returns a copy of the set
# difference()	            Returns a set containing the difference between two or more sets
# difference_update()	    Removes the items in this set that are also included in another, specified set
# discard()	                Remove the specified item
# intersection()	        Returns a set, that is the intersection of two other sets
# intersection_update()	    Removes the items in this set that are not present in other, specified set(s)
# isdisjoint()	            Returns whether two sets have a intersection or not
# issubset()	            Returns whether another set contains this set or not
# issuperset()	            Returns whether this set contains another set or not
# pop()	                    Removes an element from the set
# remove()	                Removes the specified element
# symmetric_difference()	Returns a set with the symmetric differences of two sets
# symmetric_difference_update()	inserts the symmetric differences from this set and another
# union()	                Return a set containing the union of sets
# update()	                Update the set with the union of this set and others

## set operations with symbols

## Union
a={1, 2, 4.6, 7.8, 'r', 's'}
b={2,5,'d','abc'}
c={2,3,4,5}
d=a|b|c
print(d)
# Output:{1, 2, 4.6, 5, 7.8, ‘r’, ‘abc’, ‘s’, ‘d’}

## Intersection
a={1, 2,5, 4.6, 7.8, 'r', 's'}
b={2,5,'d','abc'}
c={2,3,4,}
print(a&b)
print(a&b&c)

## Difference of sets
a={1, 2,5, 4.6, 7.8, 'r', 's'}
b={2,5,'d','abc'}
c={2,3,4}
print(a-b-c)
# Output: {1, 4.6, 7.8, ‘r’, ‘s’}
