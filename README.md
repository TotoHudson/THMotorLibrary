Creado por Tomas Hudson Maquieyra 2023 6to Electronica E.E.S.T N°8 

<THMotor.h>  Es una libreria para arduino UNO y ESP32 que permite controlar motores DC a traves de puentes H como L293, L298, TBJ6612 (Con la salvedad en este ultimo que no utiliza el pin STBY, por ende se debe colocar a +V).	

-----------------------------------------------------------------------------------
SINTAXIS PARA CREAR UN OBJETO TIPO THMotor:

	THMotor <Nombre>(pinINA , pinINB, pinEN);

pinINA: pin del arduino al cual se encuentra conectado una entrada del puente H.
pinINB: pin del arduino al cual se encuentra conectado la otra entrada del puente H.
pinEN: pin del arduino al cual se encuentra conectado el enable del puente H (DEBE SER DE TIPO PWM).

------------------------------------------------------------------------------------
FUNCION setSpeed();

	<nombreObjeto>.setSpeed(val_vel_pwm);
Determina la velocidad a la cual andara el motor.
val_vel_pwm: Frecuencia de señal pwm, recibe un rango entre 0 y 255.

-------------------------------------------------------------------------------------
FUNCION run();

 	<nombreObjeto>.run(comando);
Hace girar al motor para adelante o para atras en base al comando que recibe. Puede dejar el motor en estado libre, sin polarizacion alguna en sus terminales.

COMANDO: solo puede recibir tres comandos.
		
		FORWARD: El motor gira hacia adelante. 
		BACKWARD: El motor gira hacia atras. 
		RELEASE: Libera el motor. 
