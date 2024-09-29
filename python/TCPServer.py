from socket import *

serverPort = 12000
serverSocket = socket(AF_INET, SOCK_STREAM)
serverSocket.bind(('', serverPort)) 
serverSocket.listen(1)
print('This server is ready to receive')

while True:
    connectionSocket, addr = serverSocket.accept()
    print(f"Connection established with {addr}")

    # Nhận dữ liệu từ client và giải mã (decode) nó thành chuỗi
    sentence = connectionSocket.recv(1024).decode()

    sentence += '\n'
    capitalizedSentence = sentence.upper()

    # Gửi lại dữ liệu đã chuyển đổi cho client, mã hóa (encode) nó thành bytes
    connectionSocket.send(capitalizedSentence.encode())

    # Đóng kết nối sau khi xử lý xong
    connectionSocket.close()
    print("Connection closed")
