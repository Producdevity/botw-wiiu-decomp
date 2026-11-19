#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488c84;
extern "C" RuntimeTag data_10488c80;
extern "C" const RuntimeVTable data_10056930;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10056920;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10056910;

typedef Token<&data_10488c84, &data_10488c80, &data_10056930> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10056920> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10056910> Type2;

extern "C" bool fn_02216290(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
