a = ('me', 123, 11.22, [1,2,3,4,5], {'name':'Kohei'})
print(type(a))
print(a[::-1])
print(a[:3])
for x in a:
    print(x)

b = (5,)
print(type(b), b)

c = ('me', 123, 11.22, [1,2,3,4,5], {'name':'Kohei'})
c[3].append(777)
#this is doable because the code modifies list inside tuple, not tuple per se.
print(c)
c[4]['surname']='Miyamoto'
print(c)

## Tuple unpacking
#assignment of variables to each element in tuple
(nickname, age, height, marks, coll) = a # each variable mach with element of tuple a
print(coll)
marks.append(111)
print(a)

def ttt(i, j):
    return i*2, j*2

print(type(ttt(2, 4)))
