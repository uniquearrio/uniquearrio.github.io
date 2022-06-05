
class Product:
    def __init__(self):
        print('Instant Created')
    def __call__(self,a,b):
        print(a*b)

ans=Product()
ans(3,4)