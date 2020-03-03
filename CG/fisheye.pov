#include "shapes.inc"
#include "colors.inc"
#include "shapes.inc"
#include "textures.inc"
#include "Woods.inc"
#include "stones.inc"
#include "glass.inc"
#include "metals.inc"

camera {
   location <15, 30, 25>
   right    <-1.33,  0,  0 >
   look_at  < 0   ,  0,  0 >
   angle 60
 }
                           
 light_source {
               < 5,15,5 > color White*2
               area_light
               <0,0,-5>,<5,0,0>,5,5
               adaptive 1 jitter
  
 }
                  
 union{         
    difference{
      cone{
         <0,0,0>,2
         <0,4,0>,3
         }
      
      cone{
          <0,0.2,0>,1.7
          <0,4.2,0>,2.7
      }    
         
      pigment{
      color rgb<0.7, 0.7, 0.4>
      }        

     normal{
      waves 1 scale 0.1
      }
   }
    cone{
          <0,0.2,0>,1.7
          <0,3,0>,2.65
           pigment{
           color Green  
           filter 0.8
           }

     }
 } 
   
   
   


 union{
 difference{
              union{
              cylinder{<0,0,0>,<0,5,0>,3}             
              torus{1.6,0.5
              rotate<90,0,0>
              translate<3,2.5,0> }
              pigment{color Red}
              translate<8,0,0>  

             }
              
              cylinder{
              <0,0,0>,<0,5.2,0>,2.6
              pigment{color Red} 
              translate<8,0,0>
              }
           }
              cylinder{
              <0,0,0>,<0,4.2,0>,2.5
              pigment{
              color Yellow  
              filter 0.8 }
              translate<8,0,0>
              } 
               
 }  





 union{
 difference{     
        torus{3.8,2
        pigment{  rgb<0.2,0.02,0>}
        finish{phong 1}
        translate<-15,2.4,-5>
              } 
         }     
        torus{3.8,2
        pigment{ rgb<0.4,0.1,0>}
        finish{crand 0.3}
        translate<-15,2,-5>
              }      

}




 
  
      
 /* */    
 union{ 
   difference{
        union{
       sphere{<0,0,0>,2.5
       scale<1,1.5,1.8> 
       pigment{ color White} 
       }    
       
       sphere{<0,0,0>,1.8
       scale<0.2,1.5,1.8> 
       pigment{ color Green}
       translate<0.2,1.5,0>
       rotate<0,0,25>  
       } 
       
       sphere{<0,0,0>,1.8
       scale<0.2,1.5,1.8> 
       pigment{ color Green}
       translate<-0.2,1.5,0>
       rotate<0,0,-25>  
       } 
       
         sphere{<0,0,0>,0.3
       pigment{ color Red} 
       translate<0.8,2,4>
       } 
       
       sphere{<0,0,0>,0.3
       pigment{ color Red} 
       translate<-0.8,2,4>
       }  
           }
             translate<-6,0,10>
             rotate<0,40,0>  
            
           }
 }     
     
 union{     
 union{    
   difference{  
    cone{
    <0,5,0>0.2,<0,7,0>,4
    } 
    cone{
    <0,5.2,0>0.2,<0,7.2,0>,3.95
    } 
    }     
   cylinder{
     <0,0.01,0>,<0,0.1,0>,2
    }  
   cylinder{
     <0,0.01,0>,<0,5,0>,0.2
    }   
      pigment{ color Clear filter 0.9 }  
   interior{ ior 1.5 } 
  
    }
    
   sphere{<0,0,0>,1.8
   pigment{ color  MediumTurquoise}
   finish{crand 0.05}
   translate<0,7.2,0>
   } 
   union{
   sphere{<0,0,0>,0.65
   pigment{ color Red}
   translate<2.5,7.2,0>
   finish{phong 1}
   }  
   
 }           


        difference{
      union{
   torus{
   1,0.07
   rotate<90,0,90>
   }
   translate<3.5,7,0>
            }


 box{
   <0,4,-5>,<7,7,8>
              }

}
   translate<4,0,-16> 
 }
    
  

                                                
 plane{
   <0 , 1, 0>, 0                                   
   pigment { checker color Yellow color White } 
 } 


 // Color of Background 
 background {LightBlue}     
     
 /* JIKU  
 union{
   cylinder{              
     <0,0,0>,<5,0,0>,0.1
   }
   cone{                
     <5,0,0>,0.2<5.5,0,0>,0
   }
   pigment{ color Red }
 }

union{
   cylinder{              
     <0,0,0>,<5,0,0>,0.1
   }
   cone{                
     <5,0,0>,0.2<5.5,0,0>,0
   }
   pigment{ color Green }
   rotate z*90
 }  

union{
   cylinder{              
     <0,0,0>,<5,0,0>,0.1
   }
   cone{                
     <5,0,0>,0.2<5.5,0,0>,0
   }
   pigment{ color Blue }
   rotate y*-90
 }
