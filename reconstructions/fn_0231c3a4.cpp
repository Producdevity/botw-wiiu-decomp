#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489d90;
extern "C" RuntimeTag data_10489d94;
extern "C" const RuntimeVTable data_10084ab0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10084aa0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10084a90;

typedef Token<&data_10489d90, &data_10489d94, &data_10084ab0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10084aa0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10084a90> Type2;

extern "C" bool fn_0231c3a4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
