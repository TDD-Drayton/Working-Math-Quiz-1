def silly(x,y):
    temp = x
    x *= y
    y = temp
    return x,y

def main():
    x = 3
    y = 4
    x, y = silly()
    print(x,y)
    print("hello")
