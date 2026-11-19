#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a524;
extern "C" RuntimeTag data_1048a528;
extern "C" const RuntimeVTable data_1009bc48;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009bc38;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009bc28;

typedef Token<&data_1048a524, &data_1048a528, &data_1009bc48> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009bc38> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009bc28> Type2;

extern "C" bool fn_023a7a78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
