TOYOSHIKI Tiny BASIC for LittleBits

これは、TOYOSHIKI Tiny BASIC for Arduinoをベースに、littleBis Arduino Coding Kit 用に命令を追加したものです。


追加変更した命令<br>
1.デジタル入力：DIN<br>
2.デジタル出力：DOUT<br>
3.アナログ入力：AIN<br>
4.アナログ出力：AOUT<br>
5.時間待ち：WAIT<br>
6.PRINT命令のエスケープシーケンス対応<br>

example1<br>
10 PRINT AIN(0)<br>
20 PRINT AIN(1)<br>
30 AOUT 0,100<br>
40 AOUT 1,200<br>
50 PRINT DIN(0)<br>
60 DOUT 0,1<br>
<br>
example2<br>
10 A=AIN(0)<br>
20 AOUT 0,A/4<br>
30 B=AIN(1)<br>
40 AOUT 1,B/4<br>
50 WAIT 100<br>
60 GOTO 10<br>


The code tested in littleBis Arduino Coding Kit.<br>
Use UART terminal, or temporarily use Arduino IDE serial monitor.

Operation example

&gt; list<br>
10 FOR I=2 TO -2 STEP -1; GOSUB 100; NEXT I<br>
20 STOP<br>
100 REM Subroutine<br>
110 PRINT ABS(I); RETURN

OK<br>
&gt;run<br>
2<br>
1<br>
0<br>
1<br>
2

OK<br>
&gt;

The grammar is the same as<br>
PALO ALTO TinyBASIC by Li-Chen Wang<br>
Except 3 point to show below.

(1)The contracted form of the description is invalid.

(2)Force abort key<br>
PALO ALTO TinyBASIC -> [Ctrl]+[C]<br>
TOYOSHIKI TinyBASIC -> [ESC]<br>
NOTE: Probably, there is no input means in serial monitor.

(3)Other some beyond my expectations.

(C)2012 Tetsuya Suzuki<br>
GNU General Public License

