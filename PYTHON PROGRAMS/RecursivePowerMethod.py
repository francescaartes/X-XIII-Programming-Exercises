def main():
    base = int(input("Enter the number to be raised: "))
    exponent = int(input("Enter the exponent: "))

    print(str(base) + " raised to " + str(exponent) + " is equal to " + str(power(base, exponent)))
    print("\t" + str(base) + "^" + str(exponent) + " = " + str(power(base, exponent)))

def power(base, exponent):
    if exponent == 0: return 1
    else: return base * power(base, exponent-1)
    
main()