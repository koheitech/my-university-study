ran1 = int(input('start number: '))
ran2 = int(input('end number: '))

x = list(range(ran1, ran2+1)) #ran2+1 because ran2 is not included.

for i in x:
    print(i**3)
