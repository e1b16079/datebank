import java.awt.*;
import java.applet.*;

public class work73 extends Applet {
    public void paint(Graphics g) {
        PacMan73 p1, p2;
	p1=new PacMan73();
	p2=new PacMan73();

	p1.setData(40,40,60);
        p1.draw(g);

	p2.setData(120,20,100);
        p2.draw(g);


    }
}
