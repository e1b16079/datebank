import java.awt.*;
import java.applet.*;

public class work84 extends Applet {
    public void paint(Graphics g) {
        PacMan84 p1, p2;

        p1 = new PacMan84(40, 45);
        p1.draw(g);

        p2 = new PacMan84(120, 25, 100);
        p2.draw(g);
    }
}
