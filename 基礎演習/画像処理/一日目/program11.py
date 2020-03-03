# -*- coding: utf-8 -*-
import cv2
import numpy as np
import math
import time
from numba import jit

@jit
def main():
    img = cv2.imread("Lenna.bmp")
    imh, imw, imc = img.shape

    blue  = img[:,:,0]
    green = g=img[:,:,1]
    red   = r=img[:,:,2]

    print("size:", imh, "x", imw, " pixel, channel:", imc)
    print("min-max[B,G,R]:(", blue.min(), "-", blue.max(), ", ", green.min(), "-", green.max(), ", ", red.min(), "-", red.max(), ")")
    
    cv2.imshow("image", img)	#元画像の表示

    cv2.imshow("blue", blue)	#青チャンネルの表示
    cv2.imshow("green", green)	#緑チャンネルの表示
    cv2.imshow("red", red)		#赤チャンネルの表示

    cv2.waitKey()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
