import java.awt.*;
import java.applet.*;
class NoisyPacMan97 extends PacMan84{

	protected String word;

    void setWord(String w0){
	word=w0;
    }

    void draw(Graphics g){
	super.draw(g);
	g.setFont(new Font("Serif",Font.PLAIN,size/3));
	g.setColor(Color.magenta);
	g.drawString(word,x + size*5/6,  y + size/2);

}

    NoisyPacMan98(int x0, int y0, int s0, String w0){
	super(x0,y0,s0);
	this.setWord(w0);
    }

    NoisyPacMan98(int x0, int y0){
	super(x0,y0);
	this.setWord("Noisy");
    }


}
