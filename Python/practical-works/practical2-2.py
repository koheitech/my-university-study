# I tried to put two tasks into one function
list=[]
dict={}
list=[123, 11.2, 'txt', 777, 'Python', 0.8, 9] #appending 7 values

def lab2(list):
    num_list=[]
    for i in list:
        if type(i) == int or type(i) == float:
            num_list.append(i)
        if type(i) == str:
            dict[str(i)] = len(i)

    num_list.sort()
    avg = (num_list[0] + num_list[1] + num_list[2] + num_list[3]) / 4  # average value of 4 smallest numbers
    print('average value of 4 smallest numbers: ', avg)
    print(dict)
    return

lab2(list)
