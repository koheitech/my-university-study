# clean_dict_val(dictionary, bad value)
# removing bad values in the dictionary and return

def clean_dict_val(d, bad):
    dict = d.copy() # it is important
    for key, value in d.items():
        if value == bad:
            del dict[key]
    return dict

# in this case, its necessary to copy the dictionary first,
# otherwise, you will get error because size of dictionary cannot be change dynamically.
# so, gotta use one dict for 'for loop' and the other for removing bad value.

dict = {1: 'a', 2: 'b', 3: 'c'}
badVal='a'
print(clean_dict_val(dict, badVal))

