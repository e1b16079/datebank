import java.awt.*;
import java.applet.*;

public class work98 extends Applet {
    public void paint(Graphics g) {
        PacMan84 p1 = new PacMan84();
        p1.setData(20, 20, 40);
        p1.draw(g);

        NoisyPacMan98 p2 = new NoisyPacMan98(20, 80);
        p2.draw(g);
	p2.setWord("NoisyPacMan96");
	p2.say(g);

	NoisyPacMan98 p3 = new NoisyPacMan98();
        p3.setData(20, 180, 80);
	p3.setWord("NoisyPacMan97");
        p3.draw(g);

    }
}
