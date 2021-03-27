
# StupidAndroidFeatureRemover
C program that removes the useless Android features/bloat of your choice. Currently only works on GNU/Linux (With some knowledge you can port it over to MacOS)
# Requirenments
- Android-tools (ADB)

Instructions:
```
Debian/Ubuntu (based):
sudo apt install adb

Arch/Manjaro (based):
sudo pacman -S android-tools

(if it doesn't work try this):
sudo pacman -S adb

Fedora/RHEL (DNF based):
sudo dnf install adb
```
On debian you'll also need:
- Build-essential(s) (GCC compiler)

To install enter:
```
sudo apt install build-essential
```
# Setting up your phone
To run your script you'll have to enable USB debugging. You can search the internet for a tutorial. It's not hard and takes 30 seconds, trust me ;)
# Running the program
Clone the repository and run the .sh script to compile and run the program. The program will automatically run and after you've configured your debloat file, it'll start debloating your phone.

Please follow these instructions:
```
Open a terminal and type in the following commands:

git clone https://github.com/JBGMR/StupidAndroidFeatureRemover.git
cd StupidAndroidFeatureRemover/

Now connect your phone and type in (please confirm if a message pops up on your phone):
sh StupidAndroidFeatureRemover.sh
```
# Notice
If something goes wrong or you have suggestions, please open an issue on GitHub. It really means a lot to me. thanks!
![](https://cdn.cloudflare.steamstatic.com/steamcommunity/public/images/avatars/f7/f71d13a4dd8a5bf5120525a8027b36cb98a3f1d4_full.jpg)
