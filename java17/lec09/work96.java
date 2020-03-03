import java.awt.*;
import java.applet.*;

public class work96 extends Applet {
    public void paint(Graphics g) {
        PacMan73 p1 = new PacMan73();
        p1.setData(20, 20, 40);
        p1.draw(g);

        NoisyPacMan96 p2 = new NoisyPacMan96();
        p2.setData(20, 80, 60);
        p2.draw(g);
	p2.say(g);

	NoisyPacMan96 p3 = new NoisyPacMan96();
        p3.setData(20, 160, 80);
	p3.setWord("NoisyPacMan96");
        p3.draw(g);
	p3.say(g);

    }
}
