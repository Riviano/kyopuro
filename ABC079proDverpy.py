import numpy as np 
import heapq 
#1までの距離を作成する。
#逆向きに辺があると思って、1からの距離の一覧を作成

H,W = map(int,input().split())
cost = np.zeros((10,10),dtype=np.int64)

for i in range(10):
    temp = map(int,input().split())
    