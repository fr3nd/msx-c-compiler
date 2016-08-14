# MSX-C Compiler

This is an effort to speed up the compilation of any MSX-C program using ASCII MSX-C running on OpenMSX.

## History

While following Javi Lavandeira's [Relearning MSX](http://www.lavandeira.net/relearning-msx/) great articles about programming on the MSX, I realised how slow and cumbersome was to program on our favourite 8-bit machine.

For example, compiling a simple (6 lines long) "hello world" program takes more than 1 minute to generate the .com file.

I'm also more confortable writting code on vim than on any of the current MSX text editors.

I wondered if there was a way to code on my current Linux workstation and compile without having to copy my code to the MSX and manually write the commands, so I started investigating.

## Requirements

* Linux (Tested on Ubuntu 16.04)
	* It could probably work on Mac OS X, but I haven't tested it. Not sure about making it work on Windows.
* GNU Make
* OpenMSX (Tested on 0.12.0)

## Instructions

Just run ```make```. This will compile the ```src/hello.c``` file in about 2-3 seconds!

## How does it work?

Make will actually launch OpenMSX emulating a MSX Turbo-R with 4MB of RAM with a specific configuration to make it faster:
* Sets speed to 9999 to increase the CPU cycles of the emulated MSX.
* Sets fullspeedwhenloading to on to avoid emulating real MSX floppy drive speeds.
* Sets renderer to none to avoid any overhead having to render the MSX screen.

Also, and because the MSX screen won't be rendered, we're capturing the text output and displaying it on the Linux terminal so it's possible to see any possible errors while compiling.

When the compilation process is finished, OpenMSX is closed and the generated files will be on the ```src/``` directory.