The Robohawks 8000X department. Coming soon.
<br>
Make sure that you have the VEX Robotics extension on Visual Studio Code!
<br>
If you want to use clang-format, first install clang-format:

Windows: `winget install -e --id LLVM.LLVM`

Mac: `brew install clang-format`

Ubuntu/Debian/Mint: `sudo apt install clang-format`

Fedora/RHEL/CentOS: `sudo dnf install clang-tools-extra`

Arch/Manjaro: `sudo pacman -S clang`

To verify the installation (all platforms): `clang-format --version`

To use clang-format on this project: First make sure you're in the root folder. Then run `find . -type f \( -name "*.cpp" -o -name "*.c" -o -name "*.hpp" -o -name "*.h" \) -exec clang-format -i {} +`