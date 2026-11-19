#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489ce8;
extern "C" RuntimeTag data_10489cec;
extern "C" const RuntimeVTable data_10082c6c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10082c5c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10082c4c;

typedef Token<&data_10489ce8, &data_10489cec, &data_10082c6c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10082c5c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10082c4c> Type2;

extern "C" bool fn_02312340(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
