## Week 0 notes

#### Binary

- Computer's language: Binary (0's and 1's)
- 0's and 1's are known as bits
- In programming, count from 0
- Binary stored in transistors (switches)

##### Normal
```
100s place | 10s place | 1s place  
    1           2           3       = 123
```

##### Binary
```
4s place | 2s place | 1s place
    0          0          1         = 1
    0          1          0         = 2
    0          1          1         = 3
    1          0          0         = 4
    1          0          1         = 5
```
#### ASCII (American Standard Code for Information Interchange)

- **CHART:** [asciichart.com](https://www.asciichart.com)
- **BIT:** a 0 or 1
- 8 bits = **byte**
- Only 256 possible characters in ASCII
- We can represent characters by using 0's and 1's
- 'A' = 65 (01000001), **in context**
- 72 73 33 = 'HI!
- 01001000 01001001 00100001 = 'HI!'
- Each character is represented by 8 bits

#### Unicode

- A way of expressing more characters than ASCII
- Expresses many languages other than English
- Can be stored in 8, 16, 24, even 32 bits
- Accents, symbols, emojis
- Example: 😂
- 😂 Decimal Number: 128514
- 😂 Binary: 000000011111011000000010

#### RGB

- Different colours represented by numbers, **in context**
- Max value that you use is 255 (8^2)
```
RED | GREEN | BLUE
 72     73     33 
 255    255    255 = white
 255    0      0   = red
 0      255    0   = green
 0      0      255 = blue
``` 

#### Images
- Screens are made up of pixels, each of which is a separate colour
- **Resolution** is the number of pixels horizontally and vertically
- An image is just a grid of pixels
- A video is a sequence of rapidly changing images

#### File extensions

- Different agreements of the storage of 0's and 1's

#### Pseudocode

- Pseudocode: an algorithm written in standard language

###### Phonebook Example
```
1  Pick up phone book
2  Open to middle of phone book
3  Look at page
4  If person is on page
5    Call person
6  Else if person is earlier in the book
7    Open to middle of left half of book
8    Go back to line 3
9  Else if person is later in the book
10   Open to middle of right half of book
11   Go back to line 3
12 Else
13   Quit
```

### Concepts

#### Covered by Notes
- Bits
- Bytes
- ASCII
- Unicode
- Pseudocode
- Colours, Images, Video

#### Concepts introduced during Scratch section
- Variables
    - Stores data
    - Similar to math, e.g. *x*, *y*
- Extensions
    - Allow programmers to use functions that are not available to them with a default environment
- Loops
    - Allow programmers to complete task without repeating themselves
    - Also saves lines of code
    - Allows programmers the ability to easily change how many times something happens
- Conditions
    - Completes action if a certain condition is satisfied
    - Example: if the mouse is clicked, increase n by one
- 