# -*- coding: utf-8 -*-
import cv2
import numpy as np
import math
import time
from numba import jit

@jit
def main():
    # bit 演算のサンプル##############################################
    binary = int('10101101',2)
    mask   = int('11111111',2)
    biand  = binary & mask # AND演算
    print(bin(binary), "(", binary, ") and ", bin(mask), "(", mask, ") = ", bin(biand), "(", biand, ")")

    shift = biand >> 6 # 6bit右シフト
    print("shift right(6) = ", bin(shift), " = ", shift)

    ##################################################################
    img =cv2.imread("code07.bmp", 0) #grayスケールで読み込み
    cv2.imshow("image", img)
    

    bit1 =int('00000001',2)&img
    bit2 =(int('00000010',2)&img)>>1
    bit3 =(int('00000100',2)&img)>>2
    bit4 =(int('00001000',2)&img)>>3
    bit5 =(int('00010000',2)&img)>>4
    bit6 =(int('00100000',2)&img)>>5
    bit7 =(int('01000000',2)&img)>>6
    bit8 =(int('10000000',2)&img)>>7

    cv2.imshow("1st bit", bit1*255) # bit planeは[0, 1]しか取らないため，[0, 255]の2値画像に変換して表示
    cv2.imshow("2nd bit", bit2*255) # bit planeは[0, 1]しか取らないため，[0, 255]の2値画像に変換して表示
    cv2.imshow("3rd bit", bit3*255) # bit planeは[0, 1]しか取らないため，[0, 255]の2値画像に変換して表示
    cv2.imshow("4th bit", bit4*255) # bit planeは[0, 1]しか取らないため，[0, 255]の2値画像に変換して表示
    cv2.imshow("5th bit", bit5*255) # bit planeは[0, 1]しか取らないため，[0, 255]の2値画像に変換して表示
    cv2.imshow("6th bit", bit6*255) # bit planeは[0, 1]しか取らないため，[0, 255]の2値画像に変換して表示
    cv2.imshow("7th bit", bit7*255) # bit planeは[0, 1]しか取らないため，[0, 255]の2値画像に変換して表示
    cv2.imshow("8th bit", bit8*255) # bit planeは[0, 1]しか取らないため，[0, 255]の2値画像に変換して表示

    cv2.imwrite("bp1st.bmp", bit1*255)
    cv2.imwrite("bp2st.bmp", bit2*255)
    cv2.imwrite("bp3st.bmp", bit3*255)
    cv2.imwrite("bp4st.bmp", bit4*255)
    cv2.imwrite("bp5st.bmp", bit5*255)
    cv2.imwrite("bp6st.bmp", bit6*255)
    cv2.imwrite("bp7st.bmp", bit7*255)
    cv2.imwrite("bp8st.bmp", bit8*255)

    cv2.waitKey(0)
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
