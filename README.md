#Informe 
##Simulador en Thinkercad el Arduino y ESP82

###1.	PLANTEAMIENTO DEL PROBLEMA
Actualmente existen varias plataformas de tarjetas de desarrollo, y algunas de ellas son de hardware y software libre. No obstante, existen otras plataformas las cuales al mismo tiempo de ser de forma libre nos dan como servicio adicional el hecho de ser gratuitas. En este documento se trabajará con Arduino Uno y ESP8266. 
###2. OBJETIVOS
General:
●	Implementar circuitos con las tarjetas de desarrollo Arduino Uno y ESP 8266 por medio de plataformas digitales.
Específicos:
●	Identificar los componentes electrónicos que componen las tarjetas de desarrollo Arduino Uno y ESP 8266.
●	Conocer las generalidades y funcionamiento las tarjetas de desarrollo Arduino Uno y ESP 8266.
●	Reconocer la escritura y sintaxis de las tarjetas de desarrollo Arduino Uno y ESP 8266.
###3.	ESTADO DEL ARTE
Arduino

Vidal-Silva, C., Lineros, M. I., Uribe, G. E., & Olmos, C. J. (2019). Electrónica para Todos con el Uso de Arduino: Experiencias Positivas en la Implementación de Soluciones Hardware-Software. Este trabajo presenta experiencias para con el desarrollo de proyectos Arduino, de estudiantes de Ingeniería Civil Informática de la Universidad Viña del Mar (ICI-UVM) en Chile, en un módulo (curso) de su proceso formativo. Las áreas de informática y electrónica usualmente consideran rumbos formativos diferentes sin presentar una clara hegemonía en el proceso de enseñanza, con un bajo desarrollo de competencias integradoras para la producción de soluciones que combinan hardware y software para el procesamiento de señales, lo que Arduino permite disminuir en alto grado. 


###4.	MARCO TEÓRICO
Gracias a las nuevas plataformas que se han creado, los desarrolladores han podido manejar el desarrollo y diseño de distintos proyectos con una mayor rapidez y eficiencia en lo que son los diferentes procesos que estos conllevan. Actualmente la adquisición de dichas plataformas sea vuelto mucho más fácil y barato, al punto de llegar a utilizar algunas plataformas de manera gratuita.
También en otro apartado de lo que se refiere hardware, los controladores como lo son los Arduinos Uno son los más utilizados por sus cualidades al momento de programarlos ya que su programación es estándar y eso ayuda a muchos desarrolladores al momento de generar interfaces para cualquier dispositivo.
Tinkercar es una plataforma online brindada por Autodesk, una de sus principales características es el hecho de poder utilizarla de forma gratuita, antes de ello es esencial la creación de una cuenta de dicha plataforma. Existen varios servicios que nos provee la plataforma por el que se la conoce en todo el mundo principalmente es ser una herramienta para el diseño de piezas en 3D, pero en este documento nos centraremos en otro servicio que igualmente ofrece la plataforma es cuál es la posibilidad de simular circuitos electrónicos como también el hecho de poder programar los mismos, especialmente en Arduino (Vidal-Silva, C., Lineros, M. I., Uribe, G. E., & Olmos, C. J. ,2019).
Tinkercad unifica un lenguaje de programación estructurado y componentes electrónicos compatibles con Arduino para poder generar un ecosistema el cual sea ideal para la programación y creación de soluciones tecnológicas.
Arduino UNO
ARDUINO UNO es un microcontrolador el cual está basado en ATMega 328P. Tiene 14 entradas/salidas digitales, de las cuales 6 se pueden utilizar como salidas PWM (Modulación por ancho de pulsos) y otras 6 son entradas analógicas.Entre una de sus variadas características se destaca una biblioteca la cual sirve para poder controlar servomotores desde 0 y 180 ◦ . Los servos de rotación continua permiten varias velocidades de rotación de los ejes (Sánchez, 2012).
Conectores de la tarjeta de Arduino UNO.

1.	Terminal de referencia analógica (naranja)
2.	Tierra digital (verde claro)
3.	Terminales digitales 2-13 (verde)
4.	Terminales digitales 0-1/ E/S serie – TX/RX (verde oscuro) – Estos pines no se pueden utilizar como e/s digitales (digitalRead() y digitalWrite()).Botón de reinicio – S1 (azul oscuro)
5.	Programador serie en circuito «In-circuit Serial Programmer» o «ICSP» (azul celeste). Terminales de entrada analógica 0-5 (azul claro)
6.	Terminales de alimentación y tierra (alimentación: naranja, tierras: naranja claro)
7.	Entrada de alimentación externa (9-12VDC) – X1 (rosa)
8.	Selector de alimentación externa o por USB – SV1 (púrpura). En las versiones nuevas de Arduino la selección de alimentación es automática por lo que puede que no tengas este selector.
9.	USB (utilizado para subir programas a la placa y para comunicaciones serie entre la placa y el ordenador; puede utilizarse como alimentación de la placa) (amarillo)

