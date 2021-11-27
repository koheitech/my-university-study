def get_num_count(text):
    dict = {}
    for i in range(10):
        dict[str(i)] = text.count(str(i))
    return dict

# text = '22345.5'
# print(get_num_count(text))

text = input('Please enter:')
while not text.isnumeric():
    print('Only integers')
    text = input('do it again:')
print(get_num_count(text))