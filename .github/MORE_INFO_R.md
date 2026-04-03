# Base-0's Extensive README

## Table of Contents
* [Getting Started](#getting-started)
* [Core Principles](#core-principles-ai-augmented-learning)
* [Repository Strucutre](#repository-structure)
    * [Recommended Workflow](#recommended-workflow)
* [Technical Requirements](#technical-requirements)
* [Technical Instructions](#technical-instructions)
    * [How to start developing](#how-to-start-developing)
        * [Step 1: WSL](#step-1-install-wsl-windows-subsystem-for-linux)
        * [Step 2: VSCode](#step-2-installing-vscode)
        * [Step 3: VSCode Extensions](#step-3-install-the-wsl-extension-in-vs-code)
        * [Step 4: Code with WSL](#step-4-open-a-wsl-project-in-vs-code)
    * [Makefile Instructions](#makefile-instructions)
        * [Running Code with Makefile](#running-code-with-makefile)
        * [Compilation Only](#compilation-only)
        * [System Maintenance](#system-maintenance)
* [Repository's Purpose](#repositorys-purpose)
    * [Other Inteded Purpose](#other-intended-purpose)
    * [Other FAQs](#how-is-it-different-from-other-tutorials-of-c)

## Getting Started
I, thank you for being interested in this repository since you are reading this README extension. So, this readme will tell you more about our repository and its current progress.

But before that we should probably start with the ethical standards of this repository, such as:

## Core Principles: "AI Augmented Learning"
This repository was made by hand and with a little bit use of AI, at the time you are reading this. So I highly suggest using AI, but only if you met any of these criterias:

* Need more thorough explanation of some concepts.
* Struggling with the concepts after experimenting.
* More clarifications about some codes.

I can relate with most people that we do struggle understanding some concepts or complex method sometimes. That's why there are forums and a search engine to help you learn it further as well as the rise of AI being a more well-rounded and personalized bot for alot of uses.

However, since AI has made all of those information gathering more compact and personalized. There is also a risk of gaining a hollow knowledge, this means that you know what the thing is but you don't know *what it does* or *why it exists*. And this leaves alot of new developers to be more prone to error by alot.

So what i want you to do, is to use AI as much as you want but only following certain criterias. This way, you will learn alot better if you struggle on the concepts itself. Although gaining knowledge beforehand will boosts your problem solving more. So you can do whatever you want BUT within the limitations.

## Repository Structure
Most of you are probably curious at the time of reading this on what the file structure looks like (i don't know why you haven't looked on files itself). Hence, i will put the structure of repository here, but do remember that **this is only identical with the actual structure of files found in repository as well.**

For people who are curious about the repository structure, here it is:

```text
./
├── bin/            # Compiled executable outputs and temporary object files.
├── docs/           # Manuals, lab notes, diagrams and other documentations.    
├── src/            # Main directory of the codes.
    ├── core/       # Fundamental C syntax, data-types, and control flow logic.
    ├── exercises/  # Practice, Quizzes, and Drills to solidify your understanding of concepts.
    └── memory/     # Advanced memory management, pointer arithmetic, and segmentation concepts.
```

There are more stuff that will be implemented as soon as it's finished.

### Recommended Workflow

> In each file of on each concepts, there is comment that explains a tiny-bit of information about the concepts and how it works. I highly suggest reading those, if you manage to ignore it somehow.
>
> As well as reading the documentations of each concepts in our `docs/` directory for more explanation on how things work on each concepts.


## Technical Requirements
First off, if you wanna have a more smoother experience following this repository i highly suggest following the requirements below:

* **Language:** C (C99/C11).
* **Build System:** Makefile.
* **Environment:** WSL / Linux.
* **IDE:** VSCode.

Assuming you followed this correctly, you will greatly benefit using makefile as your coderunner than standard `gcc`, as this makes everything a bit more easier to run with a simple command.

However, if you the makefile does not server a purpose in your workflow or you don't like it and want to change it. You can do so by following a [makefile guide](https://makefiletutorial.com/). From there, you can search around for instructions and what suits your needs. At the same time, you can also use AI for more personalized one and less hassle on coming up with a better automation workflow.


## Technical Instructions

If you proceeded to this section, you probably don't want any hassle of changing anything before you even write or understand the code. So here are some instructions on how to install everything with WSL (assuming you want to use WSL).

### For starters, we can proceed first with installing your coding environment

<details>
<summary><b>Instructions for installing coding environment (Click me).</b></summary>

## How to start developing

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


### Here is also the guide for the default built-in makefile for this repository

<details>
<summary><b>Makefile instruction on how to run code (Click me).</b></summary>

## Makefile Instructions

This repository utilizes a dynamic **Makefile** for targeted compilation of isolated `.c` files. The compiler output is automatically routed to the `bin/` directory: 

### Running Code with Makefile

To run your code using makefile, pass the file path to the `FILE` variable:

```bash
make run FILE=<directory>/<subdirectory>/<filename>.c
```
Example: 
```bash
make run FILE=src/labs/lab_mem_addresses.c
```
This approach explicitly defines the variable structure while providing a frictionless test command.

### Compilation Only

To compile your code without running with we can go with `make build`:

```bash
make build FILE=src/core/02_loops/core_loop_for.c
```

### System Maintenance

If you want to clean your `bin/` directory, you can easily just execute `make clean` like the one below:

```bash
make clean
```
</details>

## Repository's Purpose

As the title suggests, this repository also serves a single purposes. It's a purpose that is more subjective and rather controversial (if i say so). So i suggest you read this part and decide whether or not this repository is for you as a Contributer/Member or a Learner.

Let's go straight to the point, this repository's purpose is to **serve and help learners across different roles.** Meaning that even if you are a contributor or a learner, you will learn alot better about the code, repository, maintaing or even the people that also handles this repository itself, if you are more active either by collaborating with others or suggesting issues. This might sound something out of a motivational speech or something more personal but as we said, the purpose is to encourage and foster team collab across beginners in `C Language`.

* It's Core Lessons are:
    * **Solidify understanding of C syntax.**
    * **Understanding how C interacts with memory.**
    * **Helps you understand how dangerous unoptimized codes are.**
* It's Core Values are:
    * **Providing team collaboration with other people with or without the same skill set.**
    * **Fosters growth by learning along with each other.**

Just think of this as an Cloud Classroom because Online would require a meeting on apps like **GoogleMeet** or **Zoom**. Rather than just a simulated classroom with a tools and environment of a startup company. Not that i would say that it is, but it's only an example.

And that's about it, this repository is good for people who come across with this repository while thinking about learning C for a while, but wanted to have a "coop experience" per se. Kinda like souls multiplayer but with programming.

### Other Intended Purpose

> Students interested in learning C who have stumbled across this repository, or anyone interested in viewing the historical learning progress and evolution of n-mee as a developer.

### How is it different from other tutorials of C?

> Like i said, unlike static tutorials, this is an interactive journey secured by version control. I invite contributors to suggest better coding styles, optimizations, or architectural fixes. This repository prioritizes collaborative work and team engagement. As well as encouraging beginners to atleast try to contribute with this repository as part of your learning progress.

---

*Created & Maintained by Cassian.*