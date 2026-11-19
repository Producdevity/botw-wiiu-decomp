#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489d50;
extern "C" RuntimeTag data_10489d54;
extern "C" const RuntimeVTable data_102b0b48;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102b0b38;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b0b28;

typedef Token<&data_10489d50, &data_10489d54, &data_102b0b48> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102b0b38> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b0b28> Type2;

extern "C" bool fn_03325b8c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
