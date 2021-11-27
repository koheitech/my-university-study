import math

def get_min_med_max(col):
    print('given collection: ', col)
    sortCol = sorted(col)
    n=len(col)
    if(type(col[0])==int):
        if (n) % 2 == 0:
            medi = (sortCol[int(n/2)] + sortCol[int(n/2-1)])/2
        else:
            medi = sortCol[math.floor(n/2)]
    elif(type(col[0])==str):
        if (n) % 2 == 0:
            medi = (sortCol[int(n/2)] + sortCol[int(n/2-1)])
        else:
            medi = sortCol[math.floor(n/2)]
    return sortCol[0], medi, sortCol[n-1]



col=[1, 4, 5, 3, 5, 6, 7]
col2='afvddf'
# print(col.isalpha())
# print(get_min_avg_max(col))
print(get_min_med_max(col))
print(get_min_med_max(col2))
