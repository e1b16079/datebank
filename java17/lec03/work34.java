import java.awt.*;
import java.applet.*;

public class work34 extends Applet {
  public void paint(Graphics g) {
    FontMetrics metrics;
    int width;

    //１段目に表示する文字列
    String strS = "Serif, Font.ITALIC, 32pt";

    Font font1 = new Font("Serif", Font.ITALIC, 32);
    g.setFont(font1);
    metrics = g.getFontMetrics();
    width = metrics.stringWidth(strS);
    g.setColor(Color.orange);
    g.fillRect(20, 20, width, 20);

    //１段目の文字列を描く
    g.setColor(Color.black);
    g.drawString(strS, 20, 40);

    //２段目に表示する文字列
    String strSS = "SansSerif, Font.BOLD, 28pt";

    //new で生成した Font を直接 setFont する
    g.setFont(new Font("SansSerif", Font.BOLD, 28));
    metrics = g.getFontMetrics();
    width = metrics.stringWidth(strSS);
    g.setColor(Color.yellow);
    g.fillRect(20, 70, width, 20);



    //２段目の文字列を描く
    g.setColor(Color.black);
    g.drawString(strSS, 20, 90);

    //３段目に表示する文字列
    String strMS = "MonoSpaced, Font.PLAIN, 24pt";

    // 直接 setFont する
    g.setFont(new Font("MonoSpaced", Font.PLAIN, 24));
    metrics = g.getFontMetrics();
    width = metrics.stringWidth(strMS);
    g.setColor(Color.pink);
    g.fillRect(20, 110, width, 20);





    //３段目の文字列を描く
    g.setColor(Color.black);
    g.drawString(strMS, 20, 130);
  }
}

