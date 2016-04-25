def encrypt(plaintext, key):
    LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    plaintext = plaintext.upper()
    ciphertext = ''
    for char in plaintext:
        if char in LETTERS:
            index = LETTERS.find(char)
            index = (index + key) % len(LETTERS)
            ciphertext = ciphertext + LETTERS[index]
        else:
            ciphertext = ciphertext + char
    return ciphertext

def print_vigenere():
    LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for i in range(26):
        for c in LETTERS:

            print(chr((ord(c) + i))),
        print('\n')

                  
def main():
#get plain text input
    # txt = raw_input("Enter the plain text ")
    # txt = 'undurstand englshlll'

    print_vigenere()
    return



main()