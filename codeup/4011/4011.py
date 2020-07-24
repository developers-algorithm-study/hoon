reg = input()
gender = ""

if reg[7] == '1' or reg[7] == '2':
    if reg[7] == '1':
        gender = 'M'
    else:
        gender = 'F'
    print("19{}/{}/{} {}".format(reg[0:2], reg[2:4], reg[4:6], gender))
else:
    if reg[7] == '3':
        gender = 'M'
    else:
        gender = 'F'
    print("20{}/{}/{} {}".format(reg[0:2], reg[2:4], reg[4:6], gender))