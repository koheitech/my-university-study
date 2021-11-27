"""
---------- File Handling ----------
"""
# File handling is an important part of any web application.
# Python has several functions for creating, reading, updating, and deleting files.

## File Handling
# The key function for working with files in Python is the open() function.
# The open() function takes two parameters; filename, and mode.
# There are four different methods (modes) for opening a file:

# "r" - Read - Default value. Opens a file for reading, error if the file does not exist
# "a" - Append - Opens a file for appending, creates the file if it does not exist
# "w" - Write - Opens a file for writing, creates the file if it does not exist
# "x" - Create - Creates the specified file, returns an error if the file exists
#
# In addition you can specify if the file should be handled as binary or text mode
# "t" - Text - Default value. Text mode
# "b" - Binary - Binary mode (e.g. images)

## Syntax
# To open a file for reading it is enough to specify the name of the file
f = open("demofile.txt")
#
# The code above is the same as:
f = open("demofile.txt", "rt")
# it is okay without specifying model "rt"

"""
---------- Read Files ----------
"""
# Open a File on the Server
# Assume we have the following file, located in the same folder as Python:

# -----demofile.txt-----
# Hello! Welcome to demofile.txt
# This file is for testing purposes.
# Good Luck!
# -------------------------
f = open("demofile.txt", "r") #open the text file above
print(f.read()) #return the file content

# If the file is located in a different location,
# you will have to specify the file path
f = open("D:\\myfiles\welcome.txt", "r")
print(f.read())

## Read Only Parts of the File
# By default the read() method returns the whole text,
# but you can also specify how many characters you want to return:
f = open("demofile.txt", "r")
print(f.read(5)) #returns 'Hello' only

## Read Lines
# You can return one line by using the readline() method:
f = open("demofile.txt", "r")
print(f.readline()) #returns Hello! Welcome to demofile.txt

# By calling readline() two times, you can read the two first lines:
f = open("demofile.txt", "r")
print(f.readline()) #returns Hello! Welcome to demofile.txt
print(f.readline()) #returns This file is for testing purposes.

# By looping through the lines of the file, you can read the whole file, line by line:
f = open("demofile.txt", "r")
for x in f:
  print(x)

## Close Files
# It is a good practice to always close the file when you are done with it.
f = open("demofile.txt", "r")
print(f.readline())
f.close()

# Note: You should always close your files, in some cases, due to buffering,
# changes made to a file may not show until you close the file.

## tell
#f.tell() can get the current file position

##seek
# f.seak() can bring file cursor to initial position



"""
---------- Write/Create Files ----------
"""
## Write to an Existing File
# To write to an existing file, you must add a parameter to the open() function:
#
# "a" - Append - will append to the end of the file
# "w" - Write - will overwrite any existing content

f = open("demofile2.txt", "a") #append
f.write("Now the file has more content!")
f.close()

#open and read the file after the appending:
f = open("demofile2.txt", "r")
print(f.read())

## Create a New File
# To create a new file in Python, use the open() method, with one of the following parameters:

# "x" - Create - will create a file, returns an error if the file exist
# "a" - Append - will create a file if the specified file does not exist
# "w" - Write - will create a file if the specified file does not exist

"""
---------- Delete Files ----------
"""
## Delete a File
# To delete a file, you must import the OS module, and run its os.remove() function:
import os
os.remove("demofile.txt")

## Check if File exist:
# To avoid getting an error, you might want to check
# if the file exists before you try to delete it:
import os
if os.path.exists("demofile.txt"):
  os.remove("demofile.txt")
else:
  print("The file does not exist")

## Delete Folder
# To delete an entire folder, use the os.rmdir() method:
import os
os.rmdir("myfolder")

# Note: You can only remove empty folders

"""
---------- List of methods for Files ----------
"""
# Method	Description
# close()	Closes an opened file. It has no effect if the file is already closed.
# detach()	Separates the underlying binary buffer from the TextIOBase and returns it.
# fileno()	Returns an integer number (file descriptor) of the file.
# flush()	Flushes the write buffer of the file stream.
# isatty()	Returns True if the file stream is interactive.
# read(n)	Reads at most n characters from the file. Reads till end of file if it is negative or None.
# readable()	Returns True if the file stream can be read from.
# readline(n=-1)	Reads and returns one line from the file. Reads in at most n bytes if specified.
# readlines(n=-1)	Reads and returns a list of lines from the file. Reads in at most n bytes/characters if specified.
# seek(offset,from=SEEK_SET)	Changes the file position to offset bytes, in reference to from (start, current, end).
# seekable()	Returns True if the file stream supports random access.
# tell()	Returns the current file location.
# truncate(size=None)	Resizes the file stream to size bytes. If size is not specified, resizes to current location.
# writable()	Returns True if the file stream can be written to.
# write(s)	Writes the string s to the file and returns the number of characters written.
# writelines(lines)	Writes a list of lines to the file.