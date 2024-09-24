def convertToBase(n, base):
    if n == 0:
        return '0'
    
    result = []
    digitChars = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    while n > 0:
        result.insert(0, digitChars[n % base])
        n //= base
        
    return ''.join(result)

def convertToBaseInput():
    n = int(input('number\n'))
    base = int(input('base\n'))
    print(convertToBase(n, base))
    
def binary(n):
    if n == 0:
        return 0
    
    result = 0
    c = 1
    while n > 0:
        result += (n % 2) * c
        n //= 2
        c *= 10
        
    return result

def binaryInput():
    n = int(input('number\n'))
    print(binary(n))
    
binaryInput()