    #include <stdio.h>
    #include <string.h>
    #include <lua.hpp>
    #include <lauxlib.h>
    #include <lualib.h>
    
    int main (int argc, char *argv[]) {
      char buff[256];
      int error;

      printf("Assignment #3-1, Micah Joseph Grande, micah.grande@gmail.com\n");

      lua_State *L = luaL_newstate();
      luaL_openlibs(L); 

      luaL_dofile(L, argv[1]);

      lua_close(L);
      return 0;
    }

