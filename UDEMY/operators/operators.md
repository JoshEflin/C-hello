# Operators:
## Uninary operators :
" + a "
" - a"
" ! a " 
## Binary operators : 

" a + b "
" a - b " 
" a * b "
## Ternary Operators :
<condition> ? <expression1> : <expression2>

int a = 10;
int b = 20;
int c;

c = a > b ? a : b;

## Arithmetic operators : 
 +  addition
 - subtraction
 / division
 * multiplication
 % modulus ( remainder )

## Relational operators :
== ( equal to )
!= ( not equal to ) 
> (greater than ) 
< (less than)
>= (greater than or equal to) 
<= less than or equal to )

## Logical operators :
 && ( logical and )
 || ( logical or )
 !  ( logical not )

 The && operator doesnt evaluate the second expression if the first evaluates to false in the below example

 int a = 0, b = 0 , c;
 c = (a++ > 0) && (b ++ > 0) ;

 The values of a, b and c, are as follows:
  a increments to 1 AFTER its value is checked against  0 ( as opposed to if the ++ came before a ( ++a)
  therefore because 0 > 0 evalulates to false  b remains 0 and c is assigned 0 since the entire expression evaluates to false and 0 is the int equivalent of false

## Bitwise operators : 
 & ( bitwise and )
 | ( or )
 ^ ( xor )
 ~ ( complement )

``` int a = 5, b = 6, c, d, e , f;
1) c = a & b ;
2) d = a | b ;
3) e =a ^ b ;
4 )f = ~a ;

1) 101   if both bits are 1 then the result is 1, otherwise 0
   110    result is 4
   ---
   100

2) 101  if any is one , result is 1 otherwise 0
   110  result is 7
   ---
   111

3) 101 XOR If bits are opposite, result is 1, if they are equal, result is 0
   110 result is 3
   ---
   011  Value in A 
4) 101  0 | 000000000000101
   ~              ~
   ---  1 |111 1111 1111 1010
   010    for more information look into 2's complement in  mathematics
        
```
## Shift operators :
 # Left Shift ( << ) :
 Shifts given n bits to the left. Left most n bits will be dropped

 ``` int a = 20;
 0000 0000 0001 0100
    int b = ( a << 4 )
    //becomes
    0000 0001 0100 0000
    b's value is 320 ```

# Right Shift ( >> ) :
 operation of this operator is comppiler dependent, it wil shift n bits to the right. newly formed leftmost bits become 0 in some compilers and are filled with previous sign bit in others(which is standard)

# Assignment operators ( = )
 This operator returns the value on the right to the variable on the left.

# Arithmetic operators : 
 += , -+ , /= , *= 

 int a = 10 ;
 a + = 2; // adds 2 to the current value of a
 a * = 2; // multiplies current value of a by 2; 
 a * = 2 + 2;  the + operator has higher priority so 2 + 2 is evaluated first, then multiplied by 10 so a becomes 40.

