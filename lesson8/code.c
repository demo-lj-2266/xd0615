/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>  //声明调用Servo.h库

int pos = 0;    //定义变量pos

Servo servo_9;  //创建一个舵机，命名为servo_9

void setup()
{
  servo_9.attach(9); //将9号引脚与舵机对象连接起来

}

void loop()
{
  for (pos = 0; pos <= 180; pos += 1) { //设置循环让舵机一度一度的从度0转到180度
    
    servo_9.write(pos); //让舵机转动到pos角度
   
    delay(15); // 转动间隔为15毫秒
  }
  for (pos = 180; pos >= 0; pos -= 1) {//设置循环让舵机一度一度的从180度转回0度
   
    servo_9.write(pos);  //让舵机转动到pos角度
    
    delay(15); // 转动间隔为15毫秒
  }
}