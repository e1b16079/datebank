import java.awt.*;
import java.applet.*;

public class work33 extends Applet {
    public void paint(Graphics g) {

	String hoshi = "";
	String moji = "";

	int lot=(int)(Math.random()*10)+1;
	g.drawString("lot="+lot,20,20);

	for(int i=1;i<=lot;i++){
	 hoshi=hoshi+"★";
	}

	if(lot>6){
	 g.setFont(new Font("Serif", Font.PLAIN, 48));
	 moji=moji+"大吉";
        }
        else if(lot>3){
	 g.setFont(new Font("Serif", Font.PLAIN, 32));
	 moji=moji+"中吉";
	}else{
         g.setFont(new Font("Serif", Font.PLAIN, 32));
	 moji=moji+"小吉";
	}

	g.drawString(moji+hoshi,20,60);



    }
}

