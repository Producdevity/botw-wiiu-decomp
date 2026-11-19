#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489d60;
extern "C" RuntimeTag data_10489d64;
extern "C" const RuntimeVTable data_10084380;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10084360;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10084350;

typedef Token<&data_10489d60, &data_10489d64, &data_10084380> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10084360> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10084350> Type2;

extern "C" bool fn_02319d9c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
