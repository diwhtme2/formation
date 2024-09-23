def binary():
    n = int(input('Enter a number to convert to binary: '))
    
    if n == 0:
        print('0')
        return
    
    bits = []
    
    while n > 0:
        bits.insert(0, n % 2)
        n //= 2
        
    print(''.join(map(str, bits)))
    
    
def convertToBase():
    base = int(input('Enter the base to convert to: '))        
    n = int(input('Enter a number to convert: '))
    
    if n == 0:
        print('0')
        return
    
    digits = []
    
    while n > 0:
        digits.insert(0, n % base)
        n //= base
        
    print(''.join(map(str, digits)))
    
    
convertToBase()