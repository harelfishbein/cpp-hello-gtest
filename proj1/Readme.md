# Building
Running build.sh will currently fail because gtest 1.13 needs to built from source and isn't avalable for the platforms I use.

```ERROR: Missing prebuilt package for 'gtest/1.12.1'```

My settings are:

```
[settings]
arch=x86_64
build_type=Release
compiler=clang
compiler.cppstd=20
compiler.libcxx=libstdc++
compiler.version=11
os=Linux
```

To fix this add the build argument to the conan install command. `--build=gtest/1.13.0`

The project aims to teach me about reproducable builds with C++ by versioning the build tools (other than conan 2).
Meson (by extension Ninja) and pkgconf used for the build are versioned in the conanfile.txt
