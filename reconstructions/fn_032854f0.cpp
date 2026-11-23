#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486e3c;
extern "C" RuntimeTag data_10487328;
extern "C" const RuntimeVTable data_102a03a8;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102a0398;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102a02b8;

typedef Token<&data_10486e3c, &data_10487328, &data_102a03a8> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102a0398> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102a02b8> Type2;

extern "C" bool fn_032854f0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
