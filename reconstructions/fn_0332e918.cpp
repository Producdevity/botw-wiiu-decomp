#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486a90;
extern "C" RuntimeTag data_10486a94;
extern "C" const RuntimeVTable data_102b1f70;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102b1f60;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102b1d48;

typedef Token<&data_10486a90, &data_10486a94, &data_102b1f70> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102b1f60> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102b1d48> Type2;

extern "C" bool fn_0332e918(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
