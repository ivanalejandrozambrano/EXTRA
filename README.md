
# Informe 

## Tutorial para programación arduino  para controlar un LCD  16x2 en Visuino

### 1.	PLANTEAMIENTO DEL PROBLEMA

Actualmente existen varias plataformas de tarjetas de desarrollo, y algunas de ellas son de hardware y software libre. No obstante, existen otras plataformas las cuales al mismo tiempo de ser de forma libre nos dan como servicio adicional el hecho de ser gratuitas, como lo es el programa VISUINO. En este documento se trabajará con Arduino Uno y LCD  16x2 por medio del programa VISUINO. 

### 2. OBJETIVOS

General:

●	Implementar un circuito con las tarjetas de desarrollo Arduino Uno y LCD  16x2 por medio del programa VISUINO. 
Específicos:


Especificos:

●	Identificar los componentes electrónicos que componen las tarjetas de desarrollo Arduino Uno y LCD  16x2.

●	Conocer las generalidades y funcionamiento las tarjetas de desarrollo Arduino Uno y LCD  16x2




### 3.	ESTADO DEL ARTE

### Tema: Diseño e implementación de un entorno de desarrollo integrado para programación visual de aplicaciones en la generación del Internet de las Cosas

Investigadores: Quiles Alemañ, José.

Año: 	2020

La presente tesis de maestría está directamente alineada con el proyecto bIoTope, financiado por la Unión Europea, que tiene como objetivo construir un ecosistema de innovación abierta de Internet de las cosas (IoT) que permita a las empresas crear fácilmente sistemas de IoT con una inversión mínima. Para contribuir a la consecución de este ambicioso objetivo, en esta tesis, se lleva a cabo una implementación de un entorno de desarrollo integrado (IDE) en una aplicación ampliamente utilizada para conectar objetos inteligentes y obtener información de ellos, conocida como Node-RED.

Para hacer esto posible, se realiza un estudio en profundidad de los diferentes conceptos y tecnologías necesarios en el conjunto de etapas de desarrollo: Definición, Creación de un entorno de desarrollo de Python basado en Skulpt e Implementación con Node-RED. Una vez que se completa la implementación, el nuevo entorno se utiliza y se prueba en diferentes escenarios, como la mitigación de la ola de calor en el Gran Lyon o un posible sistema de estacionamiento inteligente para la Copa Mundial de la FIFA de Qatar 2022, por lo que es posible analizar el resultados y sacar conclusiones positivas, porque a pesar de la existencia de limitaciones, se logra un nuevo entorno que facilita a los usuarios la creación de sistemas IoT, así como el proyecto bIoTope sienta sus bases.


Lugar: 	Universitat Politècnica de València.España.



### 4.	MARCO TEÓRICO


#### Arduino UNO

ARDUINO UNO es un microcontrolador el cual está basado en ATMega 328P. Tiene 14 entradas/salidas digitales, de las cuales 6 se pueden utilizar como salidas PWM (Modulación por ancho de pulsos) y otras 6 son entradas analógicas.Entre una de sus variadas características se destaca una biblioteca la cual sirve para poder controlar servomotores desde 0 y 180 ◦ . Los servos de rotación continua permiten varias velocidades de rotación de los ejes (Sánchez, 2012).
Conectores de la tarjeta de Arduino UNO.

![](img/fg1.png)

1.	Terminal de referencia analógica (naranja)
2.	Tierra digital (verde claro)
3.	Terminales digitales 2-13 (verde)
4.	Terminales digitales 0-1/ E/S serie – TX/RX (verde oscuro) – Estos pines no se pueden utilizar como e/s digitales (digitalRead() y digitalWrite()).Botón de reinicio – S1 (azul oscuro)
5.	Programador serie en circuito «In-circuit Serial Programmer» o «ICSP» (azul celeste). Terminales de entrada analógica 0-5 (azul claro)
6.	Terminales de alimentación y tierra (alimentación: naranja, tierras: naranja claro)
7.	Entrada de alimentación externa (9-12VDC) – X1 (rosa)
8.	Selector de alimentación externa o por USB – SV1 (púrpura). En las versiones nuevas de Arduino la selección de alimentación es automática por lo que puede que no tengas este selector.
9.	USB (utilizado para subir programas a la placa y para comunicaciones serie entre la placa y el ordenador; puede utilizarse como alimentación de la placa) (amarillo)


