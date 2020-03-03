import java.awt.*;
import java.applet.*;

public class work77 extends Applet {
    public void paint(Graphics g) {
        // 多角形の i 番目の頂点の座標を (px[i], py[i]) とする
        int[] px = {15, 15, 30, 25, 30, 40, 50, 55, 50, 40, 30, 25, 30, 15, 10};
        int[] py = {10, 27, 27, 10, 10, 27, 27, 30, 33, 33, 50, 50, 33, 33, 40};

	Polygon p1= new Polygon();
	Color c = Color.red;

	for(int i=0;i<15; i++){
	  p1.addPoint(px[i],py[i]);
	}

	for(int k=0;k<5;k++){
	g.setColor(c);
	g.fillPolygon(p1);
	g.drawPolygon(p1);
	p1.translate(45,20);
	c = c.darker();
	}


    }
}

