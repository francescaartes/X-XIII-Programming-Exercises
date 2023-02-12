while True:
    print("Select a Planet:")
    print("  1. Mercury")
    print("  2. Venus")
    print("  3. Earth")
    print("  4. Mars")
    print("  5. Exit the program")
    print(" ")
    choice = int(input("Enter the number of your selected Planet: "))
    
    if choice == 1:
        print(" ")
        print("\tMERCURY:")
        print("\t  Average distance from the sun: 57.9 million kilometers")
        print("\t  Mass: 3.31 x 10^23kg")
        print("\t  Surface temperature: -173 to 430 degrees Celsius")
        print(" ")
    elif choice == 2:
        print(" ")
        print("\tVENUS:")
        print("\t  Average distance from the sun: 108.2 million kilometers")
        print("\t  Mass: 4.87 x 10^24kg")
        print("\t  Surface temperature: 472 degrees Celsius")
        print(" ")
    elif choice == 3:
        print(" ")
        print("\tEARTH:")
        print("\t  Average distance from the sun: 149.6 million kilometers")
        print("\t  Mass: 5.967 x 10^24kg")
        print("\t  Surface temperature: -50 to 50 degrees Celsius")
        print(" ")
    elif choice == 4:
        print(" ")
        print("\tMARS:")
        print("\t  Average distance from the sun: 227.9 million kilometers")
        print("\t  Mass: 0.6424 x 10^24kg")
        print("\t  Surface temperature: -140 to 20 degrees Celsius")
        print(" ")
    elif choice == 5:
        print(" ")
        print("\tExiting the program...")
        print(" ")
        break
    else:
        print(" ")
        print("\tInvalid choice, please try again.")
        print(" ")