#### Lenguaje Gráfico de programación

El lenguaje gráfico es aquel tipo de comunicación que usa gráficos, imágenes y expresiones matemáticas para expresar y transmitir pensamientos o ideas.

El dibujo, específicamente, las pinturas rupestres del Paleolítico Superior, destaca como uno los primeros intentos del hombre para trascender por medio de este tipo de lenguaje. 

Tras éstas manifestaciones prehistóricas y en la medida que fue evolucionando, el hombre buscó formas más avanzadas para comunicarse. En esta búsqueda, pudo perfeccionar tanto el idioma hablado como el escrito. Sin embargo, siempre recurrió al lenguaje gráfico para expresar las ideas más complejas.

Y finalmente, con el avance de la computación y la cibernética, este tipo de lenguaje se ha transformado en la interfase para aplicaciones de videojuegos y otras especialidades informáticas.

#### Visuino

Visuino es un ambiente de programación basado en la tecnología Open Wire, en donde todo es conectado por una serie de diagramas y pines, así consigues tener un diseño de tu circuito electrónico con su correspondiente código para grabarlo en Arduino.

En otras palabras com visuino podemos hacer  un circuito electrónico con los componentes disponibles como lo son los displays, leds, botones, etc. eEntonces Visuino te crea el código para que el circuito te funcione, con tu placa de Arduino.

 ![](img/0000.jpg)

#### LCD
El LCD(Liquid Crystal Dysplay) o pantalla de cristal líquido es un dispositivo empleado para la visualización de contenidos o información de una forma gráfica, mediante caracteres, símbolos o pequeños dibujos dependiendo del modelo. Está gobernado por un microcontrolador el cual dirige todo su funcionamiento.
En este caso vamos a emplear un LCD de 16x2, esto quiere decir que dispone de 2 filas de 16 caracteres cada una. Los píxeles de cada símbolo o carácter, varían en función de cada modelo.

La pantalla LCD tiene 16 pines de conexión, numerados del 1 al 16 de izquierda a derecha.
![](img/Capture1.PNG)



### 5.	DIAGRAMAS

![](img/111.PNG)


![](img/222.PNG)



### 6.	LISTA DE COMPONENTES


●	Computador

●	Plataforma Visuino

●	Internet

![](img/primera.PNG)

![](img/segunda.PNG)

### 7.	MAPA DE VARIABLES

ComponentVariables

public:
  uint32_t Value1 : 5;
  uint32_t Value2 : 2;
 

### 8.- EXPLICACIÓN DEL CÓDIGO FUENTE
<pre>

 <font color="#434f54">&#47;&#47;----------------------------------------------</font>
 <font color="#434f54">&#47;&#47;</font>
 <font color="#434f54">&#47;&#47; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Sketch Generated by Visuino</font>
 <font color="#434f54">&#47;&#47; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</font><u><font color="#434f54">www.visuino.com</font></u><font color="#434f54"></font>
 <font color="#434f54">&#47;&#47; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Version 7.8.3.60</font>
 <font color="#434f54">&#47;&#47;</font>
 <font color="#434f54">&#47;&#47;------------------ Source --------------------</font>
 <font color="#434f54">&#47;&#47;</font>
 <font color="#434f54">&#47;&#47; LCDARDUINO.visuino</font>
 <font color="#434f54">&#47;&#47;</font>
 <font color="#434f54">&#47;&#47;----------------------------------------------</font>

<font color="#5e6d03">#define</font> <font color="#000000">VISUINO_ARDUINO_UNO</font>

<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">OpenWire</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">Mitov</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">Mitov_LiquidCrystalDisplay</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#434f54">&#47;&#47; Shared Component Member Variables</font>