Tinkercad
Tinkercad es una plataforma de diseño de circuitos en línea gratuito, diseño en 3D y como plataforma de impresión 3D desarrollada y administrada por AUTODESK. Se lo utiliza para diseñar y simular circuitos electrónicos.
Tinkercad también permite generar el código C / C ++, por bloques, texto o mixta. Ésta última muestra las dos opciones (bloques y texto) simultáneamente. Pero comúnmente se suele utilizar el código del mismo Arduino UNO. Para programar un Arduino, el lenguaje estándar es C++, aunque es posible programarlo en otros lenguajes. No es un C++ puro, sino que es una adaptación que proveniente de avr-libc que provee de una librería de C de alta calidad para usar con GCC en los microcontroladores AVR de Atmel y muchas funciones específicas para los MCU AVR de Atmel.

 LCD
El LCD(Liquid Crystal Dysplay) o pantalla de cristal líquido es un dispositivo empleado para la visualización de contenidos o información de una forma gráfica, mediante caracteres, símbolos o pequeños dibujos dependiendo del modelo. Está gobernado por un microcontrolador el cual dirige todo su funcionamiento.
En este caso vamos a emplear un LCD de 16x2, esto quiere decir que dispone de 2 filas de 16 caracteres cada una. Los píxeles de cada símbolo o carácter, varían en función de cada modelo.

La pantalla LCD tiene 16 pines de conexión, numerados del 1 al 16 de izquierda a derecha.



###5.	DIAGRAMAS




Esquemático del Arduino UNO

###6.	LISTA DE COMPONENTES
●	Computador
●	Plataforma Tinkercad
●	Internet


###7.	MAPA DE VARIABLES
7.1	Arduino UNO y LCD 16*2
 

###8.- EXPLICACIÓN DEL CÓDIGO FUENTE




###9.- DESCRIPCIÓN DE PRERREQUISITOS Y CONFIGURACIÓN
●	Se debe tener una cuenta en la plataforma de Tinkercad para poder utilizar sus servicios.

###10.	CONCLUSIONES
●	Las plataformas digitales se convierten en una gran herramienta las cuales nos ayudan a poder diseñar nuestros circuitos, en el caso de no poder conseguir alguno de ellos. Y como complemento se vuelve muy útil a la hora de guardar nuestros proyectos que por otro lado tendríamos que desarmar nuestro circuito para diseñar uno nuevo.
●	La Plataforma TinkerCad resulta ser una buena herramienta a la hora de poder hacer circuitos los cuales podemos codificar con Arduino sin tener que salir de la misma.

###11.	RECOMENDACIONES
●	Se recomienda tener por adelantado conocimientos sobre la programación en Arduino, ya que en varias ocasiones se necesita saber principalmente la sintaxis de las variables las cuales están predeterminadas para cada declaración. 
.



###12.	BIBLIOGRAFÍA
•	Troncoso, M., & Nicolás, D. (2018). Prototipo de seguimiento en tiempo real implementado en Arduino y microcontrolador ESP8266.
●	Sánchez, E. (2012). Diseño de un sistema de control domótico basado en la plataforma Arduino. Master's thesis. Escuela Técnica Superior de Ingeniería Informática. Universidad Politécnica de Valencia.
●	C. Vidal, C. Cabezas, J. Parra y L. López, (S.F.) “Experiencias prácticas con el uso del lenguaje de programación Scratch para desarrollar el pensamiento algorítmico de estudiantes en Chile " Formación Universitaria, vol. 8, págs. 23–32, 2015. [En línea]. Disponible: http://www.redalyc.org/articulo.oa?id=373544191001
●	 European-Schoolnet, (2015) Calculando nuestro futuro: programación informática y Codificación de prioridades, programas escolares e iniciativas en toda Europa. Bruselas, Bélgica.
●	Vidal-Silva, C., Lineros, M. I., Uribe, G. E., & Olmos, C. J. (2019). Electrónica para Todos con el Uso de Arduino: Experiencias Positivas en la Implementación de Soluciones Hardware-Software. Información tecnológica, 30(6), 377-386.

###13.	ANEXOS
###14. MANUAL DE USUARIO
Tinkercad
●	Crearnos una cuenta de usuario y acceder. Seleccionando la opción “Circuits” podremos empezar a crear nuestros circuitos clicando sobre “Create new Circuit”:
●	A Continuación se nos redirigirá a otra ventana la cual nos desplegará a nuestro lado derecho una serie de opciones “Basic” y “All”, según queramos componentes elementales o de uso más común como pulsadores, LEDs, resistencias fijas, potenciómetros, baterías, transistores, placas de prototipado etc. u opciones más avanzadas como circuitos integrados, osciloscopios, control remoto o tiras de LEDs.
●	Una vez montado el circuito con una placa controladora Arduino, podremos escribir el código. Para ello, habrá que clicar sobre el icono “Code” y se optará por la opción de programación por bloques, texto o mixta. Ésta última muestra las dos opciones (bloques y texto) simultáneamente.
●	Escribimos el programa para la placa controladora (en la imagen, un semáforo sencillo) y a continuación podemos simular el circuito eligiendo la opción “Start Simulation”


        
###15. HOJAS TÉCNICAS




