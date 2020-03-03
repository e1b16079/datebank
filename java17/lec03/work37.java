import java.awt.*;
import java.applet.*;

public class work37 extends Applet {
  public void paint(Graphics g) {
	String marubatu="";
	int f=0;

	int num=1*(int)(Math.random()*10)+1;

	g.drawString("num="+num,10,45);

	if(num%2==0){
         f=1;
	}

	for(int i=1;i<=num;i++){
	 if(f==0){
	  marubatu=marubatu+"○";
	  f=1;
	}else{
	  marubatu=marubatu+"×";
	  f=0;
	}

	}
	g.setFont(new Font( "MonoSpaced", Font.PLAIN, 64 ));
	g.drawString(marubatu, 10, 100);

	
}
}
