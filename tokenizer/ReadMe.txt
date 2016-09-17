Juan Razo 
Tokenizer lab

For this lab I started by getting a refresh in C from the book Sams Teach Yourself C in 24 Hours. From the 
book I got the idea to use fgets() to get the user input. Code inspired for the user input comes from the book
in chapter 16 under a program called ptrsort. I then moved to begin thinking about how to break down the
string into tokens, below is what I wrote to help me write mytoc function.

“   Hello   World   “
“Hello World”
“ HelloWorld”

To scan the input string to find how many tokens are there.

if(character != delimiter && character +1 == delimiter || character +1 == ‘\0’)
	found a delimiter after a character or the end of a string
	need to increase the size of the tokens.


Begin counting from 0 to save the location of the beginning and ending of
a token, must be outside the while loop.

begin counting from 0 to allocate the size of a token, must be outside the 
while loop and set to 0 when the end of a token has been found.

if(character != delimiter && character +1 == delimiter || character +1 == ‘\0’)
	found a delimiter after a character or the end of a string
	save the ending of the token and set the firstChar to 0

if(firstChar == 0 && character != delimiter)
	found the beginning of a token
	save the beginning of the token

Once I had this information then writing the function was a breeze and it worked perfectly. The algorithm
starts by going through the string until the end of file. As the string is being scanned then check if the
current char not a delimiter and check the next char to see if its a delimiter or the end of file. This 
signifies that I have found the end of a token, therefore add to the vector counter. Of course after getting
the amount of tokens found then allocate space for the vector. On the second scan I look for the size
of each token, allocate space, and copy the token. This is done using a flag for keeping track of a token
found, the beginning char, and a counter for the location of the character in review. While scanning the
string from the user I check to see if I found the first character of a token and set that as the beginingChar
based on the location from the counter. Now that I have found the first character the last one will be if
the character in review is not a delimiter and the next character to be reviewed is a delimiter or end of
file. I can now set the size of the token based on the location of the char in review minus the beginningChar.
With the size I can allocate space for the token and begin to copy. Once this is done then I can reset the flags
and continue to the next token. There is a counter token, to keep track of which token needs to be allocated.
I don’t really check if the token is out of bounds because I am expecting to find the end of a string. 

One challenge was that fgets() adds there return key to the string. To fix this issue I created a stringlength() 
function to get the function of the user input and add an end of string where the ‘\n’ is located. I then changed 
the code and check on mytoc() because of the instructions that said not to modify the user string. Another 
challenge I had was using free. This was because I was adding null outside of the bounds of the vector. I 
created quite a few helper functions that I thought might be useful later on and used the string copy from
Dr. Freudenthal. I also assisted a few colleagues, Pedro Barragan, Eric Camacho, and Mario Landa.
