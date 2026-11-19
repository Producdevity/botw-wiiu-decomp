#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049014c;
extern "C" RuntimeTag data_10492600;
extern "C" const RuntimeVTable data_10282c74;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10282c64;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10282c54;

typedef Token<&data_1049014c, &data_10492600, &data_10282c74> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10282c64> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10282c54> Type2;

extern "C" bool fn_0311c4cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
