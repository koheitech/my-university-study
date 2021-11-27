def get_min_med_max(col):
    print('given collection: ', col)
    if len(col)%2 == 0:
        med = sorted(col)[int(len(col)/2-1)]+sorted(col)[int(len(col)/2)]
        if type(col) != str:
            med = med/2
    else:
        med = sorted(col)[int(len(col)/2)]
    return min(col), med, max(col)

col=[1, 4, 5, 3, 5, 6, 7]
col2='afvddf'

print(get_min_med_max(col))
print(get_min_med_max(col2))