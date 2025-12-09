# Update Submoduls
git submodule update --init --recursive

or

git submodule add -b 4.5 https://github.com/godotengine/godot-cpp.git godot-cpp
git submodule add -b 4.5 https://github.com/godotengine/godot.git godot
git submodule add https://github.com/microsoft/vcpkg vcpkg
  
# Install scons
pip install scons

# Godot engine Download Link 
https://godotengine.org/

Copy binaries into `bin/<version>/`