def encryption(plain_text,key): 
    result = "" 
  
    for i in range(len(plain_text)): 
        alphabet = plain_text[i] 
  

        if (alphabet.isupper()): 
            result += chr((ord(char) + s-65) % 26 + 65) 
  

        else: 
            result += chr((ord(char) + s - 97) % 26 + 97) 
  
    return result 
  

plain_text = input("Input your text : ")
key = int(input("Key : ")) 
print ("Ciphertext : " + encryption(plain_text,key)) 
