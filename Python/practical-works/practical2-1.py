# Compute and display average value of 4 smallest numbers from the list.
# Write the function to get dictionary with the numbers of letters that are used in the last string

list=[]
dict={}
list=[123, 11.2, 'txt', 777, 'Python', 0.8, 9] #appending 7 values
# print('Lists of 7 values: ', list)
num_list=[]
str_list=[]

#appending numbers and strings into diffrent lists
for i in list:
    if type(i)==int or type(i)==float:
        num_list.append(i)
    if type(i)==str:
        str_list.append(i)

# print('list of numbers in the list: ', num_list)
# print('list of strings in the list: ', str_list)

num_list.sort() #sorting in ascending order
# print('sorted numbers in ascending order: ', num_list)
avg = (num_list[0]+num_list[1]+num_list[2]+num_list[3])/4 #average value of 4 smallest numbers
print('average value of 4 smallest numbers: ', avg)

#function to get dictionary with the numbers of letters that are used in the last string
def makeDict(str_list):
    for i in str_list:
        dict[str(i)] = len(i)
    return dict

#print(str_list)
print(makeDict(str_list))