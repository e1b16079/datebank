# -*- coding: utf-8 -*-
import cv2
import numpy as np
import math
import time
from numba import jit

@jit
def main():
    img = cv2.imread("Lenna.bmp",0) #grayスケールで読み込み
    cv2.imshow("image", img)

    bin1 = cv2.imread("bp1st.bmp",0) #[0,255]の2値画像をgrayスケールで読み込み
    bin1[bin1>0] = 1                 #[0,1]の2値画像へ変換

    bin2 = cv2.imread("bp1st(1).bmp",0) #[0,255]の2値画像をgrayスケールで読み込み
    bin2[bin2>0] = 1                 #[0,1]の2値画像へ変換

    bit1 = bin1       # 1bit目に埋め込むビットプレーンを作成
    bit2 = bin2 << 1  # 2bit目に埋め込むビットプレーンを作成

    # 3bit目から8bit目までにはimgのオリジナルのビットプレーンを使う
    bit3 =(int('00000000',2)&img)
    bit4 =(int('00000000',2)&img)
    bit5 =(int('00000000',2)&img)
    bit6 =(int('00000000',2)&img)
    bit7 =(int('01000000',2)&img)
    bit8 =(int('10000000',2)&img)

     # bit1～8のビットプレーンをOR演算（ | ）を使って合成する
    img2 = bit1|bit2|bit3|bit4|bit5|bit6|bit7|bit8
    
    cv2.imshow("result image", img2)
    cv2.imwrite("code08.bmp", img2)

    cv2.imshow("1st", (int('00000001',2) & img2)*255)
    cv2.imshow("2nd", (int('00000010',2) & img2)*255)

    cv2.waitKey()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
