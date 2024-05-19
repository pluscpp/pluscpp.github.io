# pluscpp.github.io
Personal Page

---

# SMK
Install
> Minimal to run: `sudo apt install xorg-dev libgl1-mesa-dev libpulse-dev`(APT)
```bash
git clone https://github.com/ArthurSonzogni/smk
cd smk
cmake -B build .
cd build
make
sudo make install
```

Build this example:
Use this: `./smk/main.cpp` and `./smk/CMakeLists.txt`

Compile for web:
> Need [emscripten](https://terminalroot.com.br/2023/02/como-transformar-seus-jogos-c-cpp-para-web-com-emscripten-sdl2.html). Use this `smk/index.html`.
```bash
emcmake cmake -B web .
cd web
make
emrun index.html
```

Compile for desktop:
```bash
cmake -B desktop .
cd desktop
make
./main
```

## SMK Web:
### <https://pluscpp.github.io/smk/>

---

## Dear ImGui, C++, OpenGL e SDL2
### <https://pluscpp.github.io/imgui/>



