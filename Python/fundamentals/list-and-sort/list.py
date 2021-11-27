"""
---------- Lists ----------
"""
# There are four collection data types in the Python programming language:
#
# List is a collection which is ordered and changeable. Allows duplicate members.
# Tuple is a collection which is ordered and unchangeable. Allows duplicate members.
# Set is a collection which is unordered and unindexed. No duplicate members.
# Dictionary is a collection which is unordered, changeable and indexed. No duplicate members.


## List
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist)
print(thislist[-1]) #returns 'mango'
print(thislist[2:5]) #returns cherry, orange and kiwi
thislist[1] = "blackcurrant" #this replace banana with blackcurrent

## Loop with List
thislist = ["apple", "banana", "cherry"]
for x in thislist:
  print(x)

## check item existence
if "apple" in thislist:
  print("Yes, 'apple' is in the fruits list")

## List Length
thislist = ["apple", "banana", "cherry"]
print(len(thislist))


## Add Items

# append
# Using the append() method to append an item to the end of list:
thislist = ["apple", "banana", "cherry"]
thislist.append("orange")
print(thislist) #returns ['apple', 'banana', 'cherry', 'orange']

# insert
# To add an item at the specified index, use the insert() method:
thislist = ["apple", "banana", "cherry"]
thislist.insert(1, "orange")
print(thislist) #['apple', 'orange', 'banana', 'cherry']

## removing items
# The remove() method removes the specified item:
thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")
print(thislist)

# The pop() method removes the specified index, (or the last item if index is not specified):
thislist = ["apple", "banana", "cherry"]
thislist.pop()
thislist.pop(1)
print(thislist)

# The del keyword removes the specified index:
thislist = ["apple", "banana", "cherry"]
del thislist[0]
print(thislist)

# The del keyword can also delete the list completely:
thislist = ["apple", "banana", "cherry"]
del thislist

#The clear() method empties the list:
thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist) #returns []

## duplicate list
# Make a copy of a list with the copy() method:
thislist = ["apple", "banana", "cherry"]
mylist = thislist.copy()
print(mylist)

# Make a copy of a list with the list() method:
thislist = ["apple", "banana", "cherry"]
mylist = list(thislist)
print(mylist)

## Join two list:
list1 = ["a", "b" , "c"]
list2 = [1, 2, 3]
list3 = list1 + list2
print(list3) #returns ['a', 'b', 'c', 1, 2, 3]

#Another way to join two lists are by appending all the items from list2 into list1, one by one:
list1 = ["a", "b" , "c"]
list2 = [1, 2, 3]

for x in list2:
  list1.append(x)

print(list1)

# Use the extend() method to add list2 at the end of list1:
list1 = ["a", "b" , "c"]
list2 = [1, 2, 3]

list1.extend(list2)
print(list1)

# Using the list() constructor to make a List:
thislist = list(("apple", "banana", "cherry")) # note the double round-brackets
print(thislist)


# append()	Adds an element at the end of the list
# clear()	Removes all the elements from the list
# copy()	Returns a copy of the list
# count()	Returns the number of elements with the specified value
# extend()	Add the elements of a list (or any iterable), to the end of the current list
# index()	Returns the index of the first element with the specified value
# insert()	Adds an element at the specified position
# pop()	Removes the element at the specified position
# remove()	Removes the item with the specified value
# reverse()	Reverses the order of the list
# sort()	Sorts the list