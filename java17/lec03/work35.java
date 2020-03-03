import java.awt.*;
import java.applet.*;

public class work35 extends Applet {
  public void paint(Graphics g) {
	int centerX = 125, centerY = 75; // 円の中心の座標
	int rad = 70;                    // 円の半径
	int i = 0;                       // 円の番号
    
	int num=1*(int)(Math.random()*9)+1;
	g.drawString("num="+num,20,20);

        while (i!=num) {
	  if(i%2==0){
	   g.setColor(Color.red);
	  }else{
	   g.setColor(Color.yellow);
	   }

            g.fillOval(centerX-rad, centerY-rad, 2*rad, 2*rad);
            rad = (rad*9)/10;
	    i++;
        }
    }
}

