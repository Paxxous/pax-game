# Structuring of the game

The game uses the build system cmake, which allows for it to be cross platform.

## Game engine

Thre game works under the hood through the engine folder, which holds the main classes and functions that work under the hood.

Everything is the entity class. Everything is the entity class. There's the base entity class, which is initialized through just providing x and y coordinates and an image.

## Cool archives

Here's the first test code:

```c++
engine::entity e(0.023, 213); // Yahoo! we got a pos system going :)
std::cout << e.get_pos().x << " | " << e.get_pos().y << "\n";

std::cout << CURRENT_VERSION << "\n";

engine::timestep dt;

for (int i = 0; i < 10000; i++) {
  dt.calc_dt();
  std::cout << dt.get_dt() << "\n";

  // SDL_Delay(1000);
}
// std::cout << dt.get_dt() << "\n";
```
