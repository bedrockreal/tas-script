#pragma once

#include <switch.h>
#include <cstring>
#include <string>
#include <sol/sol.hpp>

#include "format.hpp"

extern HiddbgHdlsSessionId sessionId;
extern u8 *workmem;
extern size_t workmem_size;

typedef struct
{
    HiddbgHdlsHandle handle;
    HiddbgHdlsState state;
} Controller;

void registerHIDDBG(sol::state &lua);
