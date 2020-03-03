import java.awt.*;
import java.applet.*;

public class work14 extends Applet {
    public void paint(Graphics g){
        g.fillRect(0,0,250,150 );
        
        // 1 段め
        g.fillRect(25,15,50,40);
        g.fillRect(75,15,50,40);
        g.fillRect(125,15,50,40);
        g.fillRect(175,15,50,40);
        
        // 2 段め
        g.fillRect(25,55,50,40);
        g.fillRect(75,55,50,40);
        g.fillRect(125,55,50,40);
        g.fillRect(175,55,50,40);
        
        // 3 段め
        g.fillRect(25,95,50,40);
        g.fillRect(75,95,50,40);
        g.fillRect(125,95,50,40);
        g.fillRect(175,95,50,40);
    }
}
