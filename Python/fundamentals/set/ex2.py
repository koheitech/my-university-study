def is_pangram(txt):
    alphaList = set('abcdefghijklmnopqrstuvwxyz')
    print('given text: ', txt)
    return alphaList == set(txt.lower()) & alphaList
    # code above is the comparison of given text and all alphabets


print(is_pangram('Brick quiz whangs jumpy veldt fox'))
print(is_pangram('Phlegms fyrd wuz qvint jackbox'))
print(is_pangram('hello there'))
print(is_pangram('Brick quiz whangs jumpy veldt fox,'))