def get_min_avg_max(col):
    print('given collection: ', col)
    sortedCol = sorted(col)
    return sortedCol[0], sum(sortedCol)/len(sortedCol), sortedCol[len(sortedCol)-1]

col=(1, 4, 5, 3, 5, 6)
print(get_min_avg_max(col))