# [program5.py] 平滑化処理1（移動平均フィルタ）
# -*- coding: utf-8 -*-
import cv2
import numpy as np
from numba import jit #for文処理高速化のおまじない

@jit #for文処理高速化のおまじない
def main():
  img =cv2.imread("Lenna.bmp")
  gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY).astype("int") #grayスケールに変換(grayはint型)
  cv2.imshow("gray", gray.astype("uint8"))

  #画像の高さ，幅を調べる
  imh, imw = gray.shape

  #uint8型の入れ物を作る（すべて0で初期化）
  res = np.zeros((imh, imw), dtype="uint8")

  for j in range(1, imh-1):     #1～imh-1まで繰り返し
    for i in range(1, imw-1):   #1～imw-1まで繰り返し
      res[j, i] =(gray[j+1,i-1]+gray[j+1,i]+gray[j+1,i+1]+gray[j,i-1]+gray[j,i]+gray[j,i+1]+gray[j-1,i-1]+gray[j-1,i]+gray[j-1,i+1])/9  #(gray[j, i]とその8近傍の画素の合計値)/9

  cv2.imshow("code 5", res)
  cv2.imwrite("code5.bmp", res)
  cv2.waitKey()
  cv2.destroyAllWindows()

if __name__ == '__main__':
    main()

