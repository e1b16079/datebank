 #include "shapes.inc"
#include "colors.inc"
 
                                                                                                                                                                           camera {
  //orthographic
  //location < 3, 4, 20 >
  location < 10  ,  20,  25 >
  right    <-1.33,  0,  0 >
  look_at  < 0   ,  0.6,  0>
  angle 45
}
   
light_source {
  < 10, 10, 5> 
  color 2*White 
  area_light
  <0,0,-5>,<5,0,0>,5,5
  adaptive 1 jitter
}   


 torus{
  <0,0,0>
  }










  plane{<0,1,0>,0
  pigment{checker color Gray90 color Gray70}
  }
  
  background {LightBlue}     