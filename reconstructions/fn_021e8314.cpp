#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048735c;
extern "C" RuntimeTag data_10487360;
extern "C" const RuntimeVTable data_1004c318;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004c308;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004c2f8;

typedef Token<&data_1048735c, &data_10487360, &data_1004c318> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004c308> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004c2f8> Type2;

extern "C" bool fn_021e8314(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
