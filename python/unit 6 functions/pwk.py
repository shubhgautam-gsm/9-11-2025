# characters = "0123456789abcdefghijklmnopqrstuvwxyz!@#$%^&*()_+[]{}|;:,.<>?/`~"
# char=0-9a-zA-Z{sp}


user_pass="bca"

list_pss=["abc","bac","acb","bca","cba","cab"]


for i in list_pss:
    print("try ",list_pss.index(i)+1," ",i)
    if i==user_pass:
        print("Password is crack password is",i," possible at try ",list_pss.index(i)+1)
        break