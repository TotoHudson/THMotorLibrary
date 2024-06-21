//	        Creado por HUDSON MAQUIEYRA TOMAS 2023		//
//		   6to Electronica E.E.S.T N°8			//
//	 <THMotor.h>  Es una libreria para arduino UNO que 	//
//	     permite controlar motores DC a traves de 		//
//	puentes H con dos pines de control y uno EN PWM		//


-------------------------------------------------------------------------------------
SINTAXIS PARA CREAR UN OBJETO TIPO THMotor:

	THMotorL293 <Nombre>(pinINA , pinINB, pinEN);

	pinINA: pin del arduino al cual se encuentra conectado una entrada del puente H.
	pinINB: pin del arduino al cual se encuentra conectado la otra entrada del puente H.
	pinEN: pin del arduino al cual se encuentra conectado el enable del puente H (DEBE SER DE TIPO PWM).

-------------------------------------------------------------------------------------
FUNCION setSpeed();

	Determina la velocidad a la cual andara el motor.

SINTAXIS: <nombreObjeto>.setSpeed(val_vel_pwm);

	val_vel_pwm: Frecuencia de señal pwm, recibe un rango entre 0 y 255.

-------------------------------------------------------------------------------------
FUNCION run();
	
	Hace girar al motor para adelante o para atras en base al comando que recibe.
	Puede dejar el motor en estado libre, sin polarizacion alguna en sus terminales.

SINTAXIS: <nombreObjeto>.run(comando);

	comando: solo puede recibir tres comandos.
		
		FORWARD: El motor gira hacia adelante. 
		BACWARD: El motor gira hacia atras. 
		RELEASE: Libera el motor. 
-------------------------------------------------------------------------------------