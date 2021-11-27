def var1_3(k):
    '''
    Variant 1 or 3
    Given an integer K and a text file, remove K leading characters from each line of the file.
    If the length of some line is less than K then remove all characters from the line.
    '''

    # reading the contents of the file
    with open("giventext.txt") as f:
        mylist = f.readlines()

    mylist = [x.strip("\n") for x in mylist]  # strip and store each line of text into a list
    newlist = mylist.copy() # copy of list created because we cannot dynamically change the content of the list

    # displaying the contents of the given file as a separate function
    displaying_content(mylist)

    # processing the file
    for count, x in enumerate(mylist):
        if len(x) > k: # if length of the text is larger than given integer K
            newlist[count] = newlist[count][k:] #removing first K numbers of text woth slicing
        else:
            newlist[count] = " " # replacing with space to create empty line

    # rewriting the file
    with open("newtext.txt", "w") as f:
        # I intentionally decided to create a new file, not rewriting the file itself
        # so that it is easy to check if this code works.
        for x in newlist:
            f.write(x)
            f.write("\n")

def displaying_content(mylist):
    print("contents of the given file;")
    print("--------------------")
    for x in mylist:
        print(x)
    print("--------------------")

k = int(input('Please enter a integer: '))
var1_3(k)