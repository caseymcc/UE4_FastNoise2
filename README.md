# UE4_FastNoise2
Example for how to use [UE4CMake](https://github.com/caseymcc/UE4CMake) to import FastNoise2 into UE4, check there for more information on how this example works

This repo uses submodules for UE4CMake and FastNoise2, therefor you will need to either check out the repo with submodules or init them after you clone the repo

Use to checkout with submodules
```
git clone --recurse-submodules https://github.com/caseymcc/UE4_FastNoise2.git
```

or to checkout then update the submodules
```
git clone https://github.com/caseymcc/UE4_FastNoise2.git
git submodule update --init --recursive
```

# Include and Using the lib
Once checkout you can use either VS2022 or VSCode on windows to build or VSCode on Linux to build. An example on how to include and use FastNoise in you source can be seen in the `FastNoise2ExampleGameModeBase.cpp` file. You should be able to include simply using `FastNoise` before the file you would like to include, like this 
```
#include "FastNoise/FastNoise.h"
```
and using the library is a simple as calling the functions in the library
```
FastNoise::SmartNode<FastNoise::OpenSimplex2> os2Noise=FastNoise::New<FastNoise::OpenSimplex2>();
FastSIMD::eLevel simdLevel=os2Noise->GetSIMDLevel();
```