import java.awt.*;
import java.applet.*;
import java.util.*;

public class work22 extends Applet {

  public void paint(Graphics g){
    Calendar cal = Calendar.getInstance();
    int s = cal.get(Calendar.SECOND);

    // 日の丸の高さと幅を現在時刻の秒数 s から計算します
    int fH = 5  * s / 3;
    int fW = fH * 3 / 2;

    // 日の丸の中心の座標
    int fX0 = 90, fY0 = 60;

    // 日の丸の始点の座標をfHとfWを使って計算します
    int fX = fX0 - fW/2;
    int fY = fY0 - fH/2;

    // 始点が (fX, fY) で、高さ fH で幅 fW の日の丸を描きます
    setBackground(Color.lightGray);
    g.setColor(Color.white);
    g.fillRect(fX, fY, fW, fH);
    g.setColor(Color.red);
    g.fillOval(fX+fH/2,fY+fH/4 , fH/2, fH/2);

    // 確認用の長方形
    g.setColor(Color.black);
    g.drawRect(15, 10, 150, 100);
  }
}

