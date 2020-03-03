# -*- coding: utf-8 -*-
import cv2
import numpy as np
import math
import time
import matplotlib.pyplot as plt
from numba import jit

@jit
def main():
    img = cv2.imread("code5.bmp")
    imh, imw, imc = img.shape
    
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    gyh, gyw = gray.shape
    
    list = range(0,256)

    plt.figure(1)
    plt.subplot(1,2,1)
    plt.imshow(gray,'gray',vmin=0,vmax=255)
    
    plt.subplot(1,2,2) 
    hist = cv2.calcHist([gray],[0],None,[256],[0,256])
    plt.bar(np.arange(0,256), hist[:,0], color='k', width=1.0)
    plt.xlim([0,255])

    c = ['b','g','r']
    for i in range(3):
        hist =cv2.calcHist([img],[i],None,[256],[0,256])
        plt.plot(np.arange(0,256), hist[:,0], color=c[i])
        plt.xlim([0,255])

    plt.savefig("code3.1.jpg")
    plt.show()

if __name__ == '__main__':
    main()
