import java.awt.*;
import java.applet.*;
class NoisyPacMan96 extends PacMan73{

	protected String word="Noisy";

    void setWord(String w0){
	word=w0;
    }

    void say(Graphics g){
	g.setFont(new Font("Serif",Font.PLAIN,size/3));
	g.setColor(Color.black);
	g.drawString(word,x + size*5/6,  y + size/2);
    }

}
