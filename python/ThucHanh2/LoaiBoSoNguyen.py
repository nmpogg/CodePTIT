if __name__ == "__main__":
    file_path = 'DATA.in'
    words = []
    
    with open(file_path, 'r') as file:
        for line in file:
            for word in line.split():
                try:
                    int(word)
                except ValueError:
                    words.append(word)
    
    words.sort()
    
    print(" ".join(words))

