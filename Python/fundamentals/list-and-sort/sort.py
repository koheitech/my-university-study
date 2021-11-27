list=[2,5,34,5, 8, 5, 3]

sortList = list.copy()
sortList.sort()
print(list)
print(sortList)

print(f'top3 numbers; \n{sortList[-1:-4:-1]}')
print(f'bottom3 numbers; \n{sortList[:3]}')

# a[-1]    # last item in the array
# a[-2:]   # last two items in the array
# a[:-2]   # everything except the last two items
# Similarly, step may be a negative number:
#
# a[::-1]    # all items in the array, reversed
# a[1::-1]   # the first two items, reversed
# a[:-3:-1]  # the last two items, reversed
# a[-3::-1]  # everything except the last two items, reversed