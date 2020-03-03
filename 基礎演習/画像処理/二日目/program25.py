# -*- coding: utf-8 -*-
import numpy as np
import cv2

# main function-----------------------------------------------------------------------------
def main():
    # read video file & background file
    cap = cv2.VideoCapture("./mymovie.mp4")
    fps = 15 # この動画のFPSは15
    background = cv2.imread("./mvbackground.jpg")
    
    #ウィンドウの名前を設定
    cv2.namedWindow("video player", cv2.WINDOW_AUTOSIZE)
    
    while (cap.isOpened()):
        ret, frame = cap.read()
        
        if cv2.waitKey(int(1000/fps)) & 0xFF == ord('q') or ret == False:
            break

        # frameをhsvに変換
        ########################################################
        # frameのマスクを作る
        ########################################################

        cv2.imshow("mask image", mask)

        mask = np.tile(mask[:,:,None],[1,1,3])

        # Chroma key
        ########################################################

        cv2.imshow("video player", frame)
        
    cv2.destroyAllWindows()
    cap.release()

# run---------------------------------------------------------------------------------------
if __name__ == '__main__':
    main()
