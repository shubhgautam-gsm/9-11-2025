try:
    a =int(input("Enter a: ")) #integer   5/"2"
    b = input("Enter b: ") #string 4 / "2"
    c = a / b
    print("a / b = %d" % c)
except ZeroDivisionError:
    print("Can't divide by zero")
except ValueError:
    print("Please enter valid integers for 'a' and 'b'.")
except Exception as e:
    print("An unexpected error occurred:", e)
else:
    print("Hi, I am the else block")
