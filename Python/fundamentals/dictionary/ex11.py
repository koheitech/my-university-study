def get_char_count(text):
    dict = {} #initialization of dictionary
    for i in text:
        dict[str(i)] = text.count(i) #adding content into dict
    return dict

text = input('Please enter whatever you want:\n')
# print(text.count('a'))
print(get_char_count(text))
