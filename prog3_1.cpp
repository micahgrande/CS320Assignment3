#include <lua.hpp>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>
#include <stdio.h>

int main ( int argc, char *argv[] ) {

    printf("Assignment #3-1, Micah Joseph Grande, micah.grande@gmail.com\n");

    lua_State *L;
    L = luaL_newState();
    luaL_openlibs(L);
    luaL_dofile(L, argv[1]);

    lua_close(L);
    return 0;
}
