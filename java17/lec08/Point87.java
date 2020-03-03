import java.awt.*;
import java.applet.*;

public class work87 extends Applet {
    public void paint(Graphics g) {
        PacMan87 p1, p2;

        p1 = new PacMan87(10, 80);
	for(int i=0;i<4;i++){
          p1.draw(g);
	  p1.move(120,-20);
	  p1.enLarge();
	}

        p2 = new PacMan87(20, 20, 20);
	for(int j=0;j<4;j++){
          p2.draw(g);
	  p2.move(25);
	  p2.enLarge(1.2);
	}

    }
}
