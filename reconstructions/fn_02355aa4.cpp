#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a04c;
extern "C" RuntimeTag data_1048a050;
extern "C" const RuntimeVTable data_1008d1a8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008d198;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008d188;

typedef Token<&data_1048a04c, &data_1048a050, &data_1008d1a8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008d198> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008d188> Type2;

extern "C" bool fn_02355aa4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
