# SatisfactoryModLoader
A tool used to load mods for the game Satisfactory. It's under development until Coffee Stain releases a proper Unreal modding API.

# Discord Server
Join our [discord server](https://discord.gg/QzcG9nX) to talk about SML or just Satisfactory Modding in general.

# DISCLAIMER
The developers of SML are not responsible for any damage to your system caused by mods developed with Satisfactory Mod Loader. Any mods that you download are AT YOUR OWN RISK and we cannot be responsible for the content of said mods and any damage that might be done to your system.

For those who enjoy lawyer speak:

This software is provided by the author "as is". In no event shall the author be liable for any direct, indirect, incidental, special, exemplary, or consequential damages (including, but not limited to procurement of substitute goods or services; loss of use, data, or profits; or business interruption) however caused and on any 
theory of liability, whether in contract, strict liability, or tort (including negligence or otherwise) arising in any way out of the use of this software, even if advised of the possibility of such damage.

# Compilation instructions
When this tool is ready to use, stable releases will be found in the releases section. For now, you can compile this yourself.
## Required tools
* Visual Studio 2017

When you clone this repository, you will see that there are 3 projects: SatisfactoryModLoader, BaseMod, and xinput1_3. SatisfactoryModLoader houses the code which runs the modloader and the associated code, BaseMod is the basic modding framework for mods to build off of, and xinput1_3 is a wrapper for the modloader which allows it to run automatically when the Satisfactory .EXE is started.
The xinput1_3 project is the one that you need. __Make sure you are building with the configuration options Release and x64! It will not work otherwise!__
Build the xinput1_3 project and the DLL that you need will appear in x64/Release.
## Running instructions
Take the xinput1_3.dll file and place it next to FactoryGame/Binaries/Win64/FactoryGame-Win64-Shipping.exe (the game install directory), and then click that exe to run. If everything went well, a console window should appear. If you click "ok" Satisfactory will run as normal.

Mods will be loaded from FactoryGame/Binaries/Win64/mods.