<font color="#5e6d03">namespace</font> <font color="#000000">ComponentVariables</font>
<font color="#000000">{</font>
<font color="#00979c">class</font>
<font color="#000000">{</font>
<font color="#00979c">public</font><font color="#434f54">:</font>
 &nbsp;<font color="#00979c">uint32_t</font> <font color="#000000">Value1</font> <font color="#434f54">:</font> <font color="#000000">5</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">uint32_t</font> <font color="#000000">Value2</font> <font color="#434f54">:</font> <font color="#000000">2</font><font color="#000000">;</font>

<font color="#000000">}</font> <font color="#000000">BitFields</font><font color="#000000">;</font>

<font color="#00979c">class</font> <font color="#000000">Variable1</font>
<font color="#000000">{</font>
<font color="#00979c">public</font><font color="#434f54">:</font>
 &nbsp;<font color="#00979c">inline</font> <font color="#00979c">static</font> <font color="#00979c">uint32_t</font> <font color="#000000">GetValue</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font> <font color="#5e6d03">return</font> <font color="#000000">BitFields</font><font color="#434f54">.</font><font color="#000000">Value1</font><font color="#000000">;</font> <font color="#000000">}</font>
 &nbsp;<font color="#00979c">inline</font> <font color="#00979c">static</font> <font color="#00979c">void</font> <font color="#000000">SetValue</font><font color="#000000">(</font> <font color="#00979c">uint32_t</font> <font color="#000000">AValue</font> <font color="#000000">)</font> <font color="#000000">{</font> <font color="#000000">BitFields</font><font color="#434f54">.</font><font color="#000000">Value1</font> <font color="#434f54">=</font> <font color="#000000">AValue</font><font color="#000000">;</font> <font color="#000000">}</font>

<font color="#000000">}</font><font color="#000000">;</font>
<font color="#00979c">class</font> <font color="#000000">Variable2</font>
<font color="#000000">{</font>
<font color="#00979c">public</font><font color="#434f54">:</font>
 &nbsp;<font color="#00979c">inline</font> <font color="#00979c">static</font> <font color="#00979c">uint32_t</font> <font color="#000000">GetValue</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font> <font color="#5e6d03">return</font> <font color="#000000">BitFields</font><font color="#434f54">.</font><font color="#000000">Value2</font><font color="#000000">;</font> <font color="#000000">}</font>
 &nbsp;<font color="#00979c">inline</font> <font color="#00979c">static</font> <font color="#00979c">void</font> <font color="#000000">SetValue</font><font color="#000000">(</font> <font color="#00979c">uint32_t</font> <font color="#000000">AValue</font> <font color="#000000">)</font> <font color="#000000">{</font> <font color="#000000">BitFields</font><font color="#434f54">.</font><font color="#000000">Value2</font> <font color="#434f54">=</font> <font color="#000000">AValue</font><font color="#000000">;</font> <font color="#000000">}</font>

<font color="#000000">}</font><font color="#000000">;</font>
<font color="#000000">}</font> <font color="#434f54">&#47;&#47; ComponentVariables</font>

<font color="#434f54">&#47;&#47; Arduino Constant Declarations</font>

<font color="#5e6d03">namespace</font> <font color="#000000">VisuinoConstants</font>
<font color="#000000">{</font>
<font color="#00979c">class</font> <font color="#000000">TextValue0</font>
<font color="#000000">{</font>
<font color="#00979c">public</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">inline</font> <font color="#00979c">static</font> <font color="#000000">constexpr</font> <font color="#00979c">const</font> <font color="#00979c">char</font> <font color="#434f54">*</font><font color="#000000">GetValue</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font> <font color="#5e6d03">return</font> <font color="#005c5f">&#34;Hola Mundo&#34;</font><font color="#000000">;</font> <font color="#000000">}</font>
<font color="#000000">}</font><font color="#000000">;</font>

<font color="#000000">}</font> <font color="#434f54">&#47;&#47; VisuinoConstants</font>

<font color="#434f54">&#47;&#47; Declarations</font>

