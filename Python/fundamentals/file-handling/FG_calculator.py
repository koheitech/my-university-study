L1 = float(input("Input score for Lab1(only numbers): "))
L2 = float(input("Input score for Lab2(only numbers): "))
L3 = float(input("Input score for Lab3(only numbers): "))
T1 = float(input("Input score for Test1(only numbers): "))
T2=0

SG = 0.6 * (L1 + L2 + L3) / 3 + 0.4 * (T1)
FG = 0

if SG >= 7:
    FG = SG
    print("Your final grade is: ", FG)
else:
    print("I am afraid you have to take another test.")

