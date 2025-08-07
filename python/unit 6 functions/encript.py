# characters = "0123456789abcdefghijklmnopqrstuvwxyz!@#$%^&*()_+[]{}|;:,.<>?/`~"
# char=0-9a-zA-Z{sp}


user_message="my bank account number is 1234567890 and pass is iant3434"


user_message=user_message.replace('i', 'x')
user_message=user_message.replace('a', '2')
user_message=user_message.replace('n', 'y')

# encript
print(user_message)

# DARSHIL WHATSAPP DECRIPT CODE
user_message=user_message.replace('x', 'i')
user_message=user_message.replace('2', 'a')
user_message=user_message.replace('y', 'n')

# encript
print(user_message)
