#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486a9c;
extern "C" RuntimeTag data_1048b0b0;
extern "C" const RuntimeVTable data_100c0690;
extern "C" unsigned data_1048624c;
extern "C" RuntimeTag data_104864ac;
extern "C" const RuntimeVTable data_100c0668;
extern "C" unsigned data_1048623c;
extern "C" RuntimeTag data_104864a8;
extern "C" const RuntimeVTable data_100c0648;

typedef Token<&data_10486a9c, &data_1048b0b0, &data_100c0690> Type0;
typedef Token<&data_1048624c, &data_104864ac, &data_100c0668> Type1;
typedef Token<&data_1048623c, &data_104864a8, &data_100c0648> Type2;

extern "C" bool fn_0247d568(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
