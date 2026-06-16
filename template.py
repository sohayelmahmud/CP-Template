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
        print()

# sys.stderr.write(f"\nTime: {time.time() - start_time:.4f}s\n")