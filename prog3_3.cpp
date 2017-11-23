#include <lua.hpp>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>
#include <stdio.h>

extern"C"
{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

using namespace std;

int main ( in argc, char *argv[] ) {
    
    char buff[256];
    string itp = "return InfixToPostfix(\"";
    string input;
    
    cout<<"Assignment #3-1, Micah Joseph Grande, micah.grande@gmail.com\n";

    lua_State *L;
    L = luaL_newState();
    luaL_openlibs(L);
    luaL_dofile(L, argv[1]);
    getline(cin,input);
    buff += end;
    
    strcpy(buff, itp.c_str());
    luaL_dostring(L,buff);
    cout << luaL_checkstring(L,1) << end;


    lua_close(L);
    return 0;
}
