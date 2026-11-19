#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489908;
extern "C" RuntimeTag data_10489904;
extern "C" const RuntimeVTable data_10078294;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10078284;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10078274;

typedef Token<&data_10489908, &data_10489904, &data_10078294> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10078284> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10078274> Type2;

extern "C" bool fn_022dd710(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
