import java.awt.*;
import java.applet.*;

public class work74 extends Applet {
    public void paint(Graphics g) {
        PacMan74 p1, p2;
	p1=new PacMan74();
	p2=new PacMan74();

	p1.setData(40,100,40);
	for(int i=0;i<3;i++){
         p1.draw(g);
	 p1.move(80,-40);
	}

	p2.setData(20,20,20);
	for(int i=0;i<6;i++){
         p2.draw(g);
	 p2.move(20);
	}

    }
}