<font color="#5e6d03">namespace</font> <font color="#000000">Declarations</font>
<font color="#000000">{</font>
<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">LiquidCrystalDisplay</font><font color="#434f54">&lt;</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">LiquidCrystalDisplayParallel</font><font color="#434f54">&lt;</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">LiquidCrystalDisplayParallel4DataPins</font><font color="#434f54">&lt;</font><font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">4</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">5</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">6</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">7</font> <font color="#434f54">&gt;&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_PINS</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">8</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_PINS_0</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_NoImplementation</font><font color="#434f54">&lt;</font><font color="#000000">1</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_PINS_1</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">9</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_PINS_2</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">21</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; AutoScroll</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">24</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Blink</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">20</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">true</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Enabled</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">25</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Hight10Pixels</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">22</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; RightToLeft</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">23</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font> <font color="#434f54">&#47;&#47; ShowCursor</font>
 &nbsp;<font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 0_TYPE</font>
 &nbsp;<font color="#000000">16</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Columns</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">TypedVariable</font><font color="#434f54">&lt;</font><font color="#000000">38</font><font color="#434f54">,</font> <font color="#00979c">uint32_t</font><font color="#434f54">,</font> <font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ComponentVariables</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">Variable2</font><font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; FCursorLine</font>
 &nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">TypedVariable</font><font color="#434f54">&lt;</font><font color="#000000">32</font><font color="#434f54">,</font> <font color="#00979c">uint32_t</font><font color="#434f54">,</font> <font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ComponentVariables</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">Variable1</font><font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; FCursorPos</font>
 &nbsp;<font color="#000000">2</font> <font color="#434f54">&#47;&#47; Rows</font>
 &nbsp;&nbsp;<font color="#434f54">&gt;</font> <font color="#000000">_o_LiquidCrystalDisplay1</font><font color="#000000">;</font>

<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">LiquidCrystalElementTextField</font><font color="#434f54">&lt;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">LiquidCrystalDisplay</font><font color="#434f54">&lt;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">LiquidCrystalDisplayParallel</font><font color="#434f54">&lt;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">LiquidCrystalDisplayParallel4DataPins</font><font color="#434f54">&lt;</font><font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">4</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">5</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">6</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">7</font> <font color="#434f54">&gt;&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_PINS</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">8</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_PINS_0</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_NoImplementation</font><font color="#434f54">&lt;</font><font color="#000000">1</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_PINS_1</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">DigitalPin_DirectBoardPinImplementation</font><font color="#434f54">&lt;</font><font color="#000000">9</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_PINS_2</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">21</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; AutoScroll</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">24</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Blink</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">20</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">true</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Enabled</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">25</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Hight10Pixels</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">22</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; RightToLeft</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">23</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">false</font> <font color="#434f54">&gt;</font> <font color="#434f54">&#47;&#47; ShowCursor</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 0_TYPE</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">16</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Columns</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">TypedVariable</font><font color="#434f54">&lt;</font><font color="#000000">38</font><font color="#434f54">,</font> <font color="#00979c">uint32_t</font><font color="#434f54">,</font> <font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ComponentVariables</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">Variable2</font><font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; FCursorLine</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">TypedVariable</font><font color="#434f54">&lt;</font><font color="#000000">32</font><font color="#434f54">,</font> <font color="#00979c">uint32_t</font><font color="#434f54">,</font> <font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ComponentVariables</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">Variable1</font><font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; FCursorPos</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">2</font> <font color="#434f54">&#47;&#47; Rows</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 0_TYPE_OWNER</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Declarations</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">_o_LiquidCrystalDisplay1</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; 1_NAME_OWNER</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">5</font><font color="#434f54">,</font> <font color="#00979c">bool</font><font color="#434f54">,</font> <font color="#00979c">true</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; AllignLeft</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">7</font><font color="#434f54">,</font> <font color="#00979c">uint32_t</font><font color="#434f54">,</font> <font color="#000000">0</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Column</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">6</font><font color="#434f54">,</font> <font color="#00979c">char</font><font color="#434f54">,</font> <font color="#00979c">&#39; &#39;</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; FillCharacter</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantPropertyString</font><font color="#434f54">&lt;</font><font color="#000000">3</font><font color="#434f54">,</font> <font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">VisuinoConstants</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">TextValue0</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; InitialValue</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">8</font><font color="#434f54">,</font> <font color="#00979c">uint32_t</font><font color="#434f54">,</font> <font color="#000000">0</font> <font color="#434f54">&gt;</font><font color="#434f54">,</font> <font color="#434f54">&#47;&#47; Row</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Mitov</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">ConstantProperty</font><font color="#434f54">&lt;</font><font color="#000000">4</font><font color="#434f54">,</font> <font color="#00979c">uint32_t</font><font color="#434f54">,</font> <font color="#000000">16</font> <font color="#434f54">&gt;</font> <font color="#434f54">&#47;&#47; Width</font>
 &nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&gt;</font> <font color="#000000">TArduinoLiquidCrystalElementTextField1</font><font color="#000000">;</font>

<font color="#000000">}</font> <font color="#434f54">&#47;&#47; Declarations</font>

