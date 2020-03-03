class Dimension86 {
    private int width;    // 長方形領域の幅
    private int height;    // 長方形領域の高さ

    Dimension86(int w0, int h0){
	width = w0; height = h0;
    }

    Dimension86(int w0){
	width = w0; height = w0;
    }

    void setSize(int w0, int h0) { // 長方形領域の設定メソッド
        width = w0; height = h0;
    }

    void show() {  // 情報を表示
        System.out.print(toString() + " ");

        String msg = "(" + width + " X " + height + ")" + " 面積 = " + (width * height);

        if (width == height) {
            msg = "正方形領域" + msg;
        } else {
            msg = "長方形領域" + msg;
        }
        System.out.println(msg);

    }
}
