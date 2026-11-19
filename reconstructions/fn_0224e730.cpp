#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486e9c;
extern "C" RuntimeTag data_10486ea0;
extern "C" const RuntimeVTable data_100612cc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100612bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100612ac;

typedef Token<&data_10486e9c, &data_10486ea0, &data_100612cc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100612bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100612ac> Type2;

extern "C" bool fn_0224e730(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
