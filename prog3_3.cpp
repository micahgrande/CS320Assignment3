#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include "lua.hpp"

extern"C"
{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

using namespace std;

int main ( int argc, char *argv[] ) {
    
    
    cout<<"Assignment #3-3, Micah Joseph Grande, micah.grande@gmail.com\n";

    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L,argv[1]);
    
    string buff = "return InfixToPostfix(\"";
    string input;
    getline(cin,input);
    buff +=input;
    string end = "\")";
    buff+=end;
    char test[1024];
    strcpy(test,buff.c_str());
    luaL_dostring(L,test);
    cout << luaL_checkstring(L,1) <<end;


    lua_close(L);
    return 0;
}
