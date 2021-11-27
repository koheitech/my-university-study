i=1
while i<101:
    if i%5==0 and i%7!=0:
        print("Fizz")
        i+=1
        continue
    elif i%5!=0 and i%7==0:
        print("Buzz")
        i+=1
        continue
    elif i%5==0 and i%7==0:
        print("FizzBuzz")
        i+=1
        continue
    else:
        print(i)
        i+=1
else:
    print("--- FizzBuzz done. ---")

#you may put else out of while, it will be processed after while finished.
