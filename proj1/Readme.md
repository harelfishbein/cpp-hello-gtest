# Building
Running build.sh will currently fail because gtest 1.13 needs to built from source and isn't avalable for the platforms I use.

The project aims to teach me about reproducable builds with C++ by versioning the build tools (other than conan 2).
Meson (by extension Ninja) and pkgconf used for the build are versioned in the conanfile.txt
