class GeoPoint76 {

    private String name = " ";
    private double east = 0;
    private double north = 0;

    void setData(String na, double ea, double no){
	name= na;
	east= ea;
	north=no;
    }

    void show(){
    String ew="東",ns="北";
	if(east<0){
	  ew="西";
	}
	if(north<0){
	  ns="南";
	}

	System.out.format("%sは御所から%s %.1f km, %s %.1f km\n",name ,ew ,east ,ns ,north);
    }


    double distance(GeoPoint76 gp){
	return Math.sqrt(Math.pow(east-gp.east,2)+Math.pow(north-gp.north,2));
    }

    double distance(){
	return Math.sqrt(Math.pow(east,2)+Math.pow(north,2));
    }

    void distanceInfo(GeoPoint76 gp){
	System.out.format("%sと%sとの距離は %3.1f km\n",name,gp.name,distance(gp));
    }

    void distanceInfo(){
	System.out.format("%sと御所との距離は %3.1f km\n",name,distance());
    }


}
