print("Calculate Factorials")

def factorial(num):
    for x in range(num-1):
        x = x + 1
        num = num * x
    return(num)

num = factorial(5)
print("Factorial " + str(num))
