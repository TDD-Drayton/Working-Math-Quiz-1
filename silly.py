def silly(x,y):
    temp = x
    x *= y
    y = temp
    return x,y

def main():
    x = 3
    y = 4
    x, y = silly(x,y)
    print(x,y)
    print("hello")

