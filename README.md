# FlightSimulator-Interpreter
Course in C++ programming language - Project 3, first milestone

This project implements an interpreter for a simple domain-specific language geared toward flight simulation.  
The interpreter reads commands, expressions, and variable bindings (from input scripts or interactive mode) and executes them in the simulation context.  

![alt text](https://github.com/NarkisShallev/FlightSimulator-Interpreter/blob/master/1.png)

---

## 🚀 Features  
- Parse and execute commands such as `openDataServer`, `connect`, `var`, `print`, `while`, `if`, `equal`, etc.  
- Expression evaluation (arithmetic, variables, bindings).  
- Binding of simulation data variables to local variables (data-binds).  
- Reading from a simulated server (data reader) and writing to a simulated client (data writer).  
- Control flow support: conditional execution and loops.  
- Clean modular architecture: Command classes, Expression classes, DataBind, Reader/Writer, etc.

---

## Getting Started  
### 🧩 Prerequisites  
- C++ compiler with C++11 or later support (e.g., g++, clang++)  
- CMake (version 3.x)  
- A terminal / command-line environment  
- A flight simulation data server or simulation input for testing data bindings

### 🛠️ Installation
```cpp
git clone https://github.com/NarkisShallev/FlightSimulator-Interpreter.git  
cd FlightSimulator-Interpreter  
mkdir build && cd build  
cmake ..  
make
```

Once built, you can run the interpreter executable (for example ./interpreter if named so), passing a script file or using interactive mode.

```cpp
./interpreter script.txt  
# or  
./interpreter  
> var x = 5  
> print x
```

If your script uses data server bindings, make sure the simulated server is running or data input is being provided.

### 🗂️ Usage
Here is a small snippet of what a script might look like:

![alt text](https://github.com/NarkisShallev/FlightSimulator-Interpreter/blob/master/2.png)

## 🏗️ Architecture & Design  
- **Command Pattern**: Each command in the language is implemented as a class deriving from a base `Command` interface (e.g., `PrintCommand`, `WhileCommand`, `OpenDataServerCommand`).  
- **Expression Handling**: Expressions are parsed into expression trees and evaluated at runtime.  
- **Data Binding**: The interpreter supports binding simulation variables (for example, flight instrumentation values) to local names; updates propagate accordingly.  
- **Server/Client Simulation**: The project includes modules to simulate a data server (sending flight simulation values) and a client writer (receiving/writing values).  
- **Parser & Text Analyzer**: Text input (script files or interactive lines) is analyzed, tokenized, parsed into commands and expressions, then executed sequentially.  
- **Modular Layout**: Files and components are organized into intuitive modules: `Commands`, `Expression`, `DataBinds`, `DataReaderServer`, `DataWriterClient`, etc.

## 👨‍💻 Author
Developed by Narkis Shallev
