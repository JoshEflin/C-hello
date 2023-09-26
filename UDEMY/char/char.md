# Character type

char ch = 'A'
// note that chars are stored with single quotes
 is saved as a memory block with the ascii code 65

 so 
 ``` printf("%d" , ch); 
 ```
 would print out 65

 when we use "%c" the 65 is converted to bit map

 0110
 1001
 1111
 1001 
  in the above bitmap. the ones represent pixels  to fill in and the 0's represent background color. ( example bitmap for A)
