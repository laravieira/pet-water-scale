### Install on Windows PowerShell
Make sure you have:
- Python 3.10 `For ESP-IDF`
- Git `For clone of repos`
- CLion `For coding and auto configure`

Clone project and sdk, install, export envs:
```shell
git clone https://github.com/laravieira/pet-water-scale
cd pet-water-scale
git clone --depth=1 https://github.com/espressif/esp-idf
cd esp-idf
install.ps1
export.ps1
cd ..
cp esp-idf/examples/get-started/hello_world hello_world
```
Set those envs into Environment, at:
 - `File >> Settings >> Build, Execution, Deployment >> CMake >> Environment`
 - `File >> Settings >> Tools >> Terminal >> Environment variables`

To see the values of the variables you need to set, type `$env:<env-name>` on the same Powershell instance that you ran the command `export.ps1`.

```yaml
Path: Copy all paths with espressif of `$env:PATH`, including the comma after the last path, and prepend on the current `Path` env. Hit enter to applly the prepend.
IDF_PATH: Value of `$env:IDF_PATH`
ESP_ROM_ELF_DIR: Value of `$env:ESP_ROM_ELF_DIR`
IDF_TARGET: Use the name of the device, in my case `esp32c3`.
ESPPORT: Use the USB port number the device is commected on, in my case `COM3`.
```

### Reference
- [JetBrains Tutorial](https://www.youtube.com/watch?v=M6fa7tzZdLw&t=1s&ab_channel=JetBrains)
- [ESP-IDF Repo](https://github.com/espressif/esp-idf)
- [ESP-IDF Hello world](https://github.com/espressif/esp-idf/tree/master/examples/get-started/hello_world)