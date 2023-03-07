# animation
"A cool animation" -somebody

Made with [SFML 2.5](https://www.sfml-dev.org/tutorials/2.5). Install SFML with:
```
sudo apt-get install libsfml-dev
```
[Commands for compiling](https://www.sfml-dev.org/tutorials/2.5/start-linux.php) are in the makefile. Although note that this will NOT [link it statically](https://www.sfml-dev.org/faq.php#build-link-static)

Build and run using: (respectively)
```
make exe
./exe
```
(in the repo directory)
or the equivalent
```
make run
```

![ezgif-4-80818d8949](https://user-images.githubusercontent.com/75807819/223571743-a7ac0a2a-9b80-4f30-af57-4edefb367414.gif)


app.exe is the compiled and statically linked execuable (built on win10 but likely works on win11 too) so that it will run on its own without any installation required (not that you should trust unknown executables though), it's present for demonstration purposes since setting up SFML on windows is not as straightforward sometimes. Might even have to build SFML from source if there is a version mismatch between (say) the MinGW installation used to build the libraries provided as installation and the MinGW installation on your system. But atleast we get the choice to link statically or dynamically on windows.
