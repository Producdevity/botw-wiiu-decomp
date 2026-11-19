#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104871d0;
extern "C" RuntimeTag data_104871d4;
extern "C" const RuntimeVTable data_100bd240;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100bd230;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100bd220;

typedef Token<&data_104871d0, &data_104871d4, &data_100bd240> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100bd230> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100bd220> Type2;

extern "C" bool fn_02468b40(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
