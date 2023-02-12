password = input("Enter your password: ")
hasLowerCase = False
hasUpperCase = False
hasDigit = False
hasSpecialChar = False
isConsecutiveLowercase = False
isConsecutiveUppercase = False
isConsecutiveDigit = False
isRepeating = False
    
for i in range(len(password)):
    char = password[i]
    if char.islower():
        hasLowerCase = True
        if i < len(password) - 1 and password[i + 1].islower() and char == password[i + 1]:
            isConsecutiveLowercase = True
    elif char.isupper():
        hasUpperCase = True
        if i < len(password) - 1 and password[i + 1].isupper() and char == password[i + 1]:
            isConsecutiveUppercase = True
    elif char.isdigit():
        hasDigit = True
        if i < len(password) - 1 and password[i + 1].isdigit() and char == password[i + 1]:
            isConsecutiveDigit = True
    elif not char.isalnum():
        hasSpecialChar = True
    if i < len(password) - 2 and password[i] == password[i + 1] and password[i + 1] == password[i + 2]:
        isRepeating = True
        
if len(password) < 8:
    print("\tPassword is too short")
if not hasLowerCase or not hasUpperCase:
    print("\tPassword must contain at least one uppercase letter and one lowercase letter")
if not hasDigit:
    print("\tPassword must contain at least one numeric digit")
if not hasSpecialChar:
    print("\tPassword must contain at least one special character")
if isConsecutiveLowercase:
    print("\tPassword cannot contain a sequence of consecutive lowercase letters")
if isConsecutiveUppercase:
    print("\tPassword cannot contain a sequence of consecutive uppercase letters")
if isConsecutiveDigit:
    print("\tPassword cannot contain a sequence of consecutive digits")
if isRepeating:
    print("\tPassword cannot contain a repeating sequence of characters")
if len(password) >= 8 and hasLowerCase and hasUpperCase and hasDigit and hasSpecialChar and not isConsecutiveLowercase and not isConsecutiveUppercase and not isConsecutiveDigit and not isRepeating:
    print("\tPassword is strong")