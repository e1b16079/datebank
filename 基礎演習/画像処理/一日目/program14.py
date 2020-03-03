# [program] r,g,bの平均値を使ったグレースケール化
# -*- coding: utf-8 -*-
import cv2
import numpy as np
from numba import jit #for文処理高速化のおまじない

@jit #for文処理高速化のおまじない
def main():
  img =cv2.imread("Lenna.bmp")
  cv2.imshow("image", img)

  #画像の高さ，幅，チャンネル数を調べる
  imh, imw, imc = np.shape(img)

  #int型で各色のデータを読み込み（この時r，g，bはint型）
  r = img[:,:,0]
  g = img[:,:,1]
  b = img[:,:,2]

  #uint8型の入れ物を作る（すべて0で初期化）*
  res = np.zeros((imh, imw, imc), dtype="uint8")

  for j in range(imh):
    for i in range(imw):
      res[j, i] = (r[j, i]+g[j, i]+b[j, i])/3

  cv2.imshow("result", res)

  cv2.waitKey()
  cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
