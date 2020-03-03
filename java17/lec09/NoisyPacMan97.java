import java.awt.*;
import java.applet.*;
class NoisyPacMan97 extends PacMan73{

	protected String word="Noisy";

    void setWord(String w0){
	word=w0;
    }

    void draw(Graphics g){
	super.draw(g);
	g.setFont(new Font("Serif",Font.PLAIN,size/3));
	g.setColor(Color.magenta);
	g.drawString(word,x + size*5/6,  y + size/2);

}
}
