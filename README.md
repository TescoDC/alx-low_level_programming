# Alx-low-level-programming

__For this project, we will be treating c:__

* [C programming](https://intranet.alxswe.com/concepts/26)

## Resources
**Read or watch:**

* [Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first)](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw)
* [Dennis Ritchie](https://intranet.alxswe.com/rltoken/YWFrRob_-Yo-_NQikMLI-g)
* [“C” Programming Language: Brian Kernighan](https://intranet.alxswe.com/rltoken/W4oygfMgAp5Hyc7o6QuSYQ
* [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)
* [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/idYJyVfQRZ9e5aljiT5UKg)
* [Betty Coding Style](https://intranet.alxswe.com/rltoken/wJg_qB9ducisfVQNk62htg)
* [Hash-bang under the hood (Look at only after you finish consuming the other resources)](https://intranet.alxswe.com/rltoken/zwv5CHLybXN6KFmsjbu_tg)
* [Linus Torvalds on C vs. C++ (Look at only after you finish consuming the other resources)](https://intranet.alxswe.com/rltoken/JrokM8Pk6bd9wPqQvEfSAA)

**man or help:**

+ `gcc`
+ `printf (3)`
+ `puts`
+ `putchar`

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## More Info
## Betty linter
To run the Betty linter just with command betty <filename>:

* Go to the Betty repository
* Clone the repo to your local machine
* cd into the Betty directory
* Install the linter with sudo ./install.sh
* emacs or vi a new file called betty, and copy the script below:

```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
* Once saved, exit file and change permissions to apply to all users with chmod a+x betty
* Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!
