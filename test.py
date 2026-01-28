import sys

def solve():
    data = sys.stdin.read().split()
    if not data:
        return

    w = int(data[0])

    if w > 2 and w % 2 == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    solve()