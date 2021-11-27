"""
---------- Strings ----------
"""
## Multiple string
# You can assign a multiline string to a variable by using three quotes:
a = """Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."""
print(a)

## Strings are array
a = "Hello, World!"
print(a[1])

## Slicing
b = "Hello, World!"
print(b[2:5]) #output "llo"
# 2 <= x < 5   i.e. 5 is not included
print(b[:5]) #output "Hello"

## Negative Indexing
b = "Hello, World!"
print(b[-5:-2]) #return orl

## String Length
a = "Hello, World!"
print(len(a))

## String Methods
# All string methods returns new values. They do not change the original string.

# The strip() method removes any whitespace from the beginning or the end:
a = " Hello, World! "
print(a.strip()) # returns "Hello, World!"

# The lower() method returns the string in lower case:
a = "Hello, World!"
print(a.lower()) # returns "hello, world!"

# The upper() method returns the string in upper case:
a = "Hello, World!"
print(a.upper()) # returns "HELLO, WORLD!"

# The replace() method replaces a string with another string:
a = "Hello, World!"
print(a.replace("H", "J")) # returns "Jello, World!"

# The split() method splits the string into substrings if it finds instances of the separator:
a = "Hello, World!"
print(a.split(",")) # returns ['Hello', ' World!']

## Check String
# To check if a certain phrase or character is present in a string, we can use the keywords in or not in.
txt = "The rain in Spain stays mainly in the plain"
x = "ain" in txt
print(x) #returns true

txt = "The rain in Spain stays mainly in the plain"
x = "ain" not in txt
print(x) #returns false

# String Concatenation
a = "Hello"
b = "World"
c = a + b
print(c) #returns "HelloWorld"

a = "Hello"
b = "World"
c = a + " " + b
print(c) #returns "Hello World"

## String Format
quantity = 3
itemno = 567
price = 49.95
myorder = "I want {} pieces of item {} for {} dollars."
print(myorder.format(quantity, itemno, price))
# returns I want 3 pieces of item 567 for 49.95 dollars.

# by assigning the index to the argument, we can change the order.
quantity = 3
itemno = 567
price = 49.95
myorder = "I want to pay {2} dollars for {0} pieces of item {1}."
print(myorder.format(quantity, itemno, price))
#returns I want to pay 49.95 dollars for 3 pieces of item 567.

## Escape Character
#To insert characters that are illegal in a string, use an escape character.
#An escape character is a backslash \ followed by the character you want to insert.
txt = "We are the so-called \"Vikings\" from the north."

## Format lifteral
pi = 3.14159265359
word = 'Python'
# Normal
print(f"π: {pi}") # 'π: 3.14159265359'

# two decimal point
print(f"π: {pi:.2f}") # 'π: 3.14'

# max 10 digits, and redundant area is filled with space
print(f"π: {pi:10.2f}")# 'π:       3.14'

# max 5 digits, and redundant area is filled with 0
print(f"π: {pi:05.2f}") # 'π: 03.14'

# shifted to right
print(f"'{word:>10s}'") # '    Python'
# align center
print(f"'{word:^10s}'") # '  Python  '


# capitalize()	Converts the first character to upper case
# casefold()	Converts string into lower case
# center()	Returns a centered string
# count()	Returns the number of times a specified value occurs in a string
# encode()	Returns an encoded version of the string
# endswith()	Returns true if the string ends with the specified value
# expandtabs()	Sets the tab size of the string
# find()	Searches the string for a specified value and returns the position of where it was found
# format()	Formats specified values in a string
# format_map()	Formats specified values in a string
# index()	Searches the string for a specified value and returns the position of where it was found
# isalnum()	Returns True if all characters in the string are alphanumeric
# isalpha()	Returns True if all characters in the string are in the alphabet
# isdecimal()	Returns True if all characters in the string are decimals
# isdigit()	Returns True if all characters in the string are digits
# isidentifier()	Returns True if the string is an identifier
# islower()	Returns True if all characters in the string are lower case
# isnumeric()	Returns True if all characters in the string are numeric
# isprintable()	Returns True if all characters in the string are printable
# isspace()	Returns True if all characters in the string are whitespaces
# istitle()	Returns True if the string follows the rules of a title
# isupper()	Returns True if all characters in the string are upper case
# join()	Joins the elements of an iterable to the end of the string
# ljust()	Returns a left justified version of the string
# lower()	Converts a string into lower case
# lstrip()	Returns a left trim version of the string
# maketrans()	Returns a translation table to be used in translations
# partition()	Returns a tuple where the string is parted into three parts
# replace()	Returns a string where a specified value is replaced with a specified value
# rfind()	Searches the string for a specified value and returns the last position of where it was found
# rindex()	Searches the string for a specified value and returns the last position of where it was found
# rjust()	Returns a right justified version of the string
# rpartition()	Returns a tuple where the string is parted into three parts
# rsplit()	Splits the string at the specified separator, and returns a list
# rstrip()	Returns a right trim version of the string
# split()	Splits the string at the specified separator, and returns a list
# splitlines()	Splits the string at line breaks and returns a list
# startswith()	Returns true if the string starts with the specified value
# strip()	Returns a trimmed version of the string
# swapcase()	Swaps cases, lower case becomes upper case and vice versa
# title()	Converts the first character of each word to upper case
# translate()	Returns a translated string
# upper()	Converts a string into upper case
# zfill()	Fills the string with a specified number of 0 values at the beginning