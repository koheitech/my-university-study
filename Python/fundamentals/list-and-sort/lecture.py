a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(min(a))
print(max(a))
print(sum(a))

print(a[-3::])
print(a[-3:])
print(a[::2])
print("how many 4 in the list?: ", a.count(4)) #how many 4?
print("where is 4?: ", a.index(4)) #where is 4?

for i in a:
    print(i)

print(a*3) #repeat list

print(a[::-1]) #reverse
print(a)
b=a.copy()
print(b)
b.reverse()
print(b.reverse())

print(a)
d=a #share same id
print(d)
d.append(3)
print(a)
print(d)

a = [1, 4, 'ab', 'gdd']
list=[]
for i in a:
    if type(i)==int or type(i)==float: #get only numbers
        list.append(i)
print(list)