#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486be4;
extern "C" RuntimeTag data_10486bf4;
extern "C" const RuntimeVTable data_10008008;
extern "C" unsigned data_10486b60;
extern "C" RuntimeTag data_10486b9c;
extern "C" const RuntimeVTable data_10007ff8;
extern "C" unsigned data_104868a4;
extern "C" RuntimeTag data_10486b30;
extern "C" const RuntimeVTable data_10007fe8;

typedef Token<&data_10486be4, &data_10486bf4, &data_10008008> Type0;
typedef Token<&data_10486b60, &data_10486b9c, &data_10007ff8> Type1;
typedef Token<&data_104868a4, &data_10486b30, &data_10007fe8> Type2;

extern "C" bool fn_0204069c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