<font color="#5e6d03">namespace</font> <font color="#000000">ComponentsHardware</font>
<font color="#000000">{</font>
<font color="#00979c">void</font> <font color="#000000">SystemUpdateHardware</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#000000">}</font>
<font color="#000000">}</font> <font color="#434f54">&#47;&#47; ComponentsHardware</font>

<font color="#434f54">&#47;&#47;The setup function is called once at startup of the sketch</font>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">Declarations</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">_o_LiquidCrystalDisplay1</font><font color="#434f54">.</font><font color="#000000">SystemInit</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">Declarations</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">TArduinoLiquidCrystalElementTextField1</font><font color="#434f54">.</font><font color="#000000">SystemStart</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;<font color="#000000">OpenWire</font><font color="#434f54">:</font><font color="#434f54">:</font><font color="#000000">SystemStarted</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#434f54">&#47;&#47; The loop function is called in an endless loop</font>
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
<font color="#000000">}</font>

</pre>




### 9.- DESCRIPCIÓN DE PRERREQUISITOS Y CONFIGURACIÓN

VISUINO

Para poder visualeizar el texto del codigo necesitaremso descargar adicionalmente la aplicación ARDUINO IDE, el cual se vinculara automaticamente a la aplicacion visuino.



### 10. Aportaciones




![](img/tinker.PNG)



### 11.	RECOMENDACIONES

Se recomienda tener tener espacio suficiente para poder instalar el programa VISUINO, también en interactuar regularmente con el programa para poder conocer los diferentes componentes que nos brinda.


### 12.	BIBLIOGRAFÍA



●	Sánchez, E. (2012). Diseño de un sistema de control domótico basado en la plataforma Arduino. Master's thesis. Escuela Técnica Superior de Ingeniería Informática. Universidad Politécnica de Valencia.

●	C. Vidal, C. Cabezas, J. Parra y L. López, (S.F.) “Experiencias prácticas con el uso del lenguaje de programación Scratch para desarrollar el pensamiento algorítmico de estudiantes en Chile " Formación Universitaria, vol. 8, págs. 23–32, 2015. [En línea]. Disponible: http://www.redalyc.org/articulo.oa?id=373544191001

●	 European-Schoolnet, (2015) Calculando nuestro futuro: programación informática y Codificación de prioridades, programas escolares e iniciativas en toda Europa. Bruselas, Bélgica.

●	Vidal-Silva, C., Lineros, M. I., Uribe, G. E., & Olmos, C. J. (2019). Electrónica para Todos con el Uso de Arduino: Experiencias Positivas en la Implementación de Soluciones Hardware-Software. Información tecnológica, 30(6), 377-386.




### 13. MANUAL DE USUARIO



       

### 15. HOJAS TÉCNICAS
![](img/arduino-Pinout.jpg)


![](img/16x2-Character-LCD-Display-Pinout.jpg)

