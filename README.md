Pocket Go Key Combination
===

I made this for my own use, if you want to use it go ahead. 
Not complete, you gotta make it ~~start on boot or something not 100% sure~~. Yes, you have to make it start on boot. Compile it and put it in some folder. Then edit `/etc/main` (it's a bash file) and make it start before the while loop.

The code is **UP RIGHT LEFT DOWN** by default, there is ~~no way to change it except editing the code but that is quite easy to do~~, the trick is compiling... Ask some dudes [here](https://discord.gg/WkYGcVQ) for help with that.
You still need to edit the code and recompile but the combination is now stored in an array so you can change and add whatever you want too to that, just remember to update the array size.

The available keys are

| **Key**     | **Key Code**   |
|-------------|----------------|
| Up          | SDLK_UP        |
| Down        | SDLK_DOWN      |
| Left        | SDLK_LEFT      |
| Right       | SDLK_RIGHT     |
| B (Y)       | SDLK_SPACE     |
| A (B)       | SDLK_LCTRL     |
| TB (X)      | SDLK_LSHIFT    |
| TA (A)      | SDLK_LALT      |
| START+A (R) | SDLK_TAB       |
| START+B (L) | SDLK_BACKSPACE |
| SELECT      | SDLK_ESCAPE    |
| START       | SDLK_RETURN    |
| R           | SDLK_RCTRL     |

### IMPORTANT - NOT TESTED
I have not tested this as my device hasn't arrived yet.

### Thanks
 - FLG82
 - TriForce
 - sauce
 - JamesOFarrel
 - dirb
 - lastname dawg
 - Maf's hat is a water droplet
