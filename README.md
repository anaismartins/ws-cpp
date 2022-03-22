# C++ Basics Workshop

Welcome to the **C++ Basics Workshop**! This workshop is made as a part of a set of basic tools workshops for the [HackerSchool](http://hackerschool.tecnico.ulisboa.pt/) recruitment.
It follows the main topics for beginners in programming and in C/C++ specifically:

* Why C++?
* My First Program in C++: Hello World!
* Namespace std
* C++ is a Compiled Language: G++
* A Quick Overview of Makefiles
* Input/Output (for the Terminal and Files)
* Variables
* Operators
* If Statements, Loops and Other Useful Logic
* Functions
* Object Oriented Programming

It is accompanied by a presentation, also published in this repository.

---

## Setup/Installation

**Linux:**

For installing the C++ Compiler on Linux, simply run the following command on a terminal:

```
sudo apt install g++
```

Check if the installation was done correctly by running:

```
g++ --version
```


**MacOS:**

For installing the C++ Compiler on MacOS, run `g++` on a terminal. If g++ is not installed, you should get a popup asking if you'd like to install the compiler; click **Install**.

Check if the installation was done correctly by running `g++` again. The terminal should respond with `no input files`.


**Windows:**

For installing the C++ Compiler on Windows, start by installing Mingw-w64, by following the instructions on the [MSYS2 website](https://www.msys2.org/). Afterwards, to be able to use G++, you need to add Mingw-w64 to your PATH. Do so by:

1. Open **Settings** and go to **Edit environment variables for your account**.
2. Select **PATH** and click **Edit**.
3. Select **New** and add the folder path to the **bin** folder on your **mingw64** folder. If you used the default folder path given by MSYS2, your path should be `C:\msys64\migw64\bin`. If not, you can check the path by getting to the **bin** folder using your File Explorer

![image](https://user-images.githubusercontent.com/80634052/159275214-1225c148-145c-430e-b073-e638af0128f7.png)

and clicking the path bar. The path should appear in text, like so

![image](https://user-images.githubusercontent.com/80634052/159275863-7f254f96-377f-4ff7-91dd-713031b24abd.png)


Check if the installation was done correctly by running the following command on a terminal:

```
g++ --version
```
