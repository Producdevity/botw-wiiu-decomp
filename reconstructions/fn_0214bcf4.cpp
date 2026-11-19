#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487d50;
extern "C" RuntimeTag data_10487d54;
extern "C" const RuntimeVTable data_1002dc04;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002dbf4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002dbe4;

typedef Token<&data_10487d50, &data_10487d54, &data_1002dc04> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002dbf4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002dbe4> Type2;

extern "C" bool fn_0214bcf4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
