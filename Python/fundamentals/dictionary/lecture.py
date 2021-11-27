a = {'name': 'Kohei', 'surname': 'Miyamoto',}
a['weight'] = '66' # adding new value
a['weight'] = '70' # modify value

print(a)
print(a.items())
print(len(a))

print(a.keys())
print(a.values())

x = a.setdefault('name')
print(x)

b = {str(x): x*2 for x in range(1, 11)} #comprehension notation
print(b)

def c(**dict): # by using ** in argument, can use argument as dictionary
    for k, v in dict.items():
        print(k, v)

c(name='Kohei', sur='Miyamoto')
