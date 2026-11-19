#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bd7c;
extern "C" RuntimeTag data_1048bd80;
extern "C" const RuntimeVTable data_100ee1c8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ee1b8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ee1a8;

typedef Token<&data_1048bd7c, &data_1048bd80, &data_100ee1c8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ee1b8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ee1a8> Type2;

extern "C" bool fn_025cdb80(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
