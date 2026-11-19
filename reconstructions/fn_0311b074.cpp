#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490144;
extern "C" RuntimeTag data_104925fc;
extern "C" const RuntimeVTable data_10282b2c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10282b1c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10282b0c;

typedef Token<&data_10490144, &data_104925fc, &data_10282b2c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10282b1c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10282b0c> Type2;

extern "C" bool fn_0311b074(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
