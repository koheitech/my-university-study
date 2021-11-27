i=1
while i<101:
    if i%5==0 and i%7!=0:
        print("Fizz", i)
        i+=1
        continue
    if i%5!=0 and i%7==0:
        print("Buzz", i)
        i+=1
        continue
    if i%5==0 and i%7==0:
        print("FizzBuzz", i)
        i+=1
        continue
    print(i)
    i+=1


