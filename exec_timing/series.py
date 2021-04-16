def checkArm(number):
    number = number

    array = []
    sum  = 0

    counter = 0

    for i in str(number):
        counter+=1

    for i in range(0, counter):
        array.append(str(number)[i])

    for i in array:
        temp = int(i)**counter
        sum = sum + temp

    if (sum==int(number)):
        print(number)


for i in range(1000, 1000000):
    checkArm(i)
