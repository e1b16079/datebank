import java.awt.*;

public class PacManb5 extends PacManbA {
    protected int x, y, size;	
    protected String word = "Gya~~";

    // ３引数のコンストラクタ
    PacManb5(int x0, int y0, int s0) {
        super(x0,y0,s0);
    }

    void setWord(String w0){
	word = w0;
    }

    String getWord(){
	return word;
    }

    void draw(Graphics g){
	super.draw(g);
	g.setFont(new Font("SansSerif", Font.PLAIN, angle * 2 / 5));
	g.drawString(word,120, 90);

    }

}
