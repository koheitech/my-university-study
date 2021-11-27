# input collection of numbers and return its min, average and max value
def get_min_avg_max(col):
    print('given collection: ', col)
    n=len(col)
    minval=min(col)
    maxval=max(col)
    avg=sum(col)/n
    return minval, avg, maxval

col=(1, 4, 5, 3, 5, 6)
print(get_min_avg_max(col))
