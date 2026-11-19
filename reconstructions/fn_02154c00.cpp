#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487df8;
extern "C" RuntimeTag data_10487dfc;
extern "C" const RuntimeVTable data_1002f840;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002f830;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002f820;

typedef Token<&data_10487df8, &data_10487dfc, &data_1002f840> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002f830> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002f820> Type2;

extern "C" bool fn_02154c00(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
