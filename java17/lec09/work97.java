import java.awt.*;
import java.applet.*;

public class work97 extends Applet {
    public void paint(Graphics g) {
        PacMan73 p1 = new PacMan73();
        p1.setData(20, 20, 40);
        p1.draw(g);

        NoisyPacMan96 p2 = new NoisyPacMan96();
        p2.setData(20, 80, 80);
        p2.draw(g);
	p2.setWord("NoisyPacMan96");
	p2.say(g);

	NoisyPacMan97 p3 = new NoisyPacMan97();
        p3.setData(20, 180, 80);
	p3.setWord("NoisyPacMan97");
        p3.draw(g);

    }
}
