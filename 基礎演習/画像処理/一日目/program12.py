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
    green = img[:,:,1]
    red   = img[:,:,2]

    print("size:", imh, "x", imw, " pixel, channel:", imc)
    print("min-max[B,G,R]:(", blue.min(), "-", blue.max(), ", ", green.min(), "-", green.max(), ", ", red.min(), "-", red.max(), ")")
    cv2.imshow("image", img)

    img2 = cv2.merge((red,blue,green))
	
    cv2.imshow("replace image", img2)
    cv2.imwrite("code2.bmp", img2)

    cv2.waitKey()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
