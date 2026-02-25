# Base-0
![Language](https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Platform](https://img.shields.io/badge/platform-WSL%20%2F%20Linux-orange?style=for-the-badge&logo=linux&logoColor=white)
![License](https://img.shields.io/github/license/zlxdev/The-Road-of-C?style=for-the-badge)

Welcome to a personal archive for mastering the C programming language. This repository documents one's journey from syntax understanding of logic, down to systems engineering and hardware interaction.

> **Current Status:** Intermediate topics such as memory is in the works.

# About this repository:

 This repository was primarily made to keep track of what i've done via version history and remote storage. In that way, I can look at my progress throughout my journey as well as pull this repository if I ever do a fresh install of my OS. So just think of this as a dump repository that will be back-up in a base-use-case scenario.

 However, I didn't make it solely for my convience, I also made this to ***share my knowledge towards people who are reading this repository as of this moment***. As well as to let peope be engaged with one another as a team via this repository by forking and branching. This way, people can have a better interaction and practice as a team, if they ever plan on being one.

 I hope this repository would be in help of any-way, as I will update this repository even if I switch languages to something like `C++`, `Java`, `Python`, and etc. This repository should mark as my first journey to being an engineer, starting from middle-end of low level languages to high languages like `Python` or `C++` for machine learning and infrastructure intelligence.

## Core Principle: "Learn First, AI Later"
This repository is built with a specific mindset: **Hand-coded mastery.**
* **The Code:** Written primarily by hand to ensure deep understanding of syntax and logic.
* **AI Usage:** AI is treated as a *Tutor*. Used only when you are completely stuck on a concept, acting as a teacher rather than a the coder itself. The principle is to learn how the concept is done by typing it manually and deliberately struggling on the problem, as that is where the learning happens.
* **WSL:** Wsl is highly recommended, since this code heavily uses WSL terminal for compiling, testing, debugging, and running codes or even using git. I would say it's a must if you wanna avoid installing alot of stuff in VSCode Windows.

## Repository Structure

Here is the architectural structure of the repository:

```text
.
├── bin/          # Compiled executable outputs and temporary object files.
├── docs/         # Manuals, lab notes, diagrams and other documentations.    
├── include/      # Headers files ('.h') establishing public interfaces and contracts  
├── src/          # Main source code.
    ├── core/     # Fundamental C syntax, data-types, and control flow logic.
    ├── labs/     # Experimental drills and isolated logic tests
    ├── memory/   # Advanced memory management, pointer arithmetic, and segmentation.
    ├── projects/ # Mini-projects for user and owner builds.
    ├── system/   # Integrated, multi-file system builds.
    └── utils/    # Reusable utility logic and library tools.    
└── tests/        # Logic assignments and logic challenges.  
```


### Recommended Workflow

> Read the concepts first in `src/core/`, and try practicing it in the `test/` section in order to solidify understanding. You can also build mini-projects in section.

## Tech Stack
* **Language:** C (C99/C11).
* **Build System:** Makefile.
* **Environment:** WSL / Linux.
* **IDE:** VSCode.


## Build System Integration
<details>
<summary><b>Click here for a step-by-step guide on how to run using Makefile</b></summary>

This repository utilizes a dynamic **Makefile** for targeted compilation of isolated `.c` files. The compiler output is automatically routed to the `bin/` directory: 

### Compilation and Execution

To compile and immediately execute a specific source file, pass the file path to the `FILE` variable:

```bash
make run FILE=<directory>/<subdirectory>/<filename>.c
```
Example: 
```bash
make run FILE=src/labs/lab_mem_addresses.c
```
This approach explicitly defines the variable structure while providing a frictionless test command.

### Compilation Only

To compile a source without executing the result of binary, well use `build` rather than `run`:

```bash
make build FILE=src/core/02_loops/core_loop_for.c
```

### System Maintenance

To remove clutter we can execute these following cmds to clear all compiled binary in `bin/` directory:

```bash
make clean
```
</details>

## Goals
* **Solidify understanding of C syntax.**
* **Understanding how C interacts with memory.**
* **Helps you understand how dangerous unoptimized codes are.**

### Who is this intended for??

> Students interested in learning C who have stumbled across this repository, or anyone interested in viewing the historical learning progress and evolution of Cassian as a developer.

### How is it different from other tutorials of C?

> Unlike static tutorials, this is an interactive journey secured by version control. I invite contributors to suggest better coding styles, optimizations, or architectural fixes. This repository prioritizes collaborative work and team engagement.

---

*Created & Maintained by Cassian.*