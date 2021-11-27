def get_char_count(text):
    dict = {}
    for i in range(10):
        dict[str(i)] = text.count(str(i))
    print(dict)

text='126181'
get_char_count(text)