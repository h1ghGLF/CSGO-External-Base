# CSGO-External-Base
![image](https://user-images.githubusercontent.com/105994827/213940195-d74f561b-db96-473e-a846-290abe3d3e07.png)

# Things it has
- Has basic menu that displays the client.dll and engine.dll addresses
- Has a memory class so you dont need to make your own one you filthy paster
- Has namespace for settings like bool etc.
- Has a good project structure

# Usable for any game
To change the game you read/write the memory from/to you just need to to change "csgo.exe" in main to any game name.

```cpp
Memory mem{ "csgo.exe" }; //change to any game name
```
