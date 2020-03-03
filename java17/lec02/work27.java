import java.awt.*;
import java.applet.*;
import java.util.*;

public class work27 extends Applet {

  public void paint(Graphics g){
    Calendar cal = Calendar.getInstance();
    int s = cal.get(Calendar.SECOND);

    int poleX = 170, poleY = 20, poleW = 10, poleH = 300;
    int fX, fY, fH=100, fW=150;

    setBackground(Color.gray);

    if(s%2==1){
     fX=180;
     fY=20;
    } else{
     fX=20;
     fY=20;
    }
    // ポール
    g.setColor(Color.black);
    g.fillRect(poleX, poleY, poleW, poleH);
  

    g.setColor(Color.white);
    g.fillRect(fX, fY, fW, fH);
    g.setColor(Color.red);
    g.fillOval(fX+fH/2,fY+fH/4 , fH/2, fH/2);

    }
}
