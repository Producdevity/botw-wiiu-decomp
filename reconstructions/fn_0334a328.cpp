#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490028;
extern "C" RuntimeTag data_10493260;
extern "C" const RuntimeVTable data_102b46ac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102b469c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b468c;

typedef Token<&data_10490028, &data_10493260, &data_102b46ac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102b469c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b468c> Type2;

extern "C" bool fn_0334a328(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
