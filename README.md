# Qt Template

A minimal Qt 6 Widgets application skeleton, used as a starting point for new
applications. It provides a main window designed with Qt Designer, a menu bar
with *Exit*, *About* and *About Qt* entries, an application icon and a status
bar.

## Requirements

- Qt 6.5 or newer (Widgets module)
- CMake 3.16 or newer
- A C++17 compiler

On Fedora:

```sh
sudo dnf install qt6-qtbase-devel cmake gcc-c++
```

## Starting a new application

Clone the template and run `customize` with the name of the new application:

```sh
git clone <this repository> myapp
cd myapp
./customize MyApp
```

This replaces every occurrence of `Template`, `TEMPLATE` and `template` in the
sources with `MyApp`, `MYAPP` and `myapp`, and renames the files accordingly
(`template.cpp` becomes `myapp.cpp`, `imgs/template.png` becomes
`imgs/myapp.png`, and so on). Run it only once, on a fresh copy.

Then replace `imgs/<appname>.png` and `<appname>.ico` with the new
application's icon, and edit the main window in `<appname>widget.ui` with
Qt Designer or Qt Creator.

## Building

```sh
cmake -S . -B build
cmake --build build
./build/template
```

The default build type is `Release`; pass `-DCMAKE_BUILD_TYPE=Debug` to
`cmake` for a debug build. To install the binary:

```sh
cmake --install build --prefix ~/.local
```

## License

This project is licensed under the GNU General Public License v3.0 or later.
See [LICENSE](LICENSE) for the full text.
