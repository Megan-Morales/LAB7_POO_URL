# LAB7_POO_URL
Búsquedas y programación orientada a objetos

Problema No. 01
Crear una solución utilizando C++, Windows forms (o consola) y clases no manejadas, 
crear una solución para lo siguiente: 

Realice un programa que genere un arreglo de números aleatorios, la cantidad de 
números en el arreglo se le deberá solicitar al usuario. 

Una vez generada la cantidad de números, deben mostrarse al usuario ya sea utilizando 
un MessageBox o un label. 

Una vez generados los números, deben ingresarse en una tabla hash utilizando la clase 
de c++ Hashtable (es una clase manejada). Esta clase permite agregar elementos en el 
formato clave, elemento. Así que deberán calcular una función hash y utilizarla como 
llave, debe manejar las colisiones en caso se dieran. 

Una vez generados, el usuario puede escoger buscar uno de los números generados, y 
mostrar su posición. Debe poder buscarlos secuencialmente, utilizando el arreglo, de 
forma binaria, también utilizando el arreglo y utilizando hash. 

Para cada búsqueda debe mostrar cuánto tiempo ha tomado utilizando Stopwatch. 
Problema No. 02
Crear una clase abstracta para polígonos de colores que contenga funciones para 
obtener el Área y el Perímetro. Cada polígono debe tener un ID numérico correlativo 
(administrador por la clase Polígono) que identifique al objeto en cuestión (no puede ser 
modificado por el usuario).
Considerar los siguientes tipos de polígonos:
• Triángulo (Isósceles)
• Rectángulo
• Cuadrado (considerarlo como una especialización de Rectángulo).

Genere la interfaz gráfica que permita:
• Agregar distintos tipos de polígonos en una lista
o Solicitando los datos específicos según el tipo de polígono.
o No mostrar de forma inmediata los datos dentro de la lista
• Mostrar en pantalla la información de todos los polígonos en la lista
o ID
o Tipo polígono
o Área
o Perímetro
o Color (de preferencia todo el registro de dicho color)
• Inicializar la lista
