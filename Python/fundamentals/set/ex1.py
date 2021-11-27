# write the function which returns a tuple with common elements
# of seq1, seq2 and seq3
# (seq1, seq2 and seq3 can be list, tuple or string)

def get_common_elements(seq1, seq2, seq3):
    seq1 = set(seq1)
    print("seq1: ", seq1)
    seq2 = set(seq2)
    print("seq2: ", seq2)
    seq3 = set(seq3)
    print("seq3: ", seq3)
    # changing seq1, seq2 and seq3 for set operations
    print("common elements: ")
    return tuple(seq1 & seq2 & seq3) #intersection

seq1 = 'abc'
seq2 = ['a', 'b']
seq3 = ('b', 'c')

print(get_common_elements(seq1, seq2, seq3))