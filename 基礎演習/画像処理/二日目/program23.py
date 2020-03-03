# -*- coding: utf-8 -*-
import numpy as np
import cv2

 #main function-----------------------------------------------------------------------------
def main():
    global img, cache

    # read image
    img = cv2.imread("./zeni23.png")
    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

    background = cv2.imread("./background23.jpg")

    # display original image
    cv2.imshow("target image", img)

    # create mask
    mask = cv2.inRange(hsv, (60,150,80),(80,230,200))
    
    cv2.imshow("mask image", mask)
    cv2.imwrite("code09_msk.bmp", mask)
    
    mask = np.tile(mask[:,:,None],[1,1,3])

	# Chroma key
    img[mask==255] = background[mask==255]

	# display result image
    cv2.imshow("chroma key image", img)
    cv2.imwrite("code09.bmp", img)
    
    # keep all windows until "ESC" button is pressed
    cv2.waitKey(0)
    cv2.destroyAllWindows()


# run---------------------------------------------------------------------------------------
if __name__ == '__main__':
    main()
