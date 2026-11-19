#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488f70;
extern "C" RuntimeTag data_10488f6c;
extern "C" const RuntimeVTable data_1009fa1c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009fa0c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009f9fc;

typedef Token<&data_10488f70, &data_10488f6c, &data_1009fa1c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009fa0c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009f9fc> Type2;

extern "C" bool fn_023ba9c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
