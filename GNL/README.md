*This activity has been created as part of the 42 curriculum by fanalleg.*


## Description
A project to code a program reading every line in a given text document. The program takes a file descriptor as a parameters, allowing the program to read from any files descriptor.

## Instructions
- You'll first have to clone the git repository
$ git clone git@github.com:fanalleg/GNL.git
- Once you moved into the project by using cd, you can compile your code using the get_next_line.h library. By using the `` -D BUFFER_SIZE=n `` flag while compiling, you will be able to define any buffer siize you want in order to test this code.

## Resources
- [This video](https://www.youtube.com/watch?v=U6hEX-rmGYM) and [this one](https://www.youtube.com/watch?v=xgDSXNOHTIA) helped me understand the possible algorithms trhat can be used to build this program (with temporary variables or with chained lists).
- I also watched [this video](https://www.youtube.com/watch?v=Odezvr0skO8) explaning specifically the ``Open`` and ``Read`` calliing systems on Linux.


## Algorithm
I've used a buffer method, where the program first read and stocked each words in a ``stash`` variable which lenght is defined by the buffer size. Then, by using the ``ft_join`` function, the program stacks each words until it meets an ``\n``. By then updating the stash, keeping previons line stocked and avoiding the program to start at the beginning of the text each time, the program returns the line extracted while updating the stash. 



