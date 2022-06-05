max=int(input('Display primes up to what value: '))
value=2
while value<=max:
    is_prime=True
    factor=2
    while factor<value/factor:
        if value%factor==0:
            is_prime=False
            break
        factor+=1
    if is_prime:
        print(value, end=' ')
    value+=1