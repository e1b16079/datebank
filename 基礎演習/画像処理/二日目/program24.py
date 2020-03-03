#[program24.py]もっとも単純な動画表示サンプル
# -*- coding: utf-8 -*-
import cv2
import numpy as np

# main----------------------------------------------------
def main():
  cap = cv2.VideoCapture("./mymovie.mp4")
  fps = 15  #サンプル動画のFPSは15

  #空のウィンドウを生成
  cv2.namedWindow("video player", cv2.WINDOW_AUTOSIZE)

  while cap.isOpened() :
    ret, frame = cap.read()

    if cv2.waitKey(int(1000/fps)) & 0xFF == ord('q') or ret == False:
      break

    cv2.imshow("video", frame)

  cv2.destroyAllWindows()
  cap.release()

# run-----------------------------------------------------
if __name__ == '__main__':
    main()
