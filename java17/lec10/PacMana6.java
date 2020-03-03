import java.awt.*;

// (1) PacMana5クラスを継承してPacMana6クラスを定義する
public class PacMana6 extends PacMana5 {
    protected boolean stick = false;    // 舌の状態。初期値は「舌を引っ込めた」状態。
    protected int  fontSize = 70;	// 舌を描画するためのフォントのサイズ
    protected Font tngFont;             // 舌を描画するためのフォント

    // (3) ３引数のコンストラクタ
    PacMana6(int x0, int y0, int s0) {
        // スーパークラスのコンストラクタを呼ぶ
	super.setData(x0,y0,s0);

        // Serif、Font.PLAIN で大きさが fontSize のフォントを生成する
	tngFont=new Font("Serif", Font.PLAIN, fontSize);

    }

    // (4) 口の状態 open を反転する。口が閉じていれば、舌を引っ込める
    void changeMouth() {
        // スーパークラスのchangeMouthメソッドを呼ぶ
	super.changeMouth();

        // 口が閉じていれば、舌を引っ込める
	if(mouth==false){
	  stick=false;


    }

    // (5) 口が開いていれば、舌の状態 stick を反転する。
    void changeTongue() {
	if(mouth==true){
	 stick=!stick;


    }

    // (6) 口と舌の状態に従ってパックマンを描画する
    void draw(Graphics g) {
        // スーパークラスのdrawメソッドを呼ぶ
	super.draw(g);

        // 舌が「突き出した」状態ならば舌を描画する
	if(stick==true){
	  g.setColor(Color.red); 
	  g.drawString("～", x + size / 2, y + size / 2 + fontSize / 3);

	}



    }
}
