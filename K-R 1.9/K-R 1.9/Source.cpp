﻿#include <iostream>

using namespace std;

int main() {
	int character;                                 
	                                      
	while ((character = getchar()) != EOF) {      // 1.   
		putchar(character);                       // 2.  

		if (character == ' ') {                   // 3.  
			while ((character = getchar()) == ' ')// 4.
				;                                 // 5.
			putchar (character);                  // 6.
		}
	}
}/*мы вводим символ, или поток символов. 
 1. Наша программа смотрит, чтобы наш введенный символ не был равен концу файла.
 2. Наша программа выводит на экран этот символ.
 3. Если этот символ пробел, 
 4. то пока следующие символы равны пробелы равны пробелу - 
 5. ничего не происходит(тело пусто).
 6. Выводится следующий символ, который не равен пробелу; то есть символ идущий после потока пробелов, которые были проигнорированы.
 */

 // c = getchar()  it just character reading of character stream reading 
// putchar(c)  it output of the symbol just reading

/*мы вводим поток символов
программа берет один символ и разбирает его
он не должен равняться концу файла
если он не равен, то программа выводит его на экран
далее мы смотрит, если этот символ пробел, то при 
последующем потоке пробелов ничего не происходит: они не выводятся.
но как только мы встречаем символ не равный пробелу, то мы выходим из 
цикла и выводим этот символ на экран. а после этого мы опять считываем следующий символ и 
выводим его на экран и так по кругу пока не дойдем до конца файла*/