#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104867b4;
extern "C" RuntimeTag data_104868e0;
extern "C" const RuntimeVTable data_100049b4;
extern "C" unsigned data_104867b0;
extern "C" RuntimeTag data_104868dc;
extern "C" const RuntimeVTable data_100049a4;
extern "C" unsigned data_104867ac;
extern "C" RuntimeTag data_104868d8;
extern "C" const RuntimeVTable data_10004994;

typedef Token<&data_104867b4, &data_104868e0, &data_100049b4> Type0;
typedef Token<&data_104867b0, &data_104868dc, &data_100049a4> Type1;
typedef Token<&data_104867ac, &data_104868d8, &data_10004994> Type2;

extern "C" bool fn_020234b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
