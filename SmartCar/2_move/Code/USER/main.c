#include "stm32f10x.h"
#include "delay.h"
#include "motor.h"
/*
void ZYSTM32_run(int speed,int time);       //前进函数
void ZYSTM32_brake(int time);               //刹车函数
void ZYSTM32_Left(int speed,int time);      //左转函数
void ZYSTM32_Spin_Left(int speed,int time); //左旋转函数
void ZYSTM32_Right(int speed,int time);     //右转函数
void ZYSTM32_Spin_Right(int speed,int time);//右旋转函数
void ZYSTM32_back(int speed,int time);      //后退函数

*/


 int main(void)
 {	
	 delay_init();
	 TIM4_PWM_Init(7199,0);  //初始化PWM
		while(1)
		{  
			 ZYSTM32_back(70,1000);//后退1s
			 ZYSTM32_brake(500);//停止0.5S
			 ZYSTM32_run(70,3000);//前进1S
			 ZYSTM32_brake(500);//停止0.5S
//			
         ZYSTM32_Left(70,1000);//左转1S
         ZYSTM32_Right(70,1000);//右转1S
////  	 
    		 ZYSTM32_Spin_Right(70,1000);//向右旋转2S
 		     ZYSTM32_Spin_Left(70,1000);//向左旋转2S
         ZYSTM32_brake(500);//停止0.5S 		
		}
 }

