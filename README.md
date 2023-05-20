# Write a C Compiler!

This is a set of C test programs to help you write your own compiler. They were originally written to accompany [this tutorial](https://norasandler.com/2017/11/29/Write-a-Compiler.html), but I (Alec Leng) have forked them to implement a C compiler with slightly different stages than the original tutorial (see my repository [here](https://github.com/AMLeng/IncrementalC)). 

Right now, I have implemented up through stage 8.

## Stage Differences
* Stages 1 through 3 are the same
* I insert an additional stage 4, implementing most (real) built in types
* My stage 5 is the same as Nora Sandler's (implementing local variables), with added tests for conversion to \Bool
* My stage 6 is the same as Nora Sandler's stages 6 and 7 combined, with modified tests to avoid some binary operators I hadn't implemented yet
* My stage 7 is Nora Sandler's stage 4, with a bunch of additional binary operators added
* My stage 8 is Nora Sandler's stage 8 (loops), in addition to gotos, labels, and switch statements

## Usage

### test all
```
./test_compiler.sh /path/to/your/compiler
```

### test specific stages
To test stage 1 and stage 3,
```
./test_compiler.sh /path/to/your/compiler 1 3
```
To test from stage 1 to stage 6,
```
./test_compiler.sh /path/to/your/compiler `seq 1 6`
```

In order to use this script, your compiler needs to follow this spec:

1. It can be invoked from the command line, taking only a C source file as an argument, e.g.: `./YOUR_COMPILER /path/to/program.c`

2. When passed `program.c`, it generates executable `program` in the same directory.

3. It doesn’t generate assembly or an executable if parsing fails (this is what the test script checks for invalid test programs).

The script doesn’t check whether your compiler outputs sensible error messages, but you can use the invalid test programs to test that manually.

