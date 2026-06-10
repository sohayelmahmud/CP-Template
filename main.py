import math
import time
from collections import deque, Counter, defaultdict
from bisect import bisect_left, bisect_right
from heapq import heappush, heappop, heapify
import sys

# Fast I/O
input = lambda: sys.stdin.readline()
def out(x): sys.stdout.write(str(x) + '\n')
ninln = (word for line in sys.stdin for word in line.split()) # take next input in same line

############ ---- Input Functions ---- ############
def inin(): return int(input()) # Int input
def inlt(): return list(map(int,input().split())) # List int input
def invr(): return map(int,input().split()) # multiple variable int
def insr(): return input().strip() # string input
def insl(): return list(input().strip()) # char list input

############ ---- Recursion Limit Increase ---- ############
sys.setrecursionlimit(200000)

############ ---- Constants ---- ############
MOD = 10**9 + 7
INF = float('inf')

############ ---- Useful Functions ---- ############
def phi(n: int) -> int:
    result = n
    p = 2
    while p * p <= n:
        if n % p == 0:
            while n % p == 0:
                n //= p
            result -= result // p
        p += 1
    if n > 1:
        result -= result // n
    return result

def powMod(base: int, n: int, mod: int) -> int:
    return pow(base, n, mod)

def modInverse(n: int, mod: int, isPrime: bool = True) -> int:
    if isPrime:
        return pow(n, mod - 2, mod)
    return pow(n, phi(mod) - 1, mod)

def modDivide(a: int, b: int, mod: int, isPrime: bool = True) -> int:
    return (a * modInverse(b, mod, isPrime)) % mod

def isPrefix(s: str, y: str) -> bool:
    return y.startswith(s)

def isPalindrome(s: str) -> bool:
    return s == s[::-1]

def isArrayPalindrome(arr: list) -> bool:
    return arr == arr[::-1]

def isPrime(n: int) -> bool:
    if n < 2: return False
    if n in (2, 3): return True
    if n % 2 == 0 or n % 3 == 0: return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def isLucky(n: int, a: int) -> bool:
    if n == 0 and a == 0: return True
    while n > 0:
        if n % 10 != a:
            return False
        n //= 10
    return True

def nthFib(n: int) -> int:
    if n <= 1: return n
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b

def nFibs(n: int):
    a, b = 0, 1
    res = []
    for _ in range(n):
        res.append(str(a))
        a, b = b, a + b
    print(" ".join(res))

def gcd(a: int, b: int) -> int:
    return a if b == 0 else gcd(b, a % b)

def lcm(a: int, b: int) -> int:
    return (a // gcd(a, b)) * b

def fastPow(base: int, n: int) -> int:
    return pow(base, n, MOD)

fact = []
def precomputeFactorials(n: int, mod: int):
    global fact
    fact = [1] * (n + 1)
    for i in range(1, n + 1):
        fact[i] = (fact[i - 1] * i) % mod

def nCr(n: int, r: int, mod: int) -> int:
    if r < 0 or r > n: return 0
    return (fact[n] * modInverse(fact[r], mod) % mod) * modInverse(fact[n - r], mod) % mod

def getDivisors(n: int) -> list:
    divisors = []
    i = 1
    while i * i <= n:
        if n % i == 0:
            divisors.append(i)
            if i * i != n:
                divisors.append(n // i)
        i += 1
    return divisors

def allPrimeVector(n: int) -> list:
    prime = [True] * (n + 1)
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
    return [p for p in range(2, n + 1) if prime[p]]

def decimalToKbitsBinary(n: int, k: int) -> str:
    return bin(n)[2:].zfill(k)[-k:]

def val(c: str) -> int:
    if '0' <= c <= '9':
        return ord(c) - ord('0')
    return ord(c.upper()) - ord('A') + 10

def nthBaseToDecimal(s: str, base: int) -> int:
    try:
        return int(s, base)
    except ValueError:
        power = 1
        num = 0
        for c in reversed(s):
            num += val(c) * power
            power *= base
        return num

def reVal(num: int) -> str:
    if 0 <= num <= 9:
        return chr(num + ord('0'))
    return chr(num - 10 + ord('A'))

def nthBaseFromDeci(inputNum: int, base: int) -> str:
    if inputNum == 0: return "0"
    res = []
    while inputNum > 0:
        res.append(reVal(inputNum % base))
        inputNum //= base
    return "".join(reversed(res))

############ ---- Local Input Output ---- ############
if "LOCAL" in sys.argv:
    sys.stdin = open('input.txt', 'r')
    sys.stdout = open('output.txt', 'w')

def solve(testNo: int):
    pass

def solve2(testNo: int):
    pass

def solve3(testNo: int):
    pass


if __name__ == "__main__":
    start_time = time.time()

    t = 1
    # t = inin()

    for testNo in range(1, t + 1):
        solve(testNo)

# sys.stderr.write(f"\nTime: {time.time() - start_time:.4f}s\n")