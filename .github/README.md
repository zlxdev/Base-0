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
├── bin/            # Compiled executable outputs and temporary object files.
├── docs/           # Manuals, lab notes, diagrams and other documentations.    
├── include/        # Headers files ('.h') establishing public interfaces and contracts  
├── src/            # Main source code.
    ├── core/       # Fundamental C syntax, data-types, and control flow logic.
    ├── exercises/  # Practice, Quizzes, and Drills to solidify your understanding
    ├── labs/       # Experimental drills and isolated logic tests
    └── memory/     # Advanced memory management, pointer arithmetic, and segmentation..    
└── tests/          # Logic assignments and logic challenges.  
```


### Recommended Workflow

> Read the concepts first in `src/core/`, and try practicing it by answering the questions in `exercises/` section in order to solidify understanding.

## Required Tech Stack
* **Language:** C (C99/C11).
* **Build System:** Makefile.
* **Environment:** WSL / Linux.
* **IDE:** VSCode.

## Step-by-step on installing the coding environment
<details>
<summary><b>How to install WSL, VSCode, and essentials.</b></summary>

Since you are curious and wanted to know how to install these environments, we should first start with `WSL -> VSCode -> Essentials`.

### Step 1: Install WSL (Windows Subsystem for Linux)
To install WSL properly, you are required to have atleast a version 2004 of Windows or higher, or Windows 11.

- First step, **Open PowerShell or Windows Command Prompt as an administrator**. You can either do this by searching the terminal or cmd prompt and finding the *"Run as Administrator* button in Windows 11. Otherwise it's Powershell (Admin) or CMD/Command Prompt (Admin).

- **Run the install command** and restart your computer when prompted.
``` bash
wsl --install
```

- **Set up your Linux username and password** after restarting windows and opening the ubuntu terminal. You can open the Ubuntu terminal by going to opening the **Terminal** CLI in Windows 11 and finding the dropdown ( V ) button.
Keep in mind that this account is independent to your microsoft/windows account, if you have one.


### Step 2: Installing VSCode.
To use VSCode with WSL, you will have to install the windows version of VSCode not the WSL one.

- So as usual, you just have to go on the [official Visual Studio Code website](https://code.visualstudio.com/) and head directly to the [VSCode Downloads](https://code.visualstudio.com/Download) button and click Windows or [click here](https://code.visualstudio.com/thank-you?dv=win64user).
- **Run the installer** after it has been finished downloading and follow the prompts. Make sure to also check the ***ADD to PATH*** option during your installation as this is crucial to ensure you can use vscode in wsl by typing `code` in the WSL Terminal.


### Step 3: Install the WSL Extension in VS Code

Once you are done installing, imediately open VSCode to install the necessary extensions speficially the most important one called: **"Remote Development extension pack or Remote - WSL extension"**. This ensure you can run in a "client-server", with the UI on Windows and most of the development in happen remotely inside WSL.

1. Open **VS Code** in Windows.
2. **Go to the Extensions view** by clicking the extensions icon on the left sidebar or pressing `Ctrl`+`Shift`+`X`.
2. **Search for "WSL"** and install the **Remote - WSL** extension provided by Microsoft. (Alternatively, you can install the full [Remote Development extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack) which includes the WSL extension and some pretty neat features too.)

### Step 4: Open a WSL Project in VS Code.

Now that you are done with the earlier procedures, you can now proceed to code in **VSCode with a WSL Terminal**. And now, you can also run or open your Linux file system directly in WSL terminal or from within VS Code.

* From the WSL terminal (recommended for best performances):
    * Open your Linux distribution (in most cases and in your case, this is Ubuntu.) from the Windows Start menu.
    * Navigate to your desired projet folder (e.g., `cd projects/myproject`).
    * Type the following command to open the current directory in VS Code:
    ```bash
    code .
    ```
    * The first time you run this, VS Code will install its server components in the Linux environment. A notification in the bottom-left corner of VS Code will indicate that you are connected to WSL (e.g., WSL: Ubuntu).
* or From **VS Code's command palette:
    * Open VS Code.
    * Press `F1` (or `Ctrl`+`Shift`+`P`) to open the command palette.
    * Type `WSL: Connect to WSL` and select it from the dropdown list.

And you are basically done. You can now code/develop/create your projects using Linux tools and the Linux file system (recommended) within the familiar VS Code inteface running on Windows.


</details>

## Step-By-Step Instrution for Makefile Integeration
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