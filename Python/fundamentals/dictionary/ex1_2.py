# ex_a
d = dict()
text = input('a sting')
def get_char_count(text):
    for i in text:
        d[i] = d.get(i, 0)+1
    print(d)

#logic of the code above;
# d[i] = d.get(i, 0)+1
# means taking each character, and
# assign 0 (initialization) if its not added yet and plus 1 => count1
# get the value if it already added plus 1 => count 2 or more

get_char_count(text)

#ex_b
n = dict()
num = input('numbers:\n')
def get_num_count(num):
    for i in range(10):
        n[str(i)] = 0
    for i in num:
        n[i] = n.get(i)+1
    print(n)

get_num_count(num)

# this code above looks simpler than mine,
# but it cannot validate inputs other than integers

