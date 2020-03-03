import java.awt.*;
import java.applet.*;

public class work85 extends Applet {
    public void paint(Graphics g) {
        Color c1, c2, c3, c4;

        // red = 64, green = 128, blue = 160 の色 c1 を生成
        c1 = new Color(64,128,160);
        g.setColor(c1);
        g.fillRect(20, 20, 70, 70);

        // 16 進 0Xc1fe80 の色 c2 を生成
        c2 = new Color(0Xc1fe80);
        g.setColor(c2);
        g.fillRect(90, 20, 70, 70);

        // Math.randomメソッドを使って、float 型の乱数値の red, green, blue  の色 c3 を生成
        float red, green, blue;

	red = (float)Math.random();
	green = (float)Math.random();
	blue = (float)Math.random();


        c3 = new Color(red, green, blue);
        g.setColor(c3);
        g.fillRect(160, 20, 70, 70);

        // red = 120, green = 220, blue = 250, alpha = 128 の色 c4 を生成
        c4 = new Color(120,220,250,128);
        g.setColor(c4);
        g.fillRect(20, 60, 210, 70);
    }
}
