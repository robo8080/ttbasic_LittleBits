TOYOSHIKI Tiny BASIC for LittleBits

����́ATOYOSHIKI Tiny BASIC for Arduino���x�[�X�ɁAlittleBis Arduino Coding Kit �p�ɖ��߂�ǉ��������̂ł��B


�ǉ��ύX��������<br>
1.�f�W�^�����́FDIN<br>
2.�f�W�^���o�́FDOUT<br>
3.�A�i���O���́FAIN<br>
4.�A�i���O�o�́FAOUT<br>
5.���ԑ҂��FWAIT<br>
6.PRINT���߂̃G�X�P�[�v�V�[�P���X�Ή�<br>

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

