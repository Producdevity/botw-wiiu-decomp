#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487d20;
extern "C" RuntimeTag data_10487d24;
extern "C" const RuntimeVTable data_1002d660;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002d650;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002d640;

typedef Token<&data_10487d20, &data_10487d24, &data_1002d660> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002d650> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002d640> Type2;

extern "C" bool fn_0214ac38(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
