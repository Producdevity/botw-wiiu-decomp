#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489260;
extern "C" RuntimeTag data_1048925c;
extern "C" const RuntimeVTable data_10067940;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10067930;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10067920;

typedef Token<&data_10489260, &data_1048925c, &data_10067940> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10067930> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10067920> Type2;

extern "C" bool fn_0226c61c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
