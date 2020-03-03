class work56 {
    public static void main(String[] args) {

    int count = args.length;
        
        if (count > 0) {

	int[] a = new int[count];
            
            for (int i = 0 ; i < count; i++) {
                a[i] = Integer.parseInt(args[i]);
            }

    if(isTriangle(a[0],a[1],a[2])==true){
    System.out.println(a[0]+","+a[1]+","+a[2]+"は三角形になります。");
     



   }

   static boolean isTriangle(int x, int y, int z){
     int flag=0;
    if(x+y<=z){
     flag=1;}
    if(y+z<=x){
     flag=1;}
    if(z+x=y){
     flag=1;}
    return f=(flag==0);
    }

   static boolean isRight(int x, int y, int z) {
    int flag=1;
    int x2=x*x;
    int y2=y*y;
    int z2=z*z;

    if(x2+y2==z2){
     flag=0;}
    if(y2+z2==x2){
     flag=0;}
    if(z2+x2==y2){
     flag=0;}

    return f=(flag==0);
   }

}
