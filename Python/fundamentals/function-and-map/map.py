## Python map()
# The map() function applies a given function to each item of an iterable (list, tuple etc.) and returns a list of the results.
# The syntax of map() is:
# map(function, iterable, ...)

## ex1
def calculateSquare(n):
    return n*n


numbers = (1, 2, 3, 4)
result = map(calculateSquare, numbers)
print(result)

# converting map object to set
numbersSquare = set(result)
print(numbersSquare)


## ex2 with lambda
numbers = (1, 2, 3, 4)
result = map(lambda x: x*x, numbers)
print(result)

# converting map object to set
numbersSquare = set(result)
print(numbersSquare)

## ex3 multiple iterators
num1 = [4, 5, 6]
num2 = [5, 6, 7]

result = map(lambda n1, n2: n1+n2, num1, num2)
print(list(result))

## ex4 type casting with map function
numText = '12345'
numInt=list(map(int, numText.split()))
print(type(numText), numText)
print(type(numInt), numInt)