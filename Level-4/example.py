
class Example:
    def __init__(self):
        print("instant created")
    def __call__(self):
        print('Call from object')
e=Example()
e()