import mysql.connector
#Create the connection object
myconn = mysql.connector.connect(host = "localhost", user = "root",passwd = ""
)
#printing the connection object
print('connection successful')