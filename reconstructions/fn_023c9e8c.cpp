#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a71c;
extern "C" RuntimeTag data_1048a720;
extern "C" const RuntimeVTable data_100a1ffc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a1fec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a1fdc;

typedef Token<&data_1048a71c, &data_1048a720, &data_100a1ffc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a1fec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a1fdc> Type2;

extern "C" bool fn_023c9e8c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
