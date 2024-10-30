# Repo guide

## How to get the src
```
git clone http://gitlab.seleon.de/embedded/stm32-cmake-builds.git
```

## Howo make changes
1. create a feature branch either on the Github UI or via git
```
git checkout -b feature1
```
2. make changes and commit increments
3. push changes
```
git push
```
4. create merge request via github UI


## How to build the project

### local builds
The following commands work in Powershell and were run from the root directory of the repo. You can replace "Release" with "Debug" if needed.

1. Rebuild image if Dockerfile changed.
2. Fire up the container and rund build script.
```
docker compose -f ./Docker/docker-compose.yml build
docker compose -f ./Docker/docker-compose.yml run --rm stm32-build sh build.sh Release
```

### CI

#### Static analysis
2Do:
- [ ] define Tool - PCLint?

#### Build
2Do:
- [ ] describe docker setup

#### Unit Tests
2Do:
- [ ] define tool - gtest?

#### Configure GoogleTest Framework

Building and running Tests
```
cd Tests        
mkdir build                               # Create a directory to hold the build output.
cd build
cmake .. -G "MinGW Makefiles"            
make                                      # Build and link executables of googletest, test files and Stm source files
make runTests                             # Run Tests
```




## How to Debug

## How to flash
