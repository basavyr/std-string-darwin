# `std::string` Darwin [clang]
Testing the `std::string` library on macOS 10.15 - Catalina

Compilation with `CLANG++` required for testing purposes within the latest macOS version.

```bash
clang++ --version
Apple clang version 11.0.3 (clang-1103.0.32.59)
Target: x86_64-apple-darwin19.3.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Cont
```

___

```bash
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ --version
Apple clang version 11.0.3 (clang-1103.0.32.59)
Target: x86_64-apple-darwin19.3.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

![](2020-05-18-19-58-47.png)

## Locations for `string.h` file - `XCODE`

* `/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1`


This is a location for various headers, including CUDA wrappers and vectorization

* `/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.3/include/`

Platform tools:

* `/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform`

![](2020-05-18-20-19-26.png)

![](2020-05-18-20-20-22.png)

SDK include directory

* `/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/string.h`

![](2020-05-18-20-24-29.png)


## Locations for `string.h` file - `CommandLineTools`

![](2020-05-18-20-28-40.png)

* `/Library/Developer/CommandLineTools/usr/include/c++/v1`

![](2020-05-18-20-34-08.png)

* `/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include`

### clang++ locations 

* clang - [symlink to `/usr/bin/`] `/Library/Developer/CommandLineTools/usr/bin`
* clang - [symlink to `/usr/bin`] `/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin`