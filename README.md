Requirements for this template to work
1.  To run this template you should have GCC C++ compiler and the C/C++ extension for VS Code.
    To setup both, follow this https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites

How to run this project

1.  Clone this repo
2.  Open this repo as a folder in Visual Studio Code
3.  Open .vscode/c_pp_properties.json and set the "compilerPath" variable to your g++ compiler path (usually found in mingw/bin)
4.  Open .vscode/launch.json and set the "miDebuggerPath" variable to your gdb.exe path (usually found in mingw/bin)
5.  Open .vscode/tasks.json and set the "command" variable to your g++ compiler path (usually found in mingw/bin)
6.  In VSCode menu under `Run` option select `g++.exe - Build and Debug active file`