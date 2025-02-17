# basic_c_lang

```batch
@echo off
set arg=%~1
gcc %arg%.c -o %arg%
%arg%.exe
rem gcc -o "%~dp0%arg%.exe" "%~dp0%arg%.c";
rem "%~dp0\app" %*
```
