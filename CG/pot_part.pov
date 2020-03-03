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

union {
  difference{
  cone{
    <0,0,0>,2
    <0,4,0>,3
  }
  cone{
    <0,0,0>,1.7
    <0,4.2,0>2.7
  }
  pigment {
     color rgb <0.4,0.8,0.4>
  }
  normal{
   waves 2 scale 0.8
   }
  }
  cone{
  <0,0.2,0>,1.7
  <0,3.5,0>,2.6
  pigment{color Green}
  }
  }
  
  plane{<0,1,0>,0
  pigment{checker color Gray90 color Gray70}
  }
  
  background {LightBlue}     