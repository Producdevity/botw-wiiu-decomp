#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104887bc;
extern "C" RuntimeTag data_104887c0;
extern "C" const RuntimeVTable data_1004aca4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004ac94;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004ac84;

typedef Token<&data_104887bc, &data_104887c0, &data_1004aca4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004ac94> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004ac84> Type2;

extern "C" bool fn_021e3164(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
