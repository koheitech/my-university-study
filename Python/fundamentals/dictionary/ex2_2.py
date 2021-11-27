def clean_dict_val(d, bad):
    l = list()
    for k, v in d.items():
        if v == bad:
            l.append(k) #appending key of bad values into list 'l'
    for k in l:
        del d[k]
    return d
# removing bad values by using list containing keys for bad values

dict = {1: 'a', 2: 'b', 3: 'c'}
badVal = 'a'
print(clean_dict_val(dict, badVal))
