# Repo guide

## How to get the src
```
git clone http://gitlab.seleon.de/embedded/stm32-cmake-builds.git
```
## Problems?
### Right SSL cert not used

"fatal: unable to access 'http://gitlab.seleon.de/embedded/stm32-cmake-builds.git': SSL certificate problem: unable to get local issuer certificate"

Try this:
```
git config --global http.sslbackend schannel
```

### Generate a key pair
If you do not have an existing SSH key pair, generate a new one:

1. Open a terminal.

2. Run ssh-keygen -t followed by the key type and an optional comment.
This comment is included in the .pub file that's created.
You should use your seleon email address for the comment.
```    
ssh-keygen -t ed25519 -C "<email>"
```

3. Press Enter. Output similar to the following is displayed:
```
Generating public/private ed25519 key pair.
Enter file in which to save the key (/home/user/.ssh/id_ed25519):
```

4. Accept the suggested filename and directory, unless you are generating a deploy key
or want to save in a specific directory where you store other keys.

5. Specify a passphrase
```
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
```

A confirmation is displayed, including information about where your files are stored.


### Steps to add SSH key to GitLab account
Add the public SSH key to your GitLab account
1. Open c:/users/<your_username>/.ssh/id_edxx.pub file.
2. Copy the whole file content to your clipboard.
3. Navigate to SSH key settings in GitLab. (https://gitlab.seleon.de/-/profile/keys)
4. Click on add new key.
5. In the key field, paste the copied key and click add key.


## Howo make changes
1. create a feature branch either on the Gitlab UI or via git
```
git checkout -b feature1
```
2. make changes and commit increments
3. push changes
```
git push
```
4. create merge request via gitlab UI


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
