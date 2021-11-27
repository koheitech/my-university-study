import string

def is_pangram(txt):
    return len([x for x in list(string.ascii_lowercase) if x not in txt.lower()]) == 0

print(is_pangram('Brick quiz whangs jumpy veldt fox'))
print(is_pangram('Phlegms fyrd wuz qvint jackbox'))
print(is_pangram('hello there'))
print(is_pangram('Brick quiz whangs jumpy veldt fox,'))