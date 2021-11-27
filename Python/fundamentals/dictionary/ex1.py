# function which inputs a string and returns the number of letter used in the string
def get_char_count(text):
    dict = {}
    for i in text:
        dict[str(i)] = text.count(i)
    print(dict)

text = 'aaa bd '
get_char_count(text)
