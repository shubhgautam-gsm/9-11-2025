import mysql.connector

try:
    connection = mysql.connector.connect(host="localhost", user="root", passwd="",
    database="newera")
    print("Database Connected")
    myCursor = connection.cursor()
    connection.close()
except Exception as err:
    print("Error is ",err)