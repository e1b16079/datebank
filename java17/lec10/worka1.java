import java.awt.*;
import java.applet.*;

public class worka1 extends Applet {
    int count = 0;
    Font font;
    Button Button1,Button2,Button3;

    public void init() {
        font = new Font("Serif", Font.BOLD, 72);
	Button1=new Button("left");
	add(Button1);

	Button2=new Button("middle");
	add(Button2);

	Button3=new Button("right");
	add(Button3);

    }


}
