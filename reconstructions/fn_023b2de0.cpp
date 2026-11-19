#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a5f0;
extern "C" RuntimeTag data_1048a5ec;
extern "C" const RuntimeVTable data_1009de30;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009de20;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009de10;

typedef Token<&data_1048a5f0, &data_1048a5ec, &data_1009de30> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009de20> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009de10> Type2;

extern "C" bool fn_023b2de0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